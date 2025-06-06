﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264QvbrSettings.h>
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

H264QvbrSettings::H264QvbrSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

H264QvbrSettings& H264QvbrSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxAverageBitrate"))
  {
    m_maxAverageBitrate = jsonValue.GetInteger("maxAverageBitrate");
    m_maxAverageBitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");
    m_qvbrQualityLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qvbrQualityLevelFineTune"))
  {
    m_qvbrQualityLevelFineTune = jsonValue.GetDouble("qvbrQualityLevelFineTune");
    m_qvbrQualityLevelFineTuneHasBeenSet = true;
  }
  return *this;
}

JsonValue H264QvbrSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maxAverageBitrateHasBeenSet)
  {
   payload.WithInteger("maxAverageBitrate", m_maxAverageBitrate);

  }

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_qvbrQualityLevelFineTuneHasBeenSet)
  {
   payload.WithDouble("qvbrQualityLevelFineTune", m_qvbrQualityLevelFineTune);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
