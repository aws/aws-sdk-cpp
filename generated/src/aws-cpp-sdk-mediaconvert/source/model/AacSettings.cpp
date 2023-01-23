/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AacSettings.h>
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

AacSettings::AacSettings() : 
    m_audioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix::NOT_SET),
    m_audioDescriptionBroadcasterMixHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecProfile(AacCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_codingMode(AacCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_rateControlMode(AacRateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_rawFormat(AacRawFormat::NOT_SET),
    m_rawFormatHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_specification(AacSpecification::NOT_SET),
    m_specificationHasBeenSet(false),
    m_vbrQuality(AacVbrQuality::NOT_SET),
    m_vbrQualityHasBeenSet(false)
{
}

AacSettings::AacSettings(JsonView jsonValue) : 
    m_audioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix::NOT_SET),
    m_audioDescriptionBroadcasterMixHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecProfile(AacCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_codingMode(AacCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_rateControlMode(AacRateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_rawFormat(AacRawFormat::NOT_SET),
    m_rawFormatHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_specification(AacSpecification::NOT_SET),
    m_specificationHasBeenSet(false),
    m_vbrQuality(AacVbrQuality::NOT_SET),
    m_vbrQualityHasBeenSet(false)
{
  *this = jsonValue;
}

AacSettings& AacSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptionBroadcasterMix"))
  {
    m_audioDescriptionBroadcasterMix = AacAudioDescriptionBroadcasterMixMapper::GetAacAudioDescriptionBroadcasterMixForName(jsonValue.GetString("audioDescriptionBroadcasterMix"));

    m_audioDescriptionBroadcasterMixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = AacCodecProfileMapper::GetAacCodecProfileForName(jsonValue.GetString("codecProfile"));

    m_codecProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = AacCodingModeMapper::GetAacCodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = AacRateControlModeMapper::GetAacRateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawFormat"))
  {
    m_rawFormat = AacRawFormatMapper::GetAacRawFormatForName(jsonValue.GetString("rawFormat"));

    m_rawFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("specification"))
  {
    m_specification = AacSpecificationMapper::GetAacSpecificationForName(jsonValue.GetString("specification"));

    m_specificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vbrQuality"))
  {
    m_vbrQuality = AacVbrQualityMapper::GetAacVbrQualityForName(jsonValue.GetString("vbrQuality"));

    m_vbrQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue AacSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionBroadcasterMixHasBeenSet)
  {
   payload.WithString("audioDescriptionBroadcasterMix", AacAudioDescriptionBroadcasterMixMapper::GetNameForAacAudioDescriptionBroadcasterMix(m_audioDescriptionBroadcasterMix));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", AacCodecProfileMapper::GetNameForAacCodecProfile(m_codecProfile));
  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", AacCodingModeMapper::GetNameForAacCodingMode(m_codingMode));
  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", AacRateControlModeMapper::GetNameForAacRateControlMode(m_rateControlMode));
  }

  if(m_rawFormatHasBeenSet)
  {
   payload.WithString("rawFormat", AacRawFormatMapper::GetNameForAacRawFormat(m_rawFormat));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  if(m_specificationHasBeenSet)
  {
   payload.WithString("specification", AacSpecificationMapper::GetNameForAacSpecification(m_specification));
  }

  if(m_vbrQualityHasBeenSet)
  {
   payload.WithString("vbrQuality", AacVbrQualityMapper::GetNameForAacVbrQuality(m_vbrQuality));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
