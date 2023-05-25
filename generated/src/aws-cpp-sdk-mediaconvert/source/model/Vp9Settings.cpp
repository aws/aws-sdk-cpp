/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp9Settings.h>
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

Vp9Settings::Vp9Settings() : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_framerateControl(Vp9FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Vp9FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_parControl(Vp9ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(Vp9QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_rateControlMode(Vp9RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false)
{
}

Vp9Settings::Vp9Settings(JsonView jsonValue) : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_framerateControl(Vp9FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Vp9FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_parControl(Vp9ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(Vp9QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_rateControlMode(Vp9RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false)
{
  *this = jsonValue;
}

Vp9Settings& Vp9Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = Vp9FramerateControlMapper::GetVp9FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = Vp9FramerateConversionAlgorithmMapper::GetVp9FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

    m_framerateConversionAlgorithmHasBeenSet = true;
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

  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");

    m_hrdBufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = Vp9ParControlMapper::GetVp9ParControlForName(jsonValue.GetString("parControl"));

    m_parControlHasBeenSet = true;
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

  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = Vp9QualityTuningLevelMapper::GetVp9QualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = Vp9RateControlModeMapper::GetVp9RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  return *this;
}

JsonValue Vp9Settings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", Vp9FramerateControlMapper::GetNameForVp9FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", Vp9FramerateConversionAlgorithmMapper::GetNameForVp9FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
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

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", Vp9ParControlMapper::GetNameForVp9ParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", Vp9QualityTuningLevelMapper::GetNameForVp9QualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", Vp9RateControlModeMapper::GetNameForVp9RateControlMode(m_rateControlMode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
