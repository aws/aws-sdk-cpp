/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericalAggregationFunction.h>
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

NumericalAggregationFunction::NumericalAggregationFunction() : 
    m_simpleNumericalAggregation(SimpleNumericalAggregationFunction::NOT_SET),
    m_simpleNumericalAggregationHasBeenSet(false),
    m_percentileAggregationHasBeenSet(false)
{
}

NumericalAggregationFunction::NumericalAggregationFunction(JsonView jsonValue) : 
    m_simpleNumericalAggregation(SimpleNumericalAggregationFunction::NOT_SET),
    m_simpleNumericalAggregationHasBeenSet(false),
    m_percentileAggregationHasBeenSet(false)
{
  *this = jsonValue;
}

NumericalAggregationFunction& NumericalAggregationFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SimpleNumericalAggregation"))
  {
    m_simpleNumericalAggregation = SimpleNumericalAggregationFunctionMapper::GetSimpleNumericalAggregationFunctionForName(jsonValue.GetString("SimpleNumericalAggregation"));

    m_simpleNumericalAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentileAggregation"))
  {
    m_percentileAggregation = jsonValue.GetObject("PercentileAggregation");

    m_percentileAggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericalAggregationFunction::Jsonize() const
{
  JsonValue payload;

  if(m_simpleNumericalAggregationHasBeenSet)
  {
   payload.WithString("SimpleNumericalAggregation", SimpleNumericalAggregationFunctionMapper::GetNameForSimpleNumericalAggregationFunction(m_simpleNumericalAggregation));
  }

  if(m_percentileAggregationHasBeenSet)
  {
   payload.WithObject("PercentileAggregation", m_percentileAggregation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
