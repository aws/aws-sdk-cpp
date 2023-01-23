/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterListConfiguration.h>
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

FilterListConfiguration::FilterListConfiguration() : 
    m_matchOperator(CategoryFilterMatchOperator::NOT_SET),
    m_matchOperatorHasBeenSet(false),
    m_categoryValuesHasBeenSet(false),
    m_selectAllOptions(CategoryFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false)
{
}

FilterListConfiguration::FilterListConfiguration(JsonView jsonValue) : 
    m_matchOperator(CategoryFilterMatchOperator::NOT_SET),
    m_matchOperatorHasBeenSet(false),
    m_categoryValuesHasBeenSet(false),
    m_selectAllOptions(CategoryFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

FilterListConfiguration& FilterListConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchOperator"))
  {
    m_matchOperator = CategoryFilterMatchOperatorMapper::GetCategoryFilterMatchOperatorForName(jsonValue.GetString("MatchOperator"));

    m_matchOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryValues"))
  {
    Aws::Utils::Array<JsonView> categoryValuesJsonList = jsonValue.GetArray("CategoryValues");
    for(unsigned categoryValuesIndex = 0; categoryValuesIndex < categoryValuesJsonList.GetLength(); ++categoryValuesIndex)
    {
      m_categoryValues.push_back(categoryValuesJsonList[categoryValuesIndex].AsString());
    }
    m_categoryValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectAllOptions"))
  {
    m_selectAllOptions = CategoryFilterSelectAllOptionsMapper::GetCategoryFilterSelectAllOptionsForName(jsonValue.GetString("SelectAllOptions"));

    m_selectAllOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterListConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_matchOperatorHasBeenSet)
  {
   payload.WithString("MatchOperator", CategoryFilterMatchOperatorMapper::GetNameForCategoryFilterMatchOperator(m_matchOperator));
  }

  if(m_categoryValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryValuesJsonList(m_categoryValues.size());
   for(unsigned categoryValuesIndex = 0; categoryValuesIndex < categoryValuesJsonList.GetLength(); ++categoryValuesIndex)
   {
     categoryValuesJsonList[categoryValuesIndex].AsString(m_categoryValues[categoryValuesIndex]);
   }
   payload.WithArray("CategoryValues", std::move(categoryValuesJsonList));

  }

  if(m_selectAllOptionsHasBeenSet)
  {
   payload.WithString("SelectAllOptions", CategoryFilterSelectAllOptionsMapper::GetNameForCategoryFilterSelectAllOptions(m_selectAllOptions));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
