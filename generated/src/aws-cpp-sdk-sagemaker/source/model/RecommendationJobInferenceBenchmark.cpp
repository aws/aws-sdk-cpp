﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobInferenceBenchmark.h>
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

RecommendationJobInferenceBenchmark::RecommendationJobInferenceBenchmark() : 
    m_metricsHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_modelConfigurationHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_endpointMetricsHasBeenSet(false),
    m_invocationEndTimeHasBeenSet(false),
    m_invocationStartTimeHasBeenSet(false)
{
}

RecommendationJobInferenceBenchmark::RecommendationJobInferenceBenchmark(JsonView jsonValue) : 
    m_metricsHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_modelConfigurationHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_endpointMetricsHasBeenSet(false),
    m_invocationEndTimeHasBeenSet(false),
    m_invocationStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobInferenceBenchmark& RecommendationJobInferenceBenchmark::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metrics"))
  {
    m_metrics = jsonValue.GetObject("Metrics");

    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("EndpointConfiguration");

    m_endpointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelConfiguration"))
  {
    m_modelConfiguration = jsonValue.GetObject("ModelConfiguration");

    m_modelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointMetrics"))
  {
    m_endpointMetrics = jsonValue.GetObject("EndpointMetrics");

    m_endpointMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationEndTime"))
  {
    m_invocationEndTime = jsonValue.GetDouble("InvocationEndTime");

    m_invocationEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationStartTime"))
  {
    m_invocationStartTime = jsonValue.GetDouble("InvocationStartTime");

    m_invocationStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobInferenceBenchmark::Jsonize() const
{
  JsonValue payload;

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("Metrics", m_metrics.Jsonize());

  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("EndpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_modelConfigurationHasBeenSet)
  {
   payload.WithObject("ModelConfiguration", m_modelConfiguration.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_endpointMetricsHasBeenSet)
  {
   payload.WithObject("EndpointMetrics", m_endpointMetrics.Jsonize());

  }

  if(m_invocationEndTimeHasBeenSet)
  {
   payload.WithDouble("InvocationEndTime", m_invocationEndTime.SecondsWithMSPrecision());
  }

  if(m_invocationStartTimeHasBeenSet)
  {
   payload.WithDouble("InvocationStartTime", m_invocationStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
