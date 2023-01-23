/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ResponseResourceMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

ResponseResourceMetric::ResponseResourceMetric() : 
    m_metricHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

ResponseResourceMetric::ResponseResourceMetric(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseResourceMetric& ResponseResourceMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetString("Metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseResourceMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
