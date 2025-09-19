/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Av1Settings::Av1Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

Av1Settings& Av1Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));
    m_afdSignalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bufSize"))
  {
    m_bufSize = jsonValue.GetInteger("bufSize");
    m_bufSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceSettings"))
  {
    m_colorSpaceSettings = jsonValue.GetObject("colorSpaceSettings");
    m_colorSpaceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixedAfd"))
  {
    m_fixedAfd = FixedAfdMapper::GetFixedAfdForName(jsonValue.GetString("fixedAfd"));
    m_fixedAfdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateDenominator"))
  {
    m_framerateDenominator = jsonValue.GetInteger("framerateDenominator");
    m_framerateDenominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateNumerator"))
  {
    m_framerateNumerator = jsonValue.GetInteger("framerateNumerator");
    m_framerateNumeratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");
    m_gopSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = Av1GopSizeUnitsMapper::GetAv1GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));
    m_gopSizeUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("level"))
  {
    m_level = Av1LevelMapper::GetAv1LevelForName(jsonValue.GetString("level"));
    m_levelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lookAheadRateControl"))
  {
    m_lookAheadRateControl = Av1LookAheadRateControlMapper::GetAv1LookAheadRateControlForName(jsonValue.GetString("lookAheadRateControl"));
    m_lookAheadRateControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");
    m_maxBitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minIInterval"))
  {
    m_minIInterval = jsonValue.GetInteger("minIInterval");
    m_minIIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parDenominator"))
  {
    m_parDenominator = jsonValue.GetInteger("parDenominator");
    m_parDenominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parNumerator"))
  {
    m_parNumerator = jsonValue.GetInteger("parNumerator");
    m_parNumeratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");
    m_qvbrQualityLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = Av1SceneChangeDetectMapper::GetAv1SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));
    m_sceneChangeDetectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");
    m_timecodeBurninSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = Av1RateControlModeMapper::GetAv1RateControlModeForName(jsonValue.GetString("rateControlMode"));
    m_rateControlModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minBitrate"))
  {
    m_minBitrate = jsonValue.GetInteger("minBitrate");
    m_minBitrateHasBeenSet = true;
  }
  return *this;
}

JsonValue Av1Settings::Jsonize() const
{
  JsonValue payload;

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_bufSizeHasBeenSet)
  {
   payload.WithInteger("bufSize", m_bufSize);

  }

  if(m_colorSpaceSettingsHasBeenSet)
  {
   payload.WithObject("colorSpaceSettings", m_colorSpaceSettings.Jsonize());

  }

  if(m_fixedAfdHasBeenSet)
  {
   payload.WithString("fixedAfd", FixedAfdMapper::GetNameForFixedAfd(m_fixedAfd));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", Av1GopSizeUnitsMapper::GetNameForAv1GopSizeUnits(m_gopSizeUnits));
  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", Av1LevelMapper::GetNameForAv1Level(m_level));
  }

  if(m_lookAheadRateControlHasBeenSet)
  {
   payload.WithString("lookAheadRateControl", Av1LookAheadRateControlMapper::GetNameForAv1LookAheadRateControl(m_lookAheadRateControl));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", Av1SceneChangeDetectMapper::GetNameForAv1SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_timecodeBurninSettingsHasBeenSet)
  {
   payload.WithObject("timecodeBurninSettings", m_timecodeBurninSettings.Jsonize());

  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", Av1RateControlModeMapper::GetNameForAv1RateControlMode(m_rateControlMode));
  }

  if(m_minBitrateHasBeenSet)
  {
   payload.WithInteger("minBitrate", m_minBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
