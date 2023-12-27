/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TotalAggregationFunction.h>
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

TotalAggregationFunction::TotalAggregationFunction() : 
    m_simpleTotalAggregationFunction(SimpleTotalAggregationFunction::NOT_SET),
    m_simpleTotalAggregationFunctionHasBeenSet(false)
{
}

TotalAggregationFunction::TotalAggregationFunction(JsonView jsonValue) : 
    m_simpleTotalAggregationFunction(SimpleTotalAggregationFunction::NOT_SET),
    m_simpleTotalAggregationFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

TotalAggregationFunction& TotalAggregationFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SimpleTotalAggregationFunction"))
  {
    m_simpleTotalAggregationFunction = SimpleTotalAggregationFunctionMapper::GetSimpleTotalAggregationFunctionForName(jsonValue.GetString("SimpleTotalAggregationFunction"));

    m_simpleTotalAggregationFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue TotalAggregationFunction::Jsonize() const
{
  JsonValue payload;

  if(m_simpleTotalAggregationFunctionHasBeenSet)
  {
   payload.WithString("SimpleTotalAggregationFunction", SimpleTotalAggregationFunctionMapper::GetNameForSimpleTotalAggregationFunction(m_simpleTotalAggregationFunction));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
