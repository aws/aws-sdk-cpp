/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayMethodSettings.h>
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

AwsApiGatewayMethodSettings::AwsApiGatewayMethodSettings() : 
    m_metricsEnabled(false),
    m_metricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false),
    m_cachingEnabled(false),
    m_cachingEnabledHasBeenSet(false),
    m_cacheTtlInSeconds(0),
    m_cacheTtlInSecondsHasBeenSet(false),
    m_cacheDataEncrypted(false),
    m_cacheDataEncryptedHasBeenSet(false),
    m_requireAuthorizationForCacheControl(false),
    m_requireAuthorizationForCacheControlHasBeenSet(false),
    m_unauthorizedCacheControlHeaderStrategyHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_resourcePathHasBeenSet(false)
{
}

AwsApiGatewayMethodSettings::AwsApiGatewayMethodSettings(JsonView jsonValue) : 
    m_metricsEnabled(false),
    m_metricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false),
    m_cachingEnabled(false),
    m_cachingEnabledHasBeenSet(false),
    m_cacheTtlInSeconds(0),
    m_cacheTtlInSecondsHasBeenSet(false),
    m_cacheDataEncrypted(false),
    m_cacheDataEncryptedHasBeenSet(false),
    m_requireAuthorizationForCacheControl(false),
    m_requireAuthorizationForCacheControlHasBeenSet(false),
    m_unauthorizedCacheControlHeaderStrategyHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_resourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayMethodSettings& AwsApiGatewayMethodSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricsEnabled"))
  {
    m_metricsEnabled = jsonValue.GetBool("MetricsEnabled");

    m_metricsEnabledHasBeenSet = true;
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

  if(jsonValue.ValueExists("CachingEnabled"))
  {
    m_cachingEnabled = jsonValue.GetBool("CachingEnabled");

    m_cachingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheTtlInSeconds"))
  {
    m_cacheTtlInSeconds = jsonValue.GetInteger("CacheTtlInSeconds");

    m_cacheTtlInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheDataEncrypted"))
  {
    m_cacheDataEncrypted = jsonValue.GetBool("CacheDataEncrypted");

    m_cacheDataEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireAuthorizationForCacheControl"))
  {
    m_requireAuthorizationForCacheControl = jsonValue.GetBool("RequireAuthorizationForCacheControl");

    m_requireAuthorizationForCacheControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnauthorizedCacheControlHeaderStrategy"))
  {
    m_unauthorizedCacheControlHeaderStrategy = jsonValue.GetString("UnauthorizedCacheControlHeaderStrategy");

    m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = jsonValue.GetString("HttpMethod");

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcePath"))
  {
    m_resourcePath = jsonValue.GetString("ResourcePath");

    m_resourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayMethodSettings::Jsonize() const
{
  JsonValue payload;

  if(m_metricsEnabledHasBeenSet)
  {
   payload.WithBool("MetricsEnabled", m_metricsEnabled);

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

  if(m_cachingEnabledHasBeenSet)
  {
   payload.WithBool("CachingEnabled", m_cachingEnabled);

  }

  if(m_cacheTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("CacheTtlInSeconds", m_cacheTtlInSeconds);

  }

  if(m_cacheDataEncryptedHasBeenSet)
  {
   payload.WithBool("CacheDataEncrypted", m_cacheDataEncrypted);

  }

  if(m_requireAuthorizationForCacheControlHasBeenSet)
  {
   payload.WithBool("RequireAuthorizationForCacheControl", m_requireAuthorizationForCacheControl);

  }

  if(m_unauthorizedCacheControlHeaderStrategyHasBeenSet)
  {
   payload.WithString("UnauthorizedCacheControlHeaderStrategy", m_unauthorizedCacheControlHeaderStrategy);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("HttpMethod", m_httpMethod);

  }

  if(m_resourcePathHasBeenSet)
  {
   payload.WithString("ResourcePath", m_resourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
