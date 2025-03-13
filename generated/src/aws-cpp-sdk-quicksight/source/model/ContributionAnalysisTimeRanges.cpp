/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ContributionAnalysisTimeRanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ContributionAnalysisTimeRanges::ContributionAnalysisTimeRanges(JsonView jsonValue)
{
  *this = jsonValue;
}

ContributionAnalysisTimeRanges& ContributionAnalysisTimeRanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartRange"))
  {
    m_startRange = jsonValue.GetObject("StartRange");
    m_startRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndRange"))
  {
    m_endRange = jsonValue.GetObject("EndRange");
    m_endRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContributionAnalysisTimeRanges::Jsonize() const
{
  JsonValue payload;

  if(m_startRangeHasBeenSet)
  {
   payload.WithObject("StartRange", m_startRange.Jsonize());

  }

  if(m_endRangeHasBeenSet)
  {
   payload.WithObject("EndRange", m_endRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
