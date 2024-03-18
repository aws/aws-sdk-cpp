/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/ClipRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MEDIATAILOR_API AlternateMedia();
    AWS_MEDIATAILOR_API AlternateMedia(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AlternateMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaksHasBeenSet = true; m_adBreaks = value; }

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::move(value); }

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline AlternateMedia& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline AlternateMedia& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline AlternateMedia& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }

    /**
     * <p>Ad break configuration parameters defined in AlternateMedia.</p>
     */
    inline AlternateMedia& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }


    
    inline const ClipRange& GetClipRange() const{ return m_clipRange; }

    
    inline bool ClipRangeHasBeenSet() const { return m_clipRangeHasBeenSet; }

    
    inline void SetClipRange(const ClipRange& value) { m_clipRangeHasBeenSet = true; m_clipRange = value; }

    
    inline void SetClipRange(ClipRange&& value) { m_clipRangeHasBeenSet = true; m_clipRange = std::move(value); }

    
    inline AlternateMedia& WithClipRange(const ClipRange& value) { SetClipRange(value); return *this;}

    
    inline AlternateMedia& WithClipRange(ClipRange&& value) { SetClipRange(std::move(value)); return *this;}


    /**
     * <p>The duration of the alternateMedia in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>The duration of the alternateMedia in milliseconds.</p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>The duration of the alternateMedia in milliseconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>The duration of the alternateMedia in milliseconds.</p>
     */
    inline AlternateMedia& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline AlternateMedia& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline AlternateMedia& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the live source for alternateMedia.</p>
     */
    inline AlternateMedia& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The date and time that the alternateMedia is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline long long GetScheduledStartTimeMillis() const{ return m_scheduledStartTimeMillis; }

    /**
     * <p>The date and time that the alternateMedia is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline bool ScheduledStartTimeMillisHasBeenSet() const { return m_scheduledStartTimeMillisHasBeenSet; }

    /**
     * <p>The date and time that the alternateMedia is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline void SetScheduledStartTimeMillis(long long value) { m_scheduledStartTimeMillisHasBeenSet = true; m_scheduledStartTimeMillis = value; }

    /**
     * <p>The date and time that the alternateMedia is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline AlternateMedia& WithScheduledStartTimeMillis(long long value) { SetScheduledStartTimeMillis(value); return *this;}


    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline AlternateMedia& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline AlternateMedia& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location for alternateMedia.</p>
     */
    inline AlternateMedia& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline AlternateMedia& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline AlternateMedia& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VOD source for alternateMedia.</p>
     */
    inline AlternateMedia& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    long long m_scheduledStartTimeMillis;
    bool m_scheduledStartTimeMillisHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
