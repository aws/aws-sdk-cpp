/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CustomizationFeatureConfig.h>
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

CustomizationFeatureConfig::CustomizationFeatureConfig() : 
    m_contentModerationHasBeenSet(false)
{
}

CustomizationFeatureConfig::CustomizationFeatureConfig(JsonView jsonValue) : 
    m_contentModerationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomizationFeatureConfig& CustomizationFeatureConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentModeration"))
  {
    m_contentModeration = jsonValue.GetObject("ContentModeration");

    m_contentModerationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomizationFeatureConfig::Jsonize() const
{
  JsonValue payload;

  if(m_contentModerationHasBeenSet)
  {
   payload.WithObject("ContentModeration", m_contentModeration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
