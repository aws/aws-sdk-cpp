/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LoggingStrategy.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Defines where AWS Elemental MediaTailor sends logs for the playback
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class LogConfiguration
  {
  public:
    AWS_MEDIATAILOR_API LogConfiguration() = default;
    AWS_MEDIATAILOR_API LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of session logs that MediaTailor sends to your configured log
     * destination. For example, if your playback configuration has 1000 sessions and
     * <code>percentEnabled</code> is set to <code>60</code>, MediaTailor sends logs
     * for 600 of the sessions to CloudWatch Logs. MediaTailor decides at random which
     * of the playback configuration sessions to send logs for. If you want to view
     * logs for a specific session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline int GetPercentEnabled() const { return m_percentEnabled; }
    inline bool PercentEnabledHasBeenSet() const { return m_percentEnabledHasBeenSet; }
    inline void SetPercentEnabled(int value) { m_percentEnabledHasBeenSet = true; m_percentEnabled = value; }
    inline LogConfiguration& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used for collecting logs from AWS Elemental MediaTailor.
     * <code>LEGACY_CLOUDWATCH</code> indicates that MediaTailor is sending logs
     * directly to Amazon CloudWatch Logs. <code>VENDED_LOGS</code> indicates that
     * MediaTailor is sending logs to CloudWatch, which then vends the logs to your
     * destination of choice. Supported destinations are CloudWatch Logs log group,
     * Amazon S3 bucket, and Amazon Data Firehose stream. </p>
     */
    inline const Aws::Vector<LoggingStrategy>& GetEnabledLoggingStrategies() const { return m_enabledLoggingStrategies; }
    inline bool EnabledLoggingStrategiesHasBeenSet() const { return m_enabledLoggingStrategiesHasBeenSet; }
    template<typename EnabledLoggingStrategiesT = Aws::Vector<LoggingStrategy>>
    void SetEnabledLoggingStrategies(EnabledLoggingStrategiesT&& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies = std::forward<EnabledLoggingStrategiesT>(value); }
    template<typename EnabledLoggingStrategiesT = Aws::Vector<LoggingStrategy>>
    LogConfiguration& WithEnabledLoggingStrategies(EnabledLoggingStrategiesT&& value) { SetEnabledLoggingStrategies(std::forward<EnabledLoggingStrategiesT>(value)); return *this;}
    inline LogConfiguration& AddEnabledLoggingStrategies(LoggingStrategy value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies.push_back(value); return *this; }
    ///@}
  private:

    int m_percentEnabled{0};
    bool m_percentEnabledHasBeenSet = false;

    Aws::Vector<LoggingStrategy> m_enabledLoggingStrategies;
    bool m_enabledLoggingStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
