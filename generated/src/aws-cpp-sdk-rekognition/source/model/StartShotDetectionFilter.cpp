/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartShotDetectionFilter.h>
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

StartShotDetectionFilter::StartShotDetectionFilter() : 
    m_minSegmentConfidence(0.0),
    m_minSegmentConfidenceHasBeenSet(false)
{
}

StartShotDetectionFilter::StartShotDetectionFilter(JsonView jsonValue) : 
    m_minSegmentConfidence(0.0),
    m_minSegmentConfidenceHasBeenSet(false)
{
  *this = jsonValue;
}

StartShotDetectionFilter& StartShotDetectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinSegmentConfidence"))
  {
    m_minSegmentConfidence = jsonValue.GetDouble("MinSegmentConfidence");

    m_minSegmentConfidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue StartShotDetectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_minSegmentConfidenceHasBeenSet)
  {
   payload.WithDouble("MinSegmentConfidence", m_minSegmentConfidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
