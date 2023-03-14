/**
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


    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaks = value; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaks = std::move(value); }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramResult& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramResult& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramResult& AddAdBreaks(const AdBreak& value) { m_adBreaks.push_back(value); return *this; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramResult& AddAdBreaks(AdBreak&& value) { m_adBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline UpdateProgramResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline UpdateProgramResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN to assign to the program.</p>
     */
    inline UpdateProgramResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline UpdateProgramResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline UpdateProgramResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the channel for this program.</p>
     */
    inline UpdateProgramResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The clip range configuration settings.</p>
     */
    inline const ClipRange& GetClipRange() const{ return m_clipRange; }

    /**
     * <p>The clip range configuration settings.</p>
     */
    inline void SetClipRange(const ClipRange& value) { m_clipRange = value; }

    /**
     * <p>The clip range configuration settings.</p>
     */
    inline void SetClipRange(ClipRange&& value) { m_clipRange = std::move(value); }

    /**
     * <p>The clip range configuration settings.</p>
     */
    inline UpdateProgramResult& WithClipRange(const ClipRange& value) { SetClipRange(value); return *this;}

    /**
     * <p>The clip range configuration settings.</p>
     */
    inline UpdateProgramResult& WithClipRange(ClipRange&& value) { SetClipRange(std::move(value)); return *this;}


    /**
     * <p>The time the program was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the program was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the program was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the program was created.</p>
     */
    inline UpdateProgramResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the program was created.</p>
     */
    inline UpdateProgramResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the live program in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>The duration of the live program in milliseconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillis = value; }

    /**
     * <p>The duration of the live program in milliseconds.</p>
     */
    inline UpdateProgramResult& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceName = value; }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceName.assign(value); }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline UpdateProgramResult& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline UpdateProgramResult& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline UpdateProgramResult& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The name to assign to this program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name to assign to this program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programName = value; }

    /**
     * <p>The name to assign to this program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programName = std::move(value); }

    /**
     * <p>The name to assign to this program.</p>
     */
    inline void SetProgramName(const char* value) { m_programName.assign(value); }

    /**
     * <p>The name to assign to this program.</p>
     */
    inline UpdateProgramResult& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name to assign to this program.</p>
     */
    inline UpdateProgramResult& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to this program.</p>
     */
    inline UpdateProgramResult& WithProgramName(const char* value) { SetProgramName(value); return *this;}


    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }

    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTime = value; }

    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTime = std::move(value); }

    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline UpdateProgramResult& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}

    /**
     * <p>The scheduled start time for this Program.</p>
     */
    inline UpdateProgramResult& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}


    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline UpdateProgramResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline UpdateProgramResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the source location for this program.</p>
     */
    inline UpdateProgramResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceName = value; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceName = std::move(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceName.assign(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline UpdateProgramResult& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline UpdateProgramResult& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline UpdateProgramResult& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProgramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProgramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProgramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;

    Aws::String m_arn;

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
