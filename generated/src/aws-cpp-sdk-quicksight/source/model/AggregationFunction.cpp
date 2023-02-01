/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AggregationFunction.h>
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

AggregationFunction::AggregationFunction() : 
    m_numericalAggregationFunctionHasBeenSet(false),
    m_categoricalAggregationFunction(CategoricalAggregationFunction::NOT_SET),
    m_categoricalAggregationFunctionHasBeenSet(false),
    m_dateAggregationFunction(DateAggregationFunction::NOT_SET),
    m_dateAggregationFunctionHasBeenSet(false)
{
}

AggregationFunction::AggregationFunction(JsonView jsonValue) : 
    m_numericalAggregationFunctionHasBeenSet(false),
    m_categoricalAggregationFunction(CategoricalAggregationFunction::NOT_SET),
    m_categoricalAggregationFunctionHasBeenSet(false),
    m_dateAggregationFunction(DateAggregationFunction::NOT_SET),
    m_dateAggregationFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationFunction& AggregationFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericalAggregationFunction"))
  {
    m_numericalAggregationFunction = jsonValue.GetObject("NumericalAggregationFunction");

    m_numericalAggregationFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalAggregationFunction"))
  {
    m_categoricalAggregationFunction = CategoricalAggregationFunctionMapper::GetCategoricalAggregationFunctionForName(jsonValue.GetString("CategoricalAggregationFunction"));

    m_categoricalAggregationFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateAggregationFunction"))
  {
    m_dateAggregationFunction = DateAggregationFunctionMapper::GetDateAggregationFunctionForName(jsonValue.GetString("DateAggregationFunction"));

    m_dateAggregationFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationFunction::Jsonize() const
{
  JsonValue payload;

  if(m_numericalAggregationFunctionHasBeenSet)
  {
   payload.WithObject("NumericalAggregationFunction", m_numericalAggregationFunction.Jsonize());

  }

  if(m_categoricalAggregationFunctionHasBeenSet)
  {
   payload.WithString("CategoricalAggregationFunction", CategoricalAggregationFunctionMapper::GetNameForCategoricalAggregationFunction(m_categoricalAggregationFunction));
  }

  if(m_dateAggregationFunctionHasBeenSet)
  {
   payload.WithString("DateAggregationFunction", DateAggregationFunctionMapper::GetNameForDateAggregationFunction(m_dateAggregationFunction));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
