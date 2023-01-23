/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SearchExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SearchExpression::SearchExpression() : 
    m_filtersHasBeenSet(false),
    m_nestedFiltersHasBeenSet(false),
    m_subExpressionsHasBeenSet(false),
    m_operator(BooleanOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

SearchExpression::SearchExpression(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_nestedFiltersHasBeenSet(false),
    m_subExpressionsHasBeenSet(false),
    m_operator(BooleanOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

SearchExpression& SearchExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NestedFilters"))
  {
    Aws::Utils::Array<JsonView> nestedFiltersJsonList = jsonValue.GetArray("NestedFilters");
    for(unsigned nestedFiltersIndex = 0; nestedFiltersIndex < nestedFiltersJsonList.GetLength(); ++nestedFiltersIndex)
    {
      m_nestedFilters.push_back(nestedFiltersJsonList[nestedFiltersIndex].AsObject());
    }
    m_nestedFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubExpressions"))
  {
    Aws::Utils::Array<JsonView> subExpressionsJsonList = jsonValue.GetArray("SubExpressions");
    for(unsigned subExpressionsIndex = 0; subExpressionsIndex < subExpressionsJsonList.GetLength(); ++subExpressionsIndex)
    {
      m_subExpressions.push_back(subExpressionsJsonList[subExpressionsIndex].AsObject());
    }
    m_subExpressionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = BooleanOperatorMapper::GetBooleanOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchExpression::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_nestedFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nestedFiltersJsonList(m_nestedFilters.size());
   for(unsigned nestedFiltersIndex = 0; nestedFiltersIndex < nestedFiltersJsonList.GetLength(); ++nestedFiltersIndex)
   {
     nestedFiltersJsonList[nestedFiltersIndex].AsObject(m_nestedFilters[nestedFiltersIndex].Jsonize());
   }
   payload.WithArray("NestedFilters", std::move(nestedFiltersJsonList));

  }

  if(m_subExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subExpressionsJsonList(m_subExpressions.size());
   for(unsigned subExpressionsIndex = 0; subExpressionsIndex < subExpressionsJsonList.GetLength(); ++subExpressionsIndex)
   {
     subExpressionsJsonList[subExpressionsIndex].AsObject(m_subExpressions[subExpressionsIndex].Jsonize());
   }
   payload.WithArray("SubExpressions", std::move(subExpressionsJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", BooleanOperatorMapper::GetNameForBooleanOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
