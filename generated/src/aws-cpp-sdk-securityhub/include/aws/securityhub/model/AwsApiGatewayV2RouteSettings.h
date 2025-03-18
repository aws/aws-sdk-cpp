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
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings() = default;
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2RouteSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether detailed metrics are enabled.</p>
     */
    inline bool GetDetailedMetricsEnabled() const { return m_detailedMetricsEnabled; }
    inline bool DetailedMetricsEnabledHasBeenSet() const { return m_detailedMetricsEnabledHasBeenSet; }
    inline void SetDetailedMetricsEnabled(bool value) { m_detailedMetricsEnabledHasBeenSet = true; m_detailedMetricsEnabled = value; }
    inline AwsApiGatewayV2RouteSettings& WithDetailedMetricsEnabled(bool value) { SetDetailedMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level. The logging level affects the log entries that are pushed
     * to CloudWatch Logs. Supported only for WebSocket APIs.</p> <p>If the logging
     * level is <code>ERROR</code>, then the logs only include error-level entries.</p>
     * <p>If the logging level is <code>INFO</code>, then the logs include both
     * <code>ERROR</code> events and extra informational events.</p> <p>Valid values:
     * <code>OFF</code> | <code>ERROR</code> | <code>INFO</code> </p>
     */
    inline const Aws::String& GetLoggingLevel() const { return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    template<typename LoggingLevelT = Aws::String>
    void SetLoggingLevel(LoggingLevelT&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::forward<LoggingLevelT>(value); }
    template<typename LoggingLevelT = Aws::String>
    AwsApiGatewayV2RouteSettings& WithLoggingLevel(LoggingLevelT&& value) { SetLoggingLevel(std::forward<LoggingLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data trace logging is enabled. Data trace logging affects
     * the log entries that are pushed to CloudWatch Logs. Supported only for WebSocket
     * APIs.</p>
     */
    inline bool GetDataTraceEnabled() const { return m_dataTraceEnabled; }
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }
    inline AwsApiGatewayV2RouteSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const { return m_throttlingBurstLimit; }
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }
    inline AwsApiGatewayV2RouteSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const { return m_throttlingRateLimit; }
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }
    inline AwsApiGatewayV2RouteSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}
    ///@}
  private:

    bool m_detailedMetricsEnabled{false};
    bool m_detailedMetricsEnabledHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    bool m_dataTraceEnabled{false};
    bool m_dataTraceEnabledHasBeenSet = false;

    int m_throttlingBurstLimit{0};
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit{0.0};
    bool m_throttlingRateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
