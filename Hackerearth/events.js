/*The employee sheet contains the name of the employee in cell C2. The name of the employee should also be on the data sheet in the range B3:B153.

How can I get the rownumber of the cell on the data sheet that matches the employee name?

I tried the following script but it doesn't seem to work.*/

function rowOfEmployee(){
    var sheet = SpreadsheetApp.getActiveSpreadsheet().getActiveSheet();
    var sheet2 = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("Event");
    var data = sheet.getDataRange().getValues();
    var employeeName = sheet.getRange("A2:A").getValue();
    sheet2.getRange(2,7).setValue('Yes');
    for(var i = 0; i < 500 ; i++){
      var j=i+1;
      if(data[1][j] == employeeName){ //[1] because column B
        Logger.log((i));
        //var c_cell = data[i][7]
      //   sheet2.getRange().setValue('Yes');
      }
    }
  }
  
/*The employee sheet contains the name of the employee in cell C2. The name of the employee should also be on the data sheet in the range B3:B153.
How can I get the rownumber of the cell on the data sheet that matches the employee name?
I tried the following script but it doesn't seem to work.*/
// At this point of time while running the code, we are getting the proper txn id

function rowOfEmployee(){
    var event = SpreadsheetApp.getActiveSpreadsheet().getActiveSheet();
    var Attendee = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("Attendee");
    var present = Attendee.getDataRange().getValues();
    var attendeeCell = "";
    var attendeeID = "";
    var j = 0 ; 
    // var employeeName = sheet.getRange("A3").getValue();
    // sheet2.getRange(2,7).setValue(employeeName);
    for(var i = 1; i < 500 ; i++)
    {
      j = i+1;
      employeeCell =  "A"+i; 
      attendeeList = "A"+j;
      attendeeID =  Attendee.getRange(attendeeCell).getValue();
      event.getRange(i,7).setValue(attendeeID);
      //if(data[1][i] == employeeName){ //[1] because column B
        //Logger.log((i));
        //var c_cell = data[i][7]
      //   sheet2.getRange().setValue('Yes');
      }
    }
  
  
  