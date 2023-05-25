/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductViewAggregationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProductViewAggregationValue::ProductViewAggregationValue() : 
    m_valueHasBeenSet(false),
    m_approximateCount(0),
    m_approximateCountHasBeenSet(false)
{
}

ProductViewAggregationValue::ProductViewAggregationValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_approximateCount(0),
    m_approximateCountHasBeenSet(false)
{
  *this = jsonValue;
}

ProductViewAggregationValue& ProductViewAggregationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateCount"))
  {
    m_approximateCount = jsonValue.GetInteger("ApproximateCount");

    m_approximateCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductViewAggregationValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_approximateCountHasBeenSet)
  {
   payload.WithInteger("ApproximateCount", m_approximateCount);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
