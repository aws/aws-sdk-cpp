/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraUhdSettings.h>
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

AvcIntraUhdSettings::AvcIntraUhdSettings() : 
    m_qualityTuningLevel(AvcIntraUhdQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false)
{
}

AvcIntraUhdSettings::AvcIntraUhdSettings(JsonView jsonValue) : 
    m_qualityTuningLevel(AvcIntraUhdQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false)
{
  *this = jsonValue;
}

AvcIntraUhdSettings& AvcIntraUhdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = AvcIntraUhdQualityTuningLevelMapper::GetAvcIntraUhdQualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue AvcIntraUhdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", AvcIntraUhdQualityTuningLevelMapper::GetNameForAvcIntraUhdQualityTuningLevel(m_qualityTuningLevel));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
