/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TotalAggregationOption.h>
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

TotalAggregationOption::TotalAggregationOption() : 
    m_fieldIdHasBeenSet(false),
    m_totalAggregationFunctionHasBeenSet(false)
{
}

TotalAggregationOption::TotalAggregationOption(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_totalAggregationFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

TotalAggregationOption& TotalAggregationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalAggregationFunction"))
  {
    m_totalAggregationFunction = jsonValue.GetObject("TotalAggregationFunction");

    m_totalAggregationFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue TotalAggregationOption::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_totalAggregationFunctionHasBeenSet)
  {
   payload.WithObject("TotalAggregationFunction", m_totalAggregationFunction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
