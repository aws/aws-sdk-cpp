﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ClipRange.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/AdBreak.h>
#include <aws/mediatailor/model/AudienceMedia.h>
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
  class UpdateProgramResult
  {
  public:
    AWS_MEDIATAILOR_API UpdateProgramResult();
    AWS_MEDIATAILOR_API UpdateProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API UpdateProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaks = value; }
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaks = std::move(value); }
    inline UpdateProgramResult& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}
    inline UpdateProgramResult& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}
    inline UpdateProgramResult& AddAdBreaks(const AdBreak& value) { m_adBreaks.push_back(value); return *this; }
    inline UpdateProgramResult& AddAdBreaks(AdBreak&& value) { m_adBreaks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateProgramResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateProgramResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateProgramResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of AudienceMedia defined in program.</p>
     */
    inline const Aws::Vector<AudienceMedia>& GetAudienceMedia() const{ return m_audienceMedia; }
    inline void SetAudienceMedia(const Aws::Vector<AudienceMedia>& value) { m_audienceMedia = value; }
    inline void SetAudienceMedia(Aws::Vector<AudienceMedia>&& value) { m_audienceMedia = std::move(value); }
    inline UpdateProgramResult& WithAudienceMedia(const Aws::Vector<AudienceMedia>& value) { SetAudienceMedia(value); return *this;}
    inline UpdateProgramResult& WithAudienceMedia(Aws::Vector<AudienceMedia>&& value) { SetAudienceMedia(std::move(value)); return *this;}
    inline UpdateProgramResult& AddAudienceMedia(const AudienceMedia& value) { m_audienceMedia.push_back(value); return *this; }
    inline UpdateProgramResult& AddAudienceMedia(AudienceMedia&& value) { m_audienceMedia.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline UpdateProgramResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline UpdateProgramResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline UpdateProgramResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clip range configuration settings.</p>
     */
    inline const ClipRange& GetClipRange() const{ return m_clipRange; }
    inline void SetClipRange(const ClipRange& value) { m_clipRange = value; }
    inline void SetClipRange(ClipRange&& value) { m_clipRange = std::move(value); }
    inline UpdateProgramResult& WithClipRange(const ClipRange& value) { SetClipRange(value); return *this;}
    inline UpdateProgramResult& WithClipRange(ClipRange&& value) { SetClipRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the program was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline UpdateProgramResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UpdateProgramResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the live program in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }
    inline void SetDurationMillis(long long value) { m_durationMillis = value; }
    inline UpdateProgramResult& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceName = value; }
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceName = std::move(value); }
    inline void SetLiveSourceName(const char* value) { m_liveSourceName.assign(value); }
    inline UpdateProgramResult& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}
    inline UpdateProgramResult& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}
    inline UpdateProgramResult& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to this program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline void SetProgramName(const Aws::String& value) { m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programName.assign(value); }
    inline UpdateProgramResult& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline UpdateProgramResult& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline UpdateProgramResult& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTime = value; }
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTime = std::move(value); }
    inline UpdateProgramResult& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}
    inline UpdateProgramResult& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }
    inline UpdateProgramResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline UpdateProgramResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline UpdateProgramResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceName = value; }
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceName = std::move(value); }
    inline void SetVodSourceName(const char* value) { m_vodSourceName.assign(value); }
    inline UpdateProgramResult& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}
    inline UpdateProgramResult& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}
    inline UpdateProgramResult& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProgramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProgramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProgramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AdBreak> m_adBreaks;

    Aws::String m_arn;

    Aws::Vector<AudienceMedia> m_audienceMedia;

    Aws::String m_channelName;

    ClipRange m_clipRange;

    Aws::Utils::DateTime m_creationTime;

    long long m_durationMillis;

    Aws::String m_liveSourceName;

    Aws::String m_programName;

    Aws::Utils::DateTime m_scheduledStartTime;

    Aws::String m_sourceLocationName;

    Aws::String m_vodSourceName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
