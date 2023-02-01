/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2VisibilityConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsWafv2VisibilityConfigDetails::AwsWafv2VisibilityConfigDetails() : 
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_sampledRequestsEnabled(false),
    m_sampledRequestsEnabledHasBeenSet(false)
{
}

AwsWafv2VisibilityConfigDetails::AwsWafv2VisibilityConfigDetails(JsonView jsonValue) : 
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_sampledRequestsEnabled(false),
    m_sampledRequestsEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2VisibilityConfigDetails& AwsWafv2VisibilityConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchMetricsEnabled"))
  {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");

    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampledRequestsEnabled"))
  {
    m_sampledRequestsEnabled = jsonValue.GetBool("SampledRequestsEnabled");

    m_sampledRequestsEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2VisibilityConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_sampledRequestsEnabledHasBeenSet)
  {
   payload.WithBool("SampledRequestsEnabled", m_sampledRequestsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
