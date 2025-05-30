﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FinalAutoMLJobObjectiveMetric.h>
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

FinalAutoMLJobObjectiveMetric::FinalAutoMLJobObjectiveMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

FinalAutoMLJobObjectiveMetric& FinalAutoMLJobObjectiveMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutoMLJobObjectiveTypeMapper::GetAutoMLJobObjectiveTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = AutoMLMetricEnumMapper::GetAutoMLMetricEnumForName(jsonValue.GetString("MetricName"));
    m_metricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardMetricName"))
  {
    m_standardMetricName = AutoMLMetricEnumMapper::GetAutoMLMetricEnumForName(jsonValue.GetString("StandardMetricName"));
    m_standardMetricNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FinalAutoMLJobObjectiveMetric::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutoMLJobObjectiveTypeMapper::GetNameForAutoMLJobObjectiveType(m_type));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", AutoMLMetricEnumMapper::GetNameForAutoMLMetricEnum(m_metricName));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_standardMetricNameHasBeenSet)
  {
   payload.WithString("StandardMetricName", AutoMLMetricEnumMapper::GetNameForAutoMLMetricEnum(m_standardMetricName));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
