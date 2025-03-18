/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LoggingStrategy.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class ConfigureLogsForPlaybackConfigurationResult
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult() = default;
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account.</p>
     */
    inline int GetPercentEnabled() const { return m_percentEnabled; }
    inline void SetPercentEnabled(int value) { m_percentEnabledHasBeenSet = true; m_percentEnabled = value; }
    inline ConfigureLogsForPlaybackConfigurationResult& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const { return m_playbackConfigurationName; }
    template<typename PlaybackConfigurationNameT = Aws::String>
    void SetPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::forward<PlaybackConfigurationNameT>(value); }
    template<typename PlaybackConfigurationNameT = Aws::String>
    ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(PlaybackConfigurationNameT&& value) { SetPlaybackConfigurationName(std::forward<PlaybackConfigurationNameT>(value)); return *this;}
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
    template<typename EnabledLoggingStrategiesT = Aws::Vector<LoggingStrategy>>
    void SetEnabledLoggingStrategies(EnabledLoggingStrategiesT&& value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies = std::forward<EnabledLoggingStrategiesT>(value); }
    template<typename EnabledLoggingStrategiesT = Aws::Vector<LoggingStrategy>>
    ConfigureLogsForPlaybackConfigurationResult& WithEnabledLoggingStrategies(EnabledLoggingStrategiesT&& value) { SetEnabledLoggingStrategies(std::forward<EnabledLoggingStrategiesT>(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& AddEnabledLoggingStrategies(LoggingStrategy value) { m_enabledLoggingStrategiesHasBeenSet = true; m_enabledLoggingStrategies.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfigureLogsForPlaybackConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_percentEnabled{0};
    bool m_percentEnabledHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    Aws::Vector<LoggingStrategy> m_enabledLoggingStrategies;
    bool m_enabledLoggingStrategiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
