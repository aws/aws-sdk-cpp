/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisDetectModerationLabelsConfig.h>
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

MediaAnalysisDetectModerationLabelsConfig::MediaAnalysisDetectModerationLabelsConfig() : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_projectVersionHasBeenSet(false)
{
}

MediaAnalysisDetectModerationLabelsConfig::MediaAnalysisDetectModerationLabelsConfig(JsonView jsonValue) : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_projectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisDetectModerationLabelsConfig& MediaAnalysisDetectModerationLabelsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinConfidence"))
  {
    m_minConfidence = jsonValue.GetDouble("MinConfidence");

    m_minConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectVersion"))
  {
    m_projectVersion = jsonValue.GetString("ProjectVersion");

    m_projectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisDetectModerationLabelsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_projectVersionHasBeenSet)
  {
   payload.WithString("ProjectVersion", m_projectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
