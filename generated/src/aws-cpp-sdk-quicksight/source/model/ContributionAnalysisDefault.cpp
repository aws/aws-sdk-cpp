/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ContributionAnalysisDefault.h>
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

ContributionAnalysisDefault::ContributionAnalysisDefault() : 
    m_measureFieldIdHasBeenSet(false),
    m_contributorDimensionsHasBeenSet(false)
{
}

ContributionAnalysisDefault::ContributionAnalysisDefault(JsonView jsonValue) : 
    m_measureFieldIdHasBeenSet(false),
    m_contributorDimensionsHasBeenSet(false)
{
  *this = jsonValue;
}

ContributionAnalysisDefault& ContributionAnalysisDefault::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeasureFieldId"))
  {
    m_measureFieldId = jsonValue.GetString("MeasureFieldId");

    m_measureFieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributorDimensions"))
  {
    Aws::Utils::Array<JsonView> contributorDimensionsJsonList = jsonValue.GetArray("ContributorDimensions");
    for(unsigned contributorDimensionsIndex = 0; contributorDimensionsIndex < contributorDimensionsJsonList.GetLength(); ++contributorDimensionsIndex)
    {
      m_contributorDimensions.push_back(contributorDimensionsJsonList[contributorDimensionsIndex].AsObject());
    }
    m_contributorDimensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContributionAnalysisDefault::Jsonize() const
{
  JsonValue payload;

  if(m_measureFieldIdHasBeenSet)
  {
   payload.WithString("MeasureFieldId", m_measureFieldId);

  }

  if(m_contributorDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contributorDimensionsJsonList(m_contributorDimensions.size());
   for(unsigned contributorDimensionsIndex = 0; contributorDimensionsIndex < contributorDimensionsJsonList.GetLength(); ++contributorDimensionsIndex)
   {
     contributorDimensionsJsonList[contributorDimensionsIndex].AsObject(m_contributorDimensions[contributorDimensionsIndex].Jsonize());
   }
   payload.WithArray("ContributorDimensions", std::move(contributorDimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
