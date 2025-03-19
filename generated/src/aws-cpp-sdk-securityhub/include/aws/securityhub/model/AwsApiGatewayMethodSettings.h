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
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings() = default;
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayMethodSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether CloudWatch metrics are enabled for the method. </p>
     */
    inline bool GetMetricsEnabled() const { return m_metricsEnabled; }
    inline bool MetricsEnabledHasBeenSet() const { return m_metricsEnabledHasBeenSet; }
    inline void SetMetricsEnabled(bool value) { m_metricsEnabledHasBeenSet = true; m_metricsEnabled = value; }
    inline AwsApiGatewayMethodSettings& WithMetricsEnabled(bool value) { SetMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level for this method. The logging level affects the log entries
     * that are pushed to CloudWatch Logs.</p> <p>If the logging level is
     * <code>ERROR</code>, then the logs only include error-level entries.</p> <p>If
     * the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline const Aws::String& GetLoggingLevel() const { return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    template<typename LoggingLevelT = Aws::String>
    void SetLoggingLevel(LoggingLevelT&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::forward<LoggingLevelT>(value); }
    template<typename LoggingLevelT = Aws::String>
    AwsApiGatewayMethodSettings& WithLoggingLevel(LoggingLevelT&& value) { SetLoggingLevel(std::forward<LoggingLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data trace logging is enabled for the method. Data trace
     * logging affects the log entries that are pushed to CloudWatch Logs.</p>
     */
    inline bool GetDataTraceEnabled() const { return m_dataTraceEnabled; }
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }
    inline AwsApiGatewayMethodSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throttling burst limit for the method.</p>
     */
    inline int GetThrottlingBurstLimit() const { return m_throttlingBurstLimit; }
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }
    inline AwsApiGatewayMethodSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throttling rate limit for the method.</p>
     */
    inline double GetThrottlingRateLimit() const { return m_throttlingRateLimit; }
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }
    inline AwsApiGatewayMethodSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether responses are cached and returned for requests. For
     * responses to be cached, a cache cluster must be enabled on the stage.</p>
     */
    inline bool GetCachingEnabled() const { return m_cachingEnabled; }
    inline bool CachingEnabledHasBeenSet() const { return m_cachingEnabledHasBeenSet; }
    inline void SetCachingEnabled(bool value) { m_cachingEnabledHasBeenSet = true; m_cachingEnabled = value; }
    inline AwsApiGatewayMethodSettings& WithCachingEnabled(bool value) { SetCachingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response is cached.</p>
     */
    inline int GetCacheTtlInSeconds() const { return m_cacheTtlInSeconds; }
    inline bool CacheTtlInSecondsHasBeenSet() const { return m_cacheTtlInSecondsHasBeenSet; }
    inline void SetCacheTtlInSeconds(int value) { m_cacheTtlInSecondsHasBeenSet = true; m_cacheTtlInSeconds = value; }
    inline AwsApiGatewayMethodSettings& WithCacheTtlInSeconds(int value) { SetCacheTtlInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cached responses are encrypted. </p>
     */
    inline bool GetCacheDataEncrypted() const { return m_cacheDataEncrypted; }
    inline bool CacheDataEncryptedHasBeenSet() const { return m_cacheDataEncryptedHasBeenSet; }
    inline void SetCacheDataEncrypted(bool value) { m_cacheDataEncryptedHasBeenSet = true; m_cacheDataEncrypted = value; }
    inline AwsApiGatewayMethodSettings& WithCacheDataEncrypted(bool value) { SetCacheDataEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool GetRequireAuthorizationForCacheControl() const { return m_requireAuthorizationForCacheControl; }
    inline bool RequireAuthorizationForCacheControlHasBeenSet() const { return m_requireAuthorizationForCacheControlHasBeenSet; }
    inline void SetRequireAuthorizationForCacheControl(bool value) { m_requireAuthorizationForCacheControlHasBeenSet = true; m_requireAuthorizationForCacheControl = value; }
    inline AwsApiGatewayMethodSettings& WithRequireAuthorizationForCacheControl(bool value) { SetRequireAuthorizationForCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how to handle unauthorized requests for cache invalidation.</p>
     * <p>Valid values: <code>FAIL_WITH_403</code> |
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code> |
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code> </p>
     */
    inline const Aws::String& GetUnauthorizedCacheControlHeaderStrategy() const { return m_unauthorizedCacheControlHeaderStrategy; }
    inline bool UnauthorizedCacheControlHeaderStrategyHasBeenSet() const { return m_unauthorizedCacheControlHeaderStrategyHasBeenSet; }
    template<typename UnauthorizedCacheControlHeaderStrategyT = Aws::String>
    void SetUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategyT&& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = std::forward<UnauthorizedCacheControlHeaderStrategyT>(value); }
    template<typename UnauthorizedCacheControlHeaderStrategyT = Aws::String>
    AwsApiGatewayMethodSettings& WithUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategyT&& value) { SetUnauthorizedCacheControlHeaderStrategy(std::forward<UnauthorizedCacheControlHeaderStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method. You can use an asterisk (*) as a wildcard to apply method
     * settings to multiple methods.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    AwsApiGatewayMethodSettings& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource path for this method. Forward slashes (/) are encoded as ~1 .
     * The initial slash must include a forward slash.</p> <p>For example, the path
     * value <code>/resource/subresource</code> must be encoded as
     * <code>/~1resource~1subresource</code>.</p> <p>To specify the root path, use only
     * a slash (/). You can use an asterisk (*) as a wildcard to apply method settings
     * to multiple methods.</p>
     */
    inline const Aws::String& GetResourcePath() const { return m_resourcePath; }
    inline bool ResourcePathHasBeenSet() const { return m_resourcePathHasBeenSet; }
    template<typename ResourcePathT = Aws::String>
    void SetResourcePath(ResourcePathT&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = std::forward<ResourcePathT>(value); }
    template<typename ResourcePathT = Aws::String>
    AwsApiGatewayMethodSettings& WithResourcePath(ResourcePathT&& value) { SetResourcePath(std::forward<ResourcePathT>(value)); return *this;}
    ///@}
  private:

    bool m_metricsEnabled{false};
    bool m_metricsEnabledHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    bool m_dataTraceEnabled{false};
    bool m_dataTraceEnabledHasBeenSet = false;

    int m_throttlingBurstLimit{0};
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit{0.0};
    bool m_throttlingRateLimitHasBeenSet = false;

    bool m_cachingEnabled{false};
    bool m_cachingEnabledHasBeenSet = false;

    int m_cacheTtlInSeconds{0};
    bool m_cacheTtlInSecondsHasBeenSet = false;

    bool m_cacheDataEncrypted{false};
    bool m_cacheDataEncryptedHasBeenSet = false;

    bool m_requireAuthorizationForCacheControl{false};
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
