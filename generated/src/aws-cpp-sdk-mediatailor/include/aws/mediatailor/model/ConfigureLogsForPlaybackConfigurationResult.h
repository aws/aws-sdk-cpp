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
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult();
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account.</p>
     */
    inline int GetPercentEnabled() const{ return m_percentEnabled; }
    inline void SetPercentEnabled(int value) { m_percentEnabled = value; }
    inline ConfigureLogsForPlaybackConfigurationResult& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationName = value; }
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationName = std::move(value); }
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationName.assign(value); }
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}
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
    inline const Aws::Vector<LoggingStrategy>& GetEnabledLoggingStrategies() const{ return m_enabledLoggingStrategies; }
    inline void SetEnabledLoggingStrategies(const Aws::Vector<LoggingStrategy>& value) { m_enabledLoggingStrategies = value; }
    inline void SetEnabledLoggingStrategies(Aws::Vector<LoggingStrategy>&& value) { m_enabledLoggingStrategies = std::move(value); }
    inline ConfigureLogsForPlaybackConfigurationResult& WithEnabledLoggingStrategies(const Aws::Vector<LoggingStrategy>& value) { SetEnabledLoggingStrategies(value); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& WithEnabledLoggingStrategies(Aws::Vector<LoggingStrategy>&& value) { SetEnabledLoggingStrategies(std::move(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& AddEnabledLoggingStrategies(const LoggingStrategy& value) { m_enabledLoggingStrategies.push_back(value); return *this; }
    inline ConfigureLogsForPlaybackConfigurationResult& AddEnabledLoggingStrategies(LoggingStrategy&& value) { m_enabledLoggingStrategies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ConfigureLogsForPlaybackConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ConfigureLogsForPlaybackConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_percentEnabled;

    Aws::String m_playbackConfigurationName;

    Aws::Vector<LoggingStrategy> m_enabledLoggingStrategies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
