/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRContributionAnalysis.h>
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

TopicIRContributionAnalysis::TopicIRContributionAnalysis(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIRContributionAnalysis& TopicIRContributionAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Factors"))
  {
    Aws::Utils::Array<JsonView> factorsJsonList = jsonValue.GetArray("Factors");
    for(unsigned factorsIndex = 0; factorsIndex < factorsJsonList.GetLength(); ++factorsIndex)
    {
      m_factors.push_back(factorsJsonList[factorsIndex].AsObject());
    }
    m_factorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeRanges"))
  {
    m_timeRanges = jsonValue.GetObject("TimeRanges");
    m_timeRangesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = ContributionAnalysisDirectionMapper::GetContributionAnalysisDirectionForName(jsonValue.GetString("Direction"));
    m_directionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortType"))
  {
    m_sortType = ContributionAnalysisSortTypeMapper::GetContributionAnalysisSortTypeForName(jsonValue.GetString("SortType"));
    m_sortTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIRContributionAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_factorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> factorsJsonList(m_factors.size());
   for(unsigned factorsIndex = 0; factorsIndex < factorsJsonList.GetLength(); ++factorsIndex)
   {
     factorsJsonList[factorsIndex].AsObject(m_factors[factorsIndex].Jsonize());
   }
   payload.WithArray("Factors", std::move(factorsJsonList));

  }

  if(m_timeRangesHasBeenSet)
  {
   payload.WithObject("TimeRanges", m_timeRanges.Jsonize());

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", ContributionAnalysisDirectionMapper::GetNameForContributionAnalysisDirection(m_direction));
  }

  if(m_sortTypeHasBeenSet)
  {
   payload.WithString("SortType", ContributionAnalysisSortTypeMapper::GetNameForContributionAnalysisSortType(m_sortType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
