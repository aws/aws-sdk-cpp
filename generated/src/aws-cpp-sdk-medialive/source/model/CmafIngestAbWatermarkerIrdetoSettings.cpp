/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/CmafIngestAbWatermarkerIrdetoSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

CmafIngestAbWatermarkerIrdetoSettings::CmafIngestAbWatermarkerIrdetoSettings(JsonView jsonValue) { *this = jsonValue; }

CmafIngestAbWatermarkerIrdetoSettings& CmafIngestAbWatermarkerIrdetoSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("additionalDestinationsAlternateDestinations")) {
    Aws::Utils::Array<JsonView> additionalDestinationsAlternateDestinationsJsonList =
        jsonValue.GetArray("additionalDestinationsAlternateDestinations");
    for (unsigned additionalDestinationsAlternateDestinationsIndex = 0;
         additionalDestinationsAlternateDestinationsIndex < additionalDestinationsAlternateDestinationsJsonList.GetLength();
         ++additionalDestinationsAlternateDestinationsIndex) {
      m_additionalDestinationsAlternateDestinations.push_back(
          additionalDestinationsAlternateDestinationsJsonList[additionalDestinationsAlternateDestinationsIndex].AsObject());
    }
    m_additionalDestinationsAlternateDestinationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alternateDestination")) {
    m_alternateDestination = jsonValue.GetObject("alternateDestination");
    m_alternateDestinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customProfile")) {
    m_customProfile = jsonValue.GetObject("customProfile");
    m_customProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("license")) {
    m_license = jsonValue.GetString("license");
    m_licenseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatorId")) {
    m_operatorId = jsonValue.GetInteger("operatorId");
    m_operatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("polyPeriod")) {
    m_polyPeriod = jsonValue.GetInteger("polyPeriod");
    m_polyPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profile")) {
    m_profile = AbWatermarkingProfileMapper::GetAbWatermarkingProfileForName(jsonValue.GetString("profile"));
    m_profileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("watermarkIdLength")) {
    m_watermarkIdLength = AbWatermarkerIdLengthMapper::GetAbWatermarkerIdLengthForName(jsonValue.GetString("watermarkIdLength"));
    m_watermarkIdLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue CmafIngestAbWatermarkerIrdetoSettings::Jsonize() const {
  JsonValue payload;

  if (m_additionalDestinationsAlternateDestinationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalDestinationsAlternateDestinationsJsonList(m_additionalDestinationsAlternateDestinations.size());
    for (unsigned additionalDestinationsAlternateDestinationsIndex = 0;
         additionalDestinationsAlternateDestinationsIndex < additionalDestinationsAlternateDestinationsJsonList.GetLength();
         ++additionalDestinationsAlternateDestinationsIndex) {
      additionalDestinationsAlternateDestinationsJsonList[additionalDestinationsAlternateDestinationsIndex].AsObject(
          m_additionalDestinationsAlternateDestinations[additionalDestinationsAlternateDestinationsIndex].Jsonize());
    }
    payload.WithArray("additionalDestinationsAlternateDestinations", std::move(additionalDestinationsAlternateDestinationsJsonList));
  }

  if (m_alternateDestinationHasBeenSet) {
    payload.WithObject("alternateDestination", m_alternateDestination.Jsonize());
  }

  if (m_customProfileHasBeenSet) {
    payload.WithObject("customProfile", m_customProfile.Jsonize());
  }

  if (m_licenseHasBeenSet) {
    payload.WithString("license", m_license);
  }

  if (m_operatorIdHasBeenSet) {
    payload.WithInteger("operatorId", m_operatorId);
  }

  if (m_polyPeriodHasBeenSet) {
    payload.WithInteger("polyPeriod", m_polyPeriod);
  }

  if (m_profileHasBeenSet) {
    payload.WithString("profile", AbWatermarkingProfileMapper::GetNameForAbWatermarkingProfile(m_profile));
  }

  if (m_watermarkIdLengthHasBeenSet) {
    payload.WithString("watermarkIdLength", AbWatermarkerIdLengthMapper::GetNameForAbWatermarkerIdLength(m_watermarkIdLength));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
