/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobObjective.h>
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

AutoMLJobObjective::AutoMLJobObjective() : 
    m_metricName(AutoMLMetricEnum::NOT_SET),
    m_metricNameHasBeenSet(false)
{
}

AutoMLJobObjective::AutoMLJobObjective(JsonView jsonValue) : 
    m_metricName(AutoMLMetricEnum::NOT_SET),
    m_metricNameHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobObjective& AutoMLJobObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = AutoMLMetricEnumMapper::GetAutoMLMetricEnumForName(jsonValue.GetString("MetricName"));

    m_metricNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobObjective::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", AutoMLMetricEnumMapper::GetNameForAutoMLMetricEnum(m_metricName));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
