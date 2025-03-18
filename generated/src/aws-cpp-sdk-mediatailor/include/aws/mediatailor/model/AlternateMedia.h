/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ClipRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/AdBreak.h>
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
   * <p>A playlist of media (VOD and/or live) to be played instead of the default
   * media on a particular program.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AlternateMedia">AWS
   * API Reference</a></p>
   */
  class AlternateMedia
  {
  public:
    AWS_MEDIATAILOR_API AlternateMedia() = default;
    AWS_MEDIATAILOR_API AlternateMedia(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AlternateMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    AlternateMedia& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline const Aws::String& GetLiveSourceName() const { return m_liveSourceName; }
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }
    template<typename LiveSourceNameT = Aws::String>
    void SetLiveSourceName(LiveSourceNameT&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::forward<LiveSourceNameT>(value); }
    template<typename LiveSourceNameT = Aws::String>
    AlternateMedia& WithLiveSourceName(LiveSourceNameT&& value) { SetLiveSourceName(std::forward<LiveSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    AlternateMedia& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ClipRange& GetClipRange() const { return m_clipRange; }
    inline bool ClipRangeHasBeenSet() const { return m_clipRangeHasBeenSet; }
    template<typename ClipRangeT = ClipRange>
    void SetClipRange(ClipRangeT&& value) { m_clipRangeHasBeenSet = true; m_clipRange = std::forward<ClipRangeT>(value); }
    template<typename ClipRangeT = ClipRange>
    AlternateMedia& WithClipRange(ClipRangeT&& value) { SetClipRange(std::forward<ClipRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the alternateMedia is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline long long GetScheduledStartTimeMillis() const { return m_scheduledStartTimeMillis; }
    inline bool ScheduledStartTimeMillisHasBeenSet() const { return m_scheduledStartTimeMillisHasBeenSet; }
    inline void SetScheduledStartTimeMillis(long long value) { m_scheduledStartTimeMillisHasBeenSet = true; m_scheduledStartTimeMillis = value; }
    inline AlternateMedia& WithScheduledStartTimeMillis(long long value) { SetScheduledStartTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const { return m_adBreaks; }
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    void SetAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::forward<AdBreaksT>(value); }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    AlternateMedia& WithAdBreaks(AdBreaksT&& value) { SetAdBreaks(std::forward<AdBreaksT>(value)); return *this;}
    template<typename AdBreaksT = AdBreak>
    AlternateMedia& AddAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.emplace_back(std::forward<AdBreaksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration of the alternateMedia in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline AlternateMedia& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;

    long long m_scheduledStartTimeMillis{0};
    bool m_scheduledStartTimeMillisHasBeenSet = false;

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
