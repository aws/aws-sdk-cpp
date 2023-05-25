/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayV2RouteSettings.h>
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

AwsApiGatewayV2RouteSettings::AwsApiGatewayV2RouteSettings() : 
    m_detailedMetricsEnabled(false),
    m_detailedMetricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false)
{
}

AwsApiGatewayV2RouteSettings::AwsApiGatewayV2RouteSettings(JsonView jsonValue) : 
    m_detailedMetricsEnabled(false),
    m_detailedMetricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayV2RouteSettings& AwsApiGatewayV2RouteSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailedMetricsEnabled"))
  {
    m_detailedMetricsEnabled = jsonValue.GetBool("DetailedMetricsEnabled");

    m_detailedMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingLevel"))
  {
    m_loggingLevel = jsonValue.GetString("LoggingLevel");

    m_loggingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTraceEnabled"))
  {
    m_dataTraceEnabled = jsonValue.GetBool("DataTraceEnabled");

    m_dataTraceEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThrottlingBurstLimit"))
  {
    m_throttlingBurstLimit = jsonValue.GetInteger("ThrottlingBurstLimit");

    m_throttlingBurstLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThrottlingRateLimit"))
  {
    m_throttlingRateLimit = jsonValue.GetDouble("ThrottlingRateLimit");

    m_throttlingRateLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayV2RouteSettings::Jsonize() const
{
  JsonValue payload;

  if(m_detailedMetricsEnabledHasBeenSet)
  {
   payload.WithBool("DetailedMetricsEnabled", m_detailedMetricsEnabled);

  }

  if(m_loggingLevelHasBeenSet)
  {
   payload.WithString("LoggingLevel", m_loggingLevel);

  }

  if(m_dataTraceEnabledHasBeenSet)
  {
   payload.WithBool("DataTraceEnabled", m_dataTraceEnabled);

  }

  if(m_throttlingBurstLimitHasBeenSet)
  {
   payload.WithInteger("ThrottlingBurstLimit", m_throttlingBurstLimit);

  }

  if(m_throttlingRateLimitHasBeenSet)
  {
   payload.WithDouble("ThrottlingRateLimit", m_throttlingRateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
