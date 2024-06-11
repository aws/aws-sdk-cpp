﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/ChannelState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/mediatailor/model/LogConfigurationForChannel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/TimeShiftConfiguration.h>
#include <aws/mediatailor/model/ResponseOutputItem.h>
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
  class DescribeChannelResult
  {
  public:
    AWS_MEDIATAILOR_API DescribeChannelResult();
    AWS_MEDIATAILOR_API DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeChannelResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of audiences defined in channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const{ return m_audiences; }
    inline void SetAudiences(const Aws::Vector<Aws::String>& value) { m_audiences = value; }
    inline void SetAudiences(Aws::Vector<Aws::String>&& value) { m_audiences = std::move(value); }
    inline DescribeChannelResult& WithAudiences(const Aws::Vector<Aws::String>& value) { SetAudiences(value); return *this;}
    inline DescribeChannelResult& WithAudiences(Aws::Vector<Aws::String>&& value) { SetAudiences(std::move(value)); return *this;}
    inline DescribeChannelResult& AddAudiences(const Aws::String& value) { m_audiences.push_back(value); return *this; }
    inline DescribeChannelResult& AddAudiences(Aws::String&& value) { m_audiences.push_back(std::move(value)); return *this; }
    inline DescribeChannelResult& AddAudiences(const char* value) { m_audiences.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline DescribeChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline DescribeChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline DescribeChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline const ChannelState& GetChannelState() const{ return m_channelState; }
    inline void SetChannelState(const ChannelState& value) { m_channelState = value; }
    inline void SetChannelState(ChannelState&& value) { m_channelState = std::move(value); }
    inline DescribeChannelResult& WithChannelState(const ChannelState& value) { SetChannelState(value); return *this;}
    inline DescribeChannelResult& WithChannelState(ChannelState&& value) { SetChannelState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeChannelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeChannelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the slate used to fill gaps between programs in
     * the schedule.</p>
     */
    inline const SlateSource& GetFillerSlate() const{ return m_fillerSlate; }
    inline void SetFillerSlate(const SlateSource& value) { m_fillerSlate = value; }
    inline void SetFillerSlate(SlateSource&& value) { m_fillerSlate = std::move(value); }
    inline DescribeChannelResult& WithFillerSlate(const SlateSource& value) { SetFillerSlate(value); return *this;}
    inline DescribeChannelResult& WithFillerSlate(SlateSource&& value) { SetFillerSlate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeChannelResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeChannelResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration for the channel.</p>
     */
    inline const LogConfigurationForChannel& GetLogConfiguration() const{ return m_logConfiguration; }
    inline void SetLogConfiguration(const LogConfigurationForChannel& value) { m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfigurationForChannel&& value) { m_logConfiguration = std::move(value); }
    inline DescribeChannelResult& WithLogConfiguration(const LogConfigurationForChannel& value) { SetLogConfiguration(value); return *this;}
    inline DescribeChannelResult& WithLogConfiguration(LogConfigurationForChannel&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<ResponseOutputItem>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<ResponseOutputItem>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<ResponseOutputItem>&& value) { m_outputs = std::move(value); }
    inline DescribeChannelResult& WithOutputs(const Aws::Vector<ResponseOutputItem>& value) { SetOutputs(value); return *this;}
    inline DescribeChannelResult& WithOutputs(Aws::Vector<ResponseOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}
    inline DescribeChannelResult& AddOutputs(const ResponseOutputItem& value) { m_outputs.push_back(value); return *this; }
    inline DescribeChannelResult& AddOutputs(ResponseOutputItem&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel's playback mode.</p>
     */
    inline const Aws::String& GetPlaybackMode() const{ return m_playbackMode; }
    inline void SetPlaybackMode(const Aws::String& value) { m_playbackMode = value; }
    inline void SetPlaybackMode(Aws::String&& value) { m_playbackMode = std::move(value); }
    inline void SetPlaybackMode(const char* value) { m_playbackMode.assign(value); }
    inline DescribeChannelResult& WithPlaybackMode(const Aws::String& value) { SetPlaybackMode(value); return *this;}
    inline DescribeChannelResult& WithPlaybackMode(Aws::String&& value) { SetPlaybackMode(std::move(value)); return *this;}
    inline DescribeChannelResult& WithPlaybackMode(const char* value) { SetPlaybackMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel's tier.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }
    inline void SetTier(const Aws::String& value) { m_tier = value; }
    inline void SetTier(Aws::String&& value) { m_tier = std::move(value); }
    inline void SetTier(const char* value) { m_tier.assign(value); }
    inline DescribeChannelResult& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline DescribeChannelResult& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline DescribeChannelResult& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time-shifted viewing configuration for the channel. </p>
     */
    inline const TimeShiftConfiguration& GetTimeShiftConfiguration() const{ return m_timeShiftConfiguration; }
    inline void SetTimeShiftConfiguration(const TimeShiftConfiguration& value) { m_timeShiftConfiguration = value; }
    inline void SetTimeShiftConfiguration(TimeShiftConfiguration&& value) { m_timeShiftConfiguration = std::move(value); }
    inline DescribeChannelResult& WithTimeShiftConfiguration(const TimeShiftConfiguration& value) { SetTimeShiftConfiguration(value); return *this;}
    inline DescribeChannelResult& WithTimeShiftConfiguration(TimeShiftConfiguration&& value) { SetTimeShiftConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_audiences;

    Aws::String m_channelName;

    ChannelState m_channelState;

    Aws::Utils::DateTime m_creationTime;

    SlateSource m_fillerSlate;

    Aws::Utils::DateTime m_lastModifiedTime;

    LogConfigurationForChannel m_logConfiguration;

    Aws::Vector<ResponseOutputItem> m_outputs;

    Aws::String m_playbackMode;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_tier;

    TimeShiftConfiguration m_timeShiftConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
