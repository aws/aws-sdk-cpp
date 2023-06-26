/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/BlackFrame.h>
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

BlackFrame::BlackFrame() : 
    m_maxPixelThreshold(0.0),
    m_maxPixelThresholdHasBeenSet(false),
    m_minCoveragePercentage(0.0),
    m_minCoveragePercentageHasBeenSet(false)
{
}

BlackFrame::BlackFrame(JsonView jsonValue) : 
    m_maxPixelThreshold(0.0),
    m_maxPixelThresholdHasBeenSet(false),
    m_minCoveragePercentage(0.0),
    m_minCoveragePercentageHasBeenSet(false)
{
  *this = jsonValue;
}

BlackFrame& BlackFrame::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxPixelThreshold"))
  {
    m_maxPixelThreshold = jsonValue.GetDouble("MaxPixelThreshold");

    m_maxPixelThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinCoveragePercentage"))
  {
    m_minCoveragePercentage = jsonValue.GetDouble("MinCoveragePercentage");

    m_minCoveragePercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue BlackFrame::Jsonize() const
{
  JsonValue payload;

  if(m_maxPixelThresholdHasBeenSet)
  {
   payload.WithDouble("MaxPixelThreshold", m_maxPixelThreshold);

  }

  if(m_minCoveragePercentageHasBeenSet)
  {
   payload.WithDouble("MinCoveragePercentage", m_minCoveragePercentage);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
