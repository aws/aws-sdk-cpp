﻿/**
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

FilterListConfiguration::FilterListConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));
    m_nullOptionHasBeenSet = true;
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

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
