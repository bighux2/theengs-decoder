#include "common_props.h"

const char* _BEEWIBBW200_json = "{\"brand\":\"BeeWi\",\"model\":\"BBW200\",\"model_id\":\"BEEWI/BBW200\",\"tag\":\"01\",\"condition\":[\"manufacturerdata\",\"index\",0,\"0d0005\",\"|\",\"name\",\"=\",\"beewibbw200\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",7,4,false,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",15,2,false,false,false]}}}";
/* R""""(
{
   "brand":"BeeWi",
   "model":"BBW200",
   "model_id":"BEEWI/BBW200",
   "tag":"01",
   "condition":["manufacturerdata", "index", 0 , "0d0005", "|", "name", "=", "beewibbw200"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 7, 4, false, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 2, false, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 15, 2, false, false, false]
      }
   }
})"""";*/

const char* _BEEWIBBW200_json_props = _common_BVTH_props;