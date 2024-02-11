/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AttributeAggregationFunction.h>
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

AttributeAggregationFunction::AttributeAggregationFunction() : 
    m_simpleAttributeAggregation(SimpleAttributeAggregationFunction::NOT_SET),
    m_simpleAttributeAggregationHasBeenSet(false),
    m_valueForMultipleValuesHasBeenSet(false)
{
}

AttributeAggregationFunction::AttributeAggregationFunction(JsonView jsonValue) : 
    m_simpleAttributeAggregation(SimpleAttributeAggregationFunction::NOT_SET),
    m_simpleAttributeAggregationHasBeenSet(false),
    m_valueForMultipleValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeAggregationFunction& AttributeAggregationFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SimpleAttributeAggregation"))
  {
    m_simpleAttributeAggregation = SimpleAttributeAggregationFunctionMapper::GetSimpleAttributeAggregationFunctionForName(jsonValue.GetString("SimpleAttributeAggregation"));

    m_simpleAttributeAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueForMultipleValues"))
  {
    m_valueForMultipleValues = jsonValue.GetString("ValueForMultipleValues");

    m_valueForMultipleValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeAggregationFunction::Jsonize() const
{
  JsonValue payload;

  if(m_simpleAttributeAggregationHasBeenSet)
  {
   payload.WithString("SimpleAttributeAggregation", SimpleAttributeAggregationFunctionMapper::GetNameForSimpleAttributeAggregationFunction(m_simpleAttributeAggregation));
  }

  if(m_valueForMultipleValuesHasBeenSet)
  {
   payload.WithString("ValueForMultipleValues", m_valueForMultipleValues);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
