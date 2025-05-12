/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MetricDatum.h>
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

MetricDatum::MetricDatum(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricDatum& MetricDatum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = AutoMLMetricEnumMapper::GetAutoMLMetricEnumForName(jsonValue.GetString("MetricName"));
    m_metricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardMetricName"))
  {
    m_standardMetricName = AutoMLMetricExtendedEnumMapper::GetAutoMLMetricExtendedEnumForName(jsonValue.GetString("StandardMetricName"));
    m_standardMetricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Set"))
  {
    m_set = MetricSetSourceMapper::GetMetricSetSourceForName(jsonValue.GetString("Set"));
    m_setHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDatum::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", AutoMLMetricEnumMapper::GetNameForAutoMLMetricEnum(m_metricName));
  }

  if(m_standardMetricNameHasBeenSet)
  {
   payload.WithString("StandardMetricName", AutoMLMetricExtendedEnumMapper::GetNameForAutoMLMetricExtendedEnum(m_standardMetricName));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_setHasBeenSet)
  {
   payload.WithString("Set", MetricSetSourceMapper::GetNameForMetricSetSource(m_set));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
