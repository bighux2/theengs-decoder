#include "common_props.h"

const char* _BEEWIBBW200_json = "{\"brand\":\"Otio\",\"model\":\"BBW200\",\"model_id\":\"BEEWI/BBW200\",\"tag\":\"01\",\"condition\":[\"manufacturerdata\",\"index\",0,\"0d0005\",\"|\",\"name\",\"=\",\"beewibbw200\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,4,true,true,false],\"post_proc\":[\"/\",10.0]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2,false,false,false]}}}";
/* R""""(
{
   "brand":"Otio",
   "model":"BBW200",
   "model_id":"BEEWI/BBW200",
   "tag":"01",
   "condition":["manufacturerdata", "index", 0 , "0d0005", "|", "name", "=", "beewibbw200"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 4, true, true, false],
         "post_proc":["/", 10.0]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 2, false, false, false]
      }
   }
})"""";*/

const char* _BEEWIBBW200_json_props = _common_BTH_props;