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
   * <p>Contains route settings for a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayV2RouteSettings">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayV2RouteSettings
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings();
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether detailed metrics are enabled.</p>
     */
    inline bool GetDetailedMetricsEnabled() const{ return m_detailedMetricsEnabled; }

    /**
     * <p>Indicates whether detailed metrics are enabled.</p>
     */
    inline bool DetailedMetricsEnabledHasBeenSet() const { return m_detailedMetricsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether detailed metrics are enabled.</p>
     */
    inline void SetDetailedMetricsEnabled(bool value) { m_detailedMetricsEnabledHasBeenSet = true; m_detailedMetricsEnabled = value; }

    /**
     * <p>Indicates whether detailed metrics are enabled.</p>
     */
    inline AwsApiGatewayV2RouteSettings& WithDetailedMetricsEnabled(bool value) { SetDetailedMetricsEnabled(value); return *this;}


    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayV2RouteSettings& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayV2RouteSettings& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline AwsApiGatewayV2RouteSettings& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}


    /**
     * <p>Indicates whether data trace logging is enabled. Data trace logging affects
     * the log entries that are pushed to CloudWatch Logs. Supported only for WebSocket
     * APIs.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }

    /**
     * <p>Indicates whether data trace logging is enabled. Data trace logging affects
     * the log entries that are pushed to CloudWatch Logs. Supported only for WebSocket
     * APIs.</p>
     */
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }

    /**
     * <p>Indicates whether data trace logging is enabled. Data trace logging affects
     * the log entries that are pushed to CloudWatch Logs. Supported only for WebSocket
     * APIs.</p>
     */
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }

    /**
     * <p>Indicates whether data trace logging is enabled. Data trace logging affects
     * the log entries that are pushed to CloudWatch Logs. Supported only for WebSocket
     * APIs.</p>
     */
    inline AwsApiGatewayV2RouteSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}


    /**
     * <p>The throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }

    /**
     * <p>The throttling burst limit.</p>
     */
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }

    /**
     * <p>The throttling burst limit.</p>
     */
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }

    /**
     * <p>The throttling burst limit.</p>
     */
    inline AwsApiGatewayV2RouteSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}


    /**
     * <p>The throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }

    /**
     * <p>The throttling rate limit.</p>
     */
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }

    /**
     * <p>The throttling rate limit.</p>
     */
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }

    /**
     * <p>The throttling rate limit.</p>
     */
    inline AwsApiGatewayV2RouteSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}

  private:

    bool m_detailedMetricsEnabled;
    bool m_detailedMetricsEnabledHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    bool m_dataTraceEnabled;
    bool m_dataTraceEnabledHasBeenSet = false;

    int m_throttlingBurstLimit;
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit;
    bool m_throttlingRateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
