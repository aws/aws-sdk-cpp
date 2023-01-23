/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsImagePropertiesSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DetectLabelsImagePropertiesSettings::DetectLabelsImagePropertiesSettings() : 
    m_maxDominantColors(0),
    m_maxDominantColorsHasBeenSet(false)
{
}

DetectLabelsImagePropertiesSettings::DetectLabelsImagePropertiesSettings(JsonView jsonValue) : 
    m_maxDominantColors(0),
    m_maxDominantColorsHasBeenSet(false)
{
  *this = jsonValue;
}

DetectLabelsImagePropertiesSettings& DetectLabelsImagePropertiesSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxDominantColors"))
  {
    m_maxDominantColors = jsonValue.GetInteger("MaxDominantColors");

    m_maxDominantColorsHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectLabelsImagePropertiesSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maxDominantColorsHasBeenSet)
  {
   payload.WithInteger("MaxDominantColors", m_maxDominantColors);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
