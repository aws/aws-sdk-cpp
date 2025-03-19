/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CustomizationFeatureContentModerationConfig.h>
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

CustomizationFeatureContentModerationConfig::CustomizationFeatureContentModerationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomizationFeatureContentModerationConfig& CustomizationFeatureContentModerationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfidenceThreshold"))
  {
    m_confidenceThreshold = jsonValue.GetDouble("ConfidenceThreshold");
    m_confidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomizationFeatureContentModerationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithDouble("ConfidenceThreshold", m_confidenceThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
