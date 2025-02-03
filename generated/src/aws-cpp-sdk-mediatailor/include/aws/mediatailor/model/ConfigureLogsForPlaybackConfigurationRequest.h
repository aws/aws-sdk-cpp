/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LoggingStrategy.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Configures Amazon CloudWatch log settings for a playback
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForPlaybackConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsForPlaybackConfigurationRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogsForPlaybackConfiguration"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The percentage of session logs that MediaTailor sends to your CloudWatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to <code>60</code>, MediaTailor sends logs for 600 of the
     * sessions to CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline int GetPercentEnabled() const{ return m_percentEnabled; }
    inline bool PercentEnabledHasBeenSet() const { return m_percentEnabledHasBeenSet; }
    inline void SetPercentEnabled(int value) { m_percentEnabledHasBeenSet = true; m_percentEnabled = value; }
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used for collecting logs from AWS Elemental MediaTailor. To
     * configure MediaTailor to send logs directly to Amazon CloudWatch Logs, choose
     * <code>LEGACY_CLOUDWATCH</code>. To configure MediaTailor to send logs to
     * CloudWatch, which then vends the logs to your destination of choice, choose
     * <code>VENDED_LOGS</code>. Supported destinations are CloudWatch Logs log group,
     * Amazon S3 bucket, and Amazon Data Firehose stream.</p> <p>To use vended logs,
     * you must configure the delivery destination in Amazon CloudWatch, as described
     * in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AWS-logs-and-resource-policy.html#AWS-vended-logs-permissions-V2">Enable
     * logging from AWS services, Logging that requires additional permissions
     * [V2]</a>.</p>
     */
    inline const Aws::Vector<LoggingStrategy>& GetEnabledLoggingStrategies() const{ return m_enabledLoggingStrategies; }
    inline bool EnabledLoggingStrategiesHasBeenSet() const { return m_enabledLoggingStrategiesHasBeenSet; }
    inline void SetEnabledLoggingStrategies(const Aws::Vector<LoggingStrategy>& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies = value; }
    inline void SetEnabledLoggingStrategies(Aws::Vector<LoggingStrategy>&& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies = std::move(value); }
    inline ConfigureLogsForPlaybackConfigurationRequest& WithEnabledLoggingStrategies(const Aws::Vector<LoggingStrategy>& value) { SetEnabledLoggingStrategies(value); return *this;}
    inline ConfigureLogsForPlaybackConfigurationRequest& WithEnabledLoggingStrategies(Aws::Vector<LoggingStrategy>&& value) { SetEnabledLoggingStrategies(std::move(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationRequest& AddEnabledLoggingStrategies(const LoggingStrategy& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies.push_back(value); return *this; }
    inline ConfigureLogsForPlaybackConfigurationRequest& AddEnabledLoggingStrategies(LoggingStrategy&& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_percentEnabled;
    bool m_percentEnabledHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    Aws::Vector<LoggingStrategy> m_enabledLoggingStrategies;
    bool m_enabledLoggingStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
