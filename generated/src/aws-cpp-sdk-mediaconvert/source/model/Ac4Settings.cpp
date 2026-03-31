/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/Ac4Settings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

Ac4Settings::Ac4Settings(JsonView jsonValue) { *this = jsonValue; }

Ac4Settings& Ac4Settings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bitrate")) {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bitstreamMode")) {
    m_bitstreamMode = Ac4BitstreamModeMapper::GetAc4BitstreamModeForName(jsonValue.GetString("bitstreamMode"));
    m_bitstreamModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codingMode")) {
    m_codingMode = Ac4CodingModeMapper::GetAc4CodingModeForName(jsonValue.GetString("codingMode"));
    m_codingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dynamicRangeCompressionFlatPanelTv")) {
    m_dynamicRangeCompressionFlatPanelTv = Ac4DynamicRangeCompressionDrcProfileMapper::GetAc4DynamicRangeCompressionDrcProfileForName(
        jsonValue.GetString("dynamicRangeCompressionFlatPanelTv"));
    m_dynamicRangeCompressionFlatPanelTvHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dynamicRangeCompressionHomeTheater")) {
    m_dynamicRangeCompressionHomeTheater = Ac4DynamicRangeCompressionDrcProfileMapper::GetAc4DynamicRangeCompressionDrcProfileForName(
        jsonValue.GetString("dynamicRangeCompressionHomeTheater"));
    m_dynamicRangeCompressionHomeTheaterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dynamicRangeCompressionPortableHeadphones")) {
    m_dynamicRangeCompressionPortableHeadphones =
        Ac4DynamicRangeCompressionDrcProfileMapper::GetAc4DynamicRangeCompressionDrcProfileForName(
            jsonValue.GetString("dynamicRangeCompressionPortableHeadphones"));
    m_dynamicRangeCompressionPortableHeadphonesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dynamicRangeCompressionPortableSpeakers")) {
    m_dynamicRangeCompressionPortableSpeakers = Ac4DynamicRangeCompressionDrcProfileMapper::GetAc4DynamicRangeCompressionDrcProfileForName(
        jsonValue.GetString("dynamicRangeCompressionPortableSpeakers"));
    m_dynamicRangeCompressionPortableSpeakersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loRoCenterMixLevel")) {
    m_loRoCenterMixLevel = jsonValue.GetDouble("loRoCenterMixLevel");
    m_loRoCenterMixLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loRoSurroundMixLevel")) {
    m_loRoSurroundMixLevel = jsonValue.GetDouble("loRoSurroundMixLevel");
    m_loRoSurroundMixLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ltRtCenterMixLevel")) {
    m_ltRtCenterMixLevel = jsonValue.GetDouble("ltRtCenterMixLevel");
    m_ltRtCenterMixLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ltRtSurroundMixLevel")) {
    m_ltRtSurroundMixLevel = jsonValue.GetDouble("ltRtSurroundMixLevel");
    m_ltRtSurroundMixLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleRate")) {
    m_sampleRate = jsonValue.GetInteger("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stereoDownmix")) {
    m_stereoDownmix = Ac4StereoDownmixMapper::GetAc4StereoDownmixForName(jsonValue.GetString("stereoDownmix"));
    m_stereoDownmixHasBeenSet = true;
  }
  return *this;
}

JsonValue Ac4Settings::Jsonize() const {
  JsonValue payload;

  if (m_bitrateHasBeenSet) {
    payload.WithInteger("bitrate", m_bitrate);
  }

  if (m_bitstreamModeHasBeenSet) {
    payload.WithString("bitstreamMode", Ac4BitstreamModeMapper::GetNameForAc4BitstreamMode(m_bitstreamMode));
  }

  if (m_codingModeHasBeenSet) {
    payload.WithString("codingMode", Ac4CodingModeMapper::GetNameForAc4CodingMode(m_codingMode));
  }

  if (m_dynamicRangeCompressionFlatPanelTvHasBeenSet) {
    payload.WithString(
        "dynamicRangeCompressionFlatPanelTv",
        Ac4DynamicRangeCompressionDrcProfileMapper::GetNameForAc4DynamicRangeCompressionDrcProfile(m_dynamicRangeCompressionFlatPanelTv));
  }

  if (m_dynamicRangeCompressionHomeTheaterHasBeenSet) {
    payload.WithString(
        "dynamicRangeCompressionHomeTheater",
        Ac4DynamicRangeCompressionDrcProfileMapper::GetNameForAc4DynamicRangeCompressionDrcProfile(m_dynamicRangeCompressionHomeTheater));
  }

  if (m_dynamicRangeCompressionPortableHeadphonesHasBeenSet) {
    payload.WithString("dynamicRangeCompressionPortableHeadphones",
                       Ac4DynamicRangeCompressionDrcProfileMapper::GetNameForAc4DynamicRangeCompressionDrcProfile(
                           m_dynamicRangeCompressionPortableHeadphones));
  }

  if (m_dynamicRangeCompressionPortableSpeakersHasBeenSet) {
    payload.WithString("dynamicRangeCompressionPortableSpeakers",
                       Ac4DynamicRangeCompressionDrcProfileMapper::GetNameForAc4DynamicRangeCompressionDrcProfile(
                           m_dynamicRangeCompressionPortableSpeakers));
  }

  if (m_loRoCenterMixLevelHasBeenSet) {
    payload.WithDouble("loRoCenterMixLevel", m_loRoCenterMixLevel);
  }

  if (m_loRoSurroundMixLevelHasBeenSet) {
    payload.WithDouble("loRoSurroundMixLevel", m_loRoSurroundMixLevel);
  }

  if (m_ltRtCenterMixLevelHasBeenSet) {
    payload.WithDouble("ltRtCenterMixLevel", m_ltRtCenterMixLevel);
  }

  if (m_ltRtSurroundMixLevelHasBeenSet) {
    payload.WithDouble("ltRtSurroundMixLevel", m_ltRtSurroundMixLevel);
  }

  if (m_sampleRateHasBeenSet) {
    payload.WithInteger("sampleRate", m_sampleRate);
  }

  if (m_stereoDownmixHasBeenSet) {
    payload.WithString("stereoDownmix", Ac4StereoDownmixMapper::GetNameForAc4StereoDownmix(m_stereoDownmix));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
