#include "openag_atlas_orp.h"

AtlasOrp atlas_orp_1(98);

void setup() {
  Serial.begin(9600);
  atlas_orp_1.begin();
}

std_msgs::Float32 orp_msg;

void loop() {
  atlas_orp_1.update();

  if (atlas_orp_1.get_water_oxidation_reduction_potential(orp_msg)) {
    Serial.print("Oxidation Reduction Potential: ");
    Serial.println(orp_msg.data);
  }
  if (atlas_orp_1.has_error) {
    Serial.print("Error: ");
    Serial.println(atlas_orp_1.error_msg);
    atlas_orp_1.has_error = false;
  }
}
