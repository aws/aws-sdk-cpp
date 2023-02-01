/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Defines settings for a method for the stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayMethodSettings">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayMethodSettings
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings();
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether CloudWatch metrics are enabled for the method. </p>
     */
    inline bool GetMetricsEnabled() const{ return m_metricsEnabled; }

    /**
     * <p>Indicates whether CloudWatch metrics are enabled for the method. </p>
     */
    inline bool MetricsEnabledHasBeenSet() const { return m_metricsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether CloudWatch metrics are enabled for the method. </p>
     */
    inline void SetMetricsEnabled(bool value) { m_metricsEnabledHasBeenSet = true; m_metricsEnabled = value; }

    /**
     * <p>Indicates whether CloudWatch metrics are enabled for the method. </p>
     */
    inline AwsApiGatewayMethodSettings& WithMetricsEnabled(bool value) { SetMetricsEnabled(value); return *this;}


    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}


    /**
     * <p>Indicates whether data trace logging is enabled for the method. Data trace
     * logging affects the log entries that are pushed to CloudWatch Logs.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }

    /**
     * <p>Indicates whether data trace logging is enabled for the method. Data trace
     * logging affects the log entries that are pushed to CloudWatch Logs.</p>
     */
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }

    /**
     * <p>Indicates whether data trace logging is enabled for the method. Data trace
     * logging affects the log entries that are pushed to CloudWatch Logs.</p>
     */
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }

    /**
     * <p>Indicates whether data trace logging is enabled for the method. Data trace
     * logging affects the log entries that are pushed to CloudWatch Logs.</p>
     */
    inline AwsApiGatewayMethodSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}


    /**
     * <p>The throttling burst limit for the method.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }

    /**
     * <p>The throttling burst limit for the method.</p>
     */
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }

    /**
     * <p>The throttling burst limit for the method.</p>
     */
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }

    /**
     * <p>The throttling burst limit for the method.</p>
     */
    inline AwsApiGatewayMethodSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}


    /**
     * <p>The throttling rate limit for the method.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }

    /**
     * <p>The throttling rate limit for the method.</p>
     */
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }

    /**
     * <p>The throttling rate limit for the method.</p>
     */
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }

    /**
     * <p>The throttling rate limit for the method.</p>
     */
    inline AwsApiGatewayMethodSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}


    /**
     * <p>Indicates whether responses are cached and returned for requests. For
     * responses to be cached, a cache cluster must be enabled on the stage.</p>
     */
    inline bool GetCachingEnabled() const{ return m_cachingEnabled; }

    /**
     * <p>Indicates whether responses are cached and returned for requests. For
     * responses to be cached, a cache cluster must be enabled on the stage.</p>
     */
    inline bool CachingEnabledHasBeenSet() const { return m_cachingEnabledHasBeenSet; }

    /**
     * <p>Indicates whether responses are cached and returned for requests. For
     * responses to be cached, a cache cluster must be enabled on the stage.</p>
     */
    inline void SetCachingEnabled(bool value) { m_cachingEnabledHasBeenSet = true; m_cachingEnabled = value; }

    /**
     * <p>Indicates whether responses are cached and returned for requests. For
     * responses to be cached, a cache cluster must be enabled on the stage.</p>
     */
    inline AwsApiGatewayMethodSettings& WithCachingEnabled(bool value) { SetCachingEnabled(value); return *this;}


    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response is cached.</p>
     */
    inline int GetCacheTtlInSeconds() const{ return m_cacheTtlInSeconds; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response is cached.</p>
     */
    inline bool CacheTtlInSecondsHasBeenSet() const { return m_cacheTtlInSecondsHasBeenSet; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response is cached.</p>
     */
    inline void SetCacheTtlInSeconds(int value) { m_cacheTtlInSecondsHasBeenSet = true; m_cacheTtlInSeconds = value; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response is cached.</p>
     */
    inline AwsApiGatewayMethodSettings& WithCacheTtlInSeconds(int value) { SetCacheTtlInSeconds(value); return *this;}


    /**
     * <p>Indicates whether the cached responses are encrypted. </p>
     */
    inline bool GetCacheDataEncrypted() const{ return m_cacheDataEncrypted; }

    /**
     * <p>Indicates whether the cached responses are encrypted. </p>
     */
    inline bool CacheDataEncryptedHasBeenSet() const { return m_cacheDataEncryptedHasBeenSet; }

    /**
     * <p>Indicates whether the cached responses are encrypted. </p>
     */
    inline void SetCacheDataEncrypted(bool value) { m_cacheDataEncryptedHasBeenSet = true; m_cacheDataEncrypted = value; }

    /**
     * <p>Indicates whether the cached responses are encrypted. </p>
     */
    inline AwsApiGatewayMethodSettings& WithCacheDataEncrypted(bool value) { SetCacheDataEncrypted(value); return *this;}


    /**
     * <p>Indicates whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool GetRequireAuthorizationForCacheControl() const{ return m_requireAuthorizationForCacheControl; }

    /**
     * <p>Indicates whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool RequireAuthorizationForCacheControlHasBeenSet() const { return m_requireAuthorizationForCacheControlHasBeenSet; }

    /**
     * <p>Indicates whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline void SetRequireAuthorizationForCacheControl(bool value) { m_requireAuthorizationForCacheControlHasBeenSet = true; m_requireAuthorizationForCacheControl = value; }

    /**
     * <p>Indicates whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline AwsApiGatewayMethodSettings& WithRequireAuthorizationForCacheControl(bool value) { SetRequireAuthorizationForCacheControl(value); return *this;}


    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline const Aws::String& GetUnauthorizedCacheControlHeaderStrategy() const{ return m_unauthorizedCacheControlHeaderStrategy; }

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline bool UnauthorizedCacheControlHeaderStrategyHasBeenSet() const { return m_unauthorizedCacheControlHeaderStrategyHasBeenSet; }

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(const Aws::String& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = value; }

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(Aws::String&& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = std::move(value); }

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(const char* value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy.assign(value); }

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithUnauthorizedCacheControlHeaderStrategy(const Aws::String& value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithUnauthorizedCacheControlHeaderStrategy(Aws::String&& value) { SetUnauthorizedCacheControlHeaderStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline AwsApiGatewayMethodSettings& WithUnauthorizedCacheControlHeaderStrategy(const char* value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}


    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline bool ResourcePathHasBeenSet() const { return m_resourcePathHasBeenSet; }

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = std::move(value); }

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithResourcePath(Aws::String&& value) { SetResourcePath(std::move(value)); return *this;}

    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline AwsApiGatewayMethodSettings& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}

  private:

    bool m_metricsEnabled;
    bool m_metricsEnabledHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    bool m_dataTraceEnabled;
    bool m_dataTraceEnabledHasBeenSet = false;

    int m_throttlingBurstLimit;
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit;
    bool m_throttlingRateLimitHasBeenSet = false;

    bool m_cachingEnabled;
    bool m_cachingEnabledHasBeenSet = false;

    int m_cacheTtlInSeconds;
    bool m_cacheTtlInSecondsHasBeenSet = false;

    bool m_cacheDataEncrypted;
    bool m_cacheDataEncryptedHasBeenSet = false;

    bool m_requireAuthorizationForCacheControl;
    bool m_requireAuthorizationForCacheControlHasBeenSet = false;

    Aws::String m_unauthorizedCacheControlHeaderStrategy;
    bool m_unauthorizedCacheControlHeaderStrategyHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
