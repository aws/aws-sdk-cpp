/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Eac3Settings::Eac3Settings() : 
    m_attenuationControl(Eac3AttenuationControl::NOT_SET),
    m_attenuationControlHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Eac3BitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Eac3CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dcFilter(Eac3DcFilter::NOT_SET),
    m_dcFilterHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_dynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine::NOT_SET),
    m_dynamicRangeCompressionLineHasBeenSet(false),
    m_dynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf::NOT_SET),
    m_dynamicRangeCompressionRfHasBeenSet(false),
    m_lfeControl(Eac3LfeControl::NOT_SET),
    m_lfeControlHasBeenSet(false),
    m_lfeFilter(Eac3LfeFilter::NOT_SET),
    m_lfeFilterHasBeenSet(false),
    m_loRoCenterMixLevel(0.0),
    m_loRoCenterMixLevelHasBeenSet(false),
    m_loRoSurroundMixLevel(0.0),
    m_loRoSurroundMixLevelHasBeenSet(false),
    m_ltRtCenterMixLevel(0.0),
    m_ltRtCenterMixLevelHasBeenSet(false),
    m_ltRtSurroundMixLevel(0.0),
    m_ltRtSurroundMixLevelHasBeenSet(false),
    m_metadataControl(Eac3MetadataControl::NOT_SET),
    m_metadataControlHasBeenSet(false),
    m_passthroughControl(Eac3PassthroughControl::NOT_SET),
    m_passthroughControlHasBeenSet(false),
    m_phaseControl(Eac3PhaseControl::NOT_SET),
    m_phaseControlHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_stereoDownmix(Eac3StereoDownmix::NOT_SET),
    m_stereoDownmixHasBeenSet(false),
    m_surroundExMode(Eac3SurroundExMode::NOT_SET),
    m_surroundExModeHasBeenSet(false),
    m_surroundMode(Eac3SurroundMode::NOT_SET),
    m_surroundModeHasBeenSet(false)
{
}

Eac3Settings::Eac3Settings(JsonView jsonValue) : 
    m_attenuationControl(Eac3AttenuationControl::NOT_SET),
    m_attenuationControlHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Eac3BitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Eac3CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dcFilter(Eac3DcFilter::NOT_SET),
    m_dcFilterHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_dynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine::NOT_SET),
    m_dynamicRangeCompressionLineHasBeenSet(false),
    m_dynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf::NOT_SET),
    m_dynamicRangeCompressionRfHasBeenSet(false),
    m_lfeControl(Eac3LfeControl::NOT_SET),
    m_lfeControlHasBeenSet(false),
    m_lfeFilter(Eac3LfeFilter::NOT_SET),
    m_lfeFilterHasBeenSet(false),
    m_loRoCenterMixLevel(0.0),
    m_loRoCenterMixLevelHasBeenSet(false),
    m_loRoSurroundMixLevel(0.0),
    m_loRoSurroundMixLevelHasBeenSet(false),
    m_ltRtCenterMixLevel(0.0),
    m_ltRtCenterMixLevelHasBeenSet(false),
    m_ltRtSurroundMixLevel(0.0),
    m_ltRtSurroundMixLevelHasBeenSet(false),
    m_metadataControl(Eac3MetadataControl::NOT_SET),
    m_metadataControlHasBeenSet(false),
    m_passthroughControl(Eac3PassthroughControl::NOT_SET),
    m_passthroughControlHasBeenSet(false),
    m_phaseControl(Eac3PhaseControl::NOT_SET),
    m_phaseControlHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_stereoDownmix(Eac3StereoDownmix::NOT_SET),
    m_stereoDownmixHasBeenSet(false),
    m_surroundExMode(Eac3SurroundExMode::NOT_SET),
    m_surroundExModeHasBeenSet(false),
    m_surroundMode(Eac3SurroundMode::NOT_SET),
    m_surroundModeHasBeenSet(false)
{
  *this = jsonValue;
}

Eac3Settings& Eac3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attenuationControl"))
  {
    m_attenuationControl = Eac3AttenuationControlMapper::GetEac3AttenuationControlForName(jsonValue.GetString("attenuationControl"));

    m_attenuationControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitstreamMode"))
  {
    m_bitstreamMode = Eac3BitstreamModeMapper::GetEac3BitstreamModeForName(jsonValue.GetString("bitstreamMode"));

    m_bitstreamModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Eac3CodingModeMapper::GetEac3CodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dcFilter"))
  {
    m_dcFilter = Eac3DcFilterMapper::GetEac3DcFilterForName(jsonValue.GetString("dcFilter"));

    m_dcFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialnorm"))
  {
    m_dialnorm = jsonValue.GetInteger("dialnorm");

    m_dialnormHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicRangeCompressionLine"))
  {
    m_dynamicRangeCompressionLine = Eac3DynamicRangeCompressionLineMapper::GetEac3DynamicRangeCompressionLineForName(jsonValue.GetString("dynamicRangeCompressionLine"));

    m_dynamicRangeCompressionLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicRangeCompressionRf"))
  {
    m_dynamicRangeCompressionRf = Eac3DynamicRangeCompressionRfMapper::GetEac3DynamicRangeCompressionRfForName(jsonValue.GetString("dynamicRangeCompressionRf"));

    m_dynamicRangeCompressionRfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lfeControl"))
  {
    m_lfeControl = Eac3LfeControlMapper::GetEac3LfeControlForName(jsonValue.GetString("lfeControl"));

    m_lfeControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lfeFilter"))
  {
    m_lfeFilter = Eac3LfeFilterMapper::GetEac3LfeFilterForName(jsonValue.GetString("lfeFilter"));

    m_lfeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loRoCenterMixLevel"))
  {
    m_loRoCenterMixLevel = jsonValue.GetDouble("loRoCenterMixLevel");

    m_loRoCenterMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loRoSurroundMixLevel"))
  {
    m_loRoSurroundMixLevel = jsonValue.GetDouble("loRoSurroundMixLevel");

    m_loRoSurroundMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ltRtCenterMixLevel"))
  {
    m_ltRtCenterMixLevel = jsonValue.GetDouble("ltRtCenterMixLevel");

    m_ltRtCenterMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ltRtSurroundMixLevel"))
  {
    m_ltRtSurroundMixLevel = jsonValue.GetDouble("ltRtSurroundMixLevel");

    m_ltRtSurroundMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadataControl"))
  {
    m_metadataControl = Eac3MetadataControlMapper::GetEac3MetadataControlForName(jsonValue.GetString("metadataControl"));

    m_metadataControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passthroughControl"))
  {
    m_passthroughControl = Eac3PassthroughControlMapper::GetEac3PassthroughControlForName(jsonValue.GetString("passthroughControl"));

    m_passthroughControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phaseControl"))
  {
    m_phaseControl = Eac3PhaseControlMapper::GetEac3PhaseControlForName(jsonValue.GetString("phaseControl"));

    m_phaseControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stereoDownmix"))
  {
    m_stereoDownmix = Eac3StereoDownmixMapper::GetEac3StereoDownmixForName(jsonValue.GetString("stereoDownmix"));

    m_stereoDownmixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("surroundExMode"))
  {
    m_surroundExMode = Eac3SurroundExModeMapper::GetEac3SurroundExModeForName(jsonValue.GetString("surroundExMode"));

    m_surroundExModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("surroundMode"))
  {
    m_surroundMode = Eac3SurroundModeMapper::GetEac3SurroundModeForName(jsonValue.GetString("surroundMode"));

    m_surroundModeHasBeenSet = true;
  }

  return *this;
}

JsonValue Eac3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_attenuationControlHasBeenSet)
  {
   payload.WithString("attenuationControl", Eac3AttenuationControlMapper::GetNameForEac3AttenuationControl(m_attenuationControl));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bitstreamModeHasBeenSet)
  {
   payload.WithString("bitstreamMode", Eac3BitstreamModeMapper::GetNameForEac3BitstreamMode(m_bitstreamMode));
  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Eac3CodingModeMapper::GetNameForEac3CodingMode(m_codingMode));
  }

  if(m_dcFilterHasBeenSet)
  {
   payload.WithString("dcFilter", Eac3DcFilterMapper::GetNameForEac3DcFilter(m_dcFilter));
  }

  if(m_dialnormHasBeenSet)
  {
   payload.WithInteger("dialnorm", m_dialnorm);

  }

  if(m_dynamicRangeCompressionLineHasBeenSet)
  {
   payload.WithString("dynamicRangeCompressionLine", Eac3DynamicRangeCompressionLineMapper::GetNameForEac3DynamicRangeCompressionLine(m_dynamicRangeCompressionLine));
  }

  if(m_dynamicRangeCompressionRfHasBeenSet)
  {
   payload.WithString("dynamicRangeCompressionRf", Eac3DynamicRangeCompressionRfMapper::GetNameForEac3DynamicRangeCompressionRf(m_dynamicRangeCompressionRf));
  }

  if(m_lfeControlHasBeenSet)
  {
   payload.WithString("lfeControl", Eac3LfeControlMapper::GetNameForEac3LfeControl(m_lfeControl));
  }

  if(m_lfeFilterHasBeenSet)
  {
   payload.WithString("lfeFilter", Eac3LfeFilterMapper::GetNameForEac3LfeFilter(m_lfeFilter));
  }

  if(m_loRoCenterMixLevelHasBeenSet)
  {
   payload.WithDouble("loRoCenterMixLevel", m_loRoCenterMixLevel);

  }

  if(m_loRoSurroundMixLevelHasBeenSet)
  {
   payload.WithDouble("loRoSurroundMixLevel", m_loRoSurroundMixLevel);

  }

  if(m_ltRtCenterMixLevelHasBeenSet)
  {
   payload.WithDouble("ltRtCenterMixLevel", m_ltRtCenterMixLevel);

  }

  if(m_ltRtSurroundMixLevelHasBeenSet)
  {
   payload.WithDouble("ltRtSurroundMixLevel", m_ltRtSurroundMixLevel);

  }

  if(m_metadataControlHasBeenSet)
  {
   payload.WithString("metadataControl", Eac3MetadataControlMapper::GetNameForEac3MetadataControl(m_metadataControl));
  }

  if(m_passthroughControlHasBeenSet)
  {
   payload.WithString("passthroughControl", Eac3PassthroughControlMapper::GetNameForEac3PassthroughControl(m_passthroughControl));
  }

  if(m_phaseControlHasBeenSet)
  {
   payload.WithString("phaseControl", Eac3PhaseControlMapper::GetNameForEac3PhaseControl(m_phaseControl));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  if(m_stereoDownmixHasBeenSet)
  {
   payload.WithString("stereoDownmix", Eac3StereoDownmixMapper::GetNameForEac3StereoDownmix(m_stereoDownmix));
  }

  if(m_surroundExModeHasBeenSet)
  {
   payload.WithString("surroundExMode", Eac3SurroundExModeMapper::GetNameForEac3SurroundExMode(m_surroundExMode));
  }

  if(m_surroundModeHasBeenSet)
  {
   payload.WithString("surroundMode", Eac3SurroundModeMapper::GetNameForEac3SurroundMode(m_surroundMode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
