#include "common_props.h"

const char* _WISER_ODACE_json = "";
/* R""""(
{
   "brand":"Schneider Electric",
   "model":"WiserOdace",
   "model_id":"Schneider/WiserOdace",
   "tag":"13",
   "condition":["manufacturerdata", "index", 0 , "b602010020000b", "&", "name", "contain", "Schneider_"],
   "properties":{
      "button":{
         "decoder":["string_from_hex_data", "manufacturerdata", 16, 2],
         "lookup":["01", "up",
                   "02", "down",
                   "03", "up_short",
                   "04", "down_short"]
      },
      "position":{
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 2, false, false, false],
         "post_proc":["/", 255.0, "*", 100.0]
      },
      "status":{
         "decoder":["string_from_hex_data", "manufacturerdata", 18, 2],
         "lookup":["00", "opened",
                   "ff", "closed"]
      }
   }
})"""";*/

const char* _WISER_ODACE_json_props = "";
/*
R""""(
{
   "properties":{
      "button":{
         "unit":"string",
         "name":"Button"
      },
      "position":{
         "unit":"%",
         "name":"Position"
      },
      "status":{
         "unit":"string",
         "name":"Status"
      }
   }
})"""";*/