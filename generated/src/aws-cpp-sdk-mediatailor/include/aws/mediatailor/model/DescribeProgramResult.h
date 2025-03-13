/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/ClipRange.h>
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
  class DescribeProgramResult
  {
  public:
    AWS_MEDIATAILOR_API DescribeProgramResult() = default;
    AWS_MEDIATAILOR_API DescribeProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API DescribeProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const { return m_adBreaks; }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    void SetAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::forward<AdBreaksT>(value); }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    DescribeProgramResult& WithAdBreaks(AdBreaksT&& value) { SetAdBreaks(std::forward<AdBreaksT>(value)); return *this;}
    template<typename AdBreaksT = AdBreak>
    DescribeProgramResult& AddAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.emplace_back(std::forward<AdBreaksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeProgramResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    DescribeProgramResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeProgramResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const { return m_liveSourceName; }
    template<typename LiveSourceNameT = Aws::String>
    void SetLiveSourceName(LiveSourceNameT&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::forward<LiveSourceNameT>(value); }
    template<typename LiveSourceNameT = Aws::String>
    DescribeProgramResult& WithLiveSourceName(LiveSourceNameT&& value) { SetLiveSourceName(std::forward<LiveSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    DescribeProgramResult& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const { return m_scheduledStartTime; }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    void SetScheduledStartTime(ScheduledStartTimeT&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::forward<ScheduledStartTimeT>(value); }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    DescribeProgramResult& WithScheduledStartTime(ScheduledStartTimeT&& value) { SetScheduledStartTime(std::forward<ScheduledStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source location name.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    DescribeProgramResult& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    DescribeProgramResult& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clip range configuration settings.</p>
     */
    inline const ClipRange& GetClipRange() const { return m_clipRange; }
    template<typename ClipRangeT = ClipRange>
    void SetClipRange(ClipRangeT&& value) { m_clipRangeHasBeenSet = true; m_clipRange = std::forward<ClipRangeT>(value); }
    template<typename ClipRangeT = ClipRange>
    DescribeProgramResult& WithClipRange(ClipRangeT&& value) { SetClipRange(std::forward<ClipRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the live program in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline DescribeProgramResult& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of AudienceMedia defined in program.</p>
     */
    inline const Aws::Vector<AudienceMedia>& GetAudienceMedia() const { return m_audienceMedia; }
    template<typename AudienceMediaT = Aws::Vector<AudienceMedia>>
    void SetAudienceMedia(AudienceMediaT&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = std::forward<AudienceMediaT>(value); }
    template<typename AudienceMediaT = Aws::Vector<AudienceMedia>>
    DescribeProgramResult& WithAudienceMedia(AudienceMediaT&& value) { SetAudienceMedia(std::forward<AudienceMediaT>(value)); return *this;}
    template<typename AudienceMediaT = AudienceMedia>
    DescribeProgramResult& AddAudienceMedia(AudienceMediaT&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.emplace_back(std::forward<AudienceMediaT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProgramResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledStartTime{};
    bool m_scheduledStartTimeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    Aws::Vector<AudienceMedia> m_audienceMedia;
    bool m_audienceMediaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
