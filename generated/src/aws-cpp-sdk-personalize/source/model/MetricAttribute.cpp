/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/MetricAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

MetricAttribute::MetricAttribute() : 
    m_eventTypeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

MetricAttribute::MetricAttribute(JsonView jsonValue) : 
    m_eventTypeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

MetricAttribute& MetricAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
