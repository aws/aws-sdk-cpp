/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisOperationsConfig.h>
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

MediaAnalysisOperationsConfig::MediaAnalysisOperationsConfig() : 
    m_detectModerationLabelsHasBeenSet(false)
{
}

MediaAnalysisOperationsConfig::MediaAnalysisOperationsConfig(JsonView jsonValue) : 
    m_detectModerationLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisOperationsConfig& MediaAnalysisOperationsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetectModerationLabels"))
  {
    m_detectModerationLabels = jsonValue.GetObject("DetectModerationLabels");

    m_detectModerationLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisOperationsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_detectModerationLabelsHasBeenSet)
  {
   payload.WithObject("DetectModerationLabels", m_detectModerationLabels.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
