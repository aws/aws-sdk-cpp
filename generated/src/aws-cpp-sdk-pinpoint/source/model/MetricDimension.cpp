/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MetricDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MetricDimension::MetricDimension(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricDimension& MetricDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = jsonValue.GetString("ComparisonOperator");
    m_comparisonOperatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDimension::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", m_comparisonOperator);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
