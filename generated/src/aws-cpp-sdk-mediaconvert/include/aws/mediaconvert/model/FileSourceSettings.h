/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CaptionSourceByteRateLimit.h>
#include <aws/mediaconvert/model/FileSourceConvert608To708.h>
#include <aws/mediaconvert/model/CaptionSourceConvertPaintOnToPopOn.h>
#include <aws/mediaconvert/model/CaptionSourceFramerate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/FileSourceTimeDeltaUnits.h>
#include <aws/mediaconvert/model/CaptionSourceUpconvertSTLToTeletext.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
   * xml file, specify the URI of the input caption source file. If your caption
   * source is IMSC in an IMF package, use TrackSourceSettings instead of
   * FileSoureSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FileSourceSettings">AWS
   * API Reference</a></p>
   */
  class FileSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API FileSourceSettings() = default;
    AWS_MEDIACONVERT_API FileSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FileSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose whether to limit the byte rate at which your SCC input captions are
     * inserted into your output. To not limit the caption rate: We recommend that you
     * keep the default value, Disabled. MediaConvert inserts captions in your output
     * according to the byte rates listed in the EIA-608 specification, typically 2 or
     * 3 caption bytes per frame depending on your output frame rate. To limit your
     * output caption rate: Choose Enabled. Choose this option if your downstream
     * systems require a maximum of 2 caption bytes per frame. Note that this setting
     * has no effect when your output frame rate is 30 or 60.
     */
    inline CaptionSourceByteRateLimit GetByteRateLimit() const { return m_byteRateLimit; }
    inline bool ByteRateLimitHasBeenSet() const { return m_byteRateLimitHasBeenSet; }
    inline void SetByteRateLimit(CaptionSourceByteRateLimit value) { m_byteRateLimitHasBeenSet = true; m_byteRateLimit = value; }
    inline FileSourceSettings& WithByteRateLimit(CaptionSourceByteRateLimit value) { SetByteRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert, MediaConvert includes the captions data
     * in two ways: it passes the 608 data through using the 608 compatibility bytes
     * fields of the 708 wrapper, and it also translates the 608 data into 708.
     */
    inline FileSourceConvert608To708 GetConvert608To708() const { return m_convert608To708; }
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }
    inline void SetConvert608To708(FileSourceConvert608To708 value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }
    inline FileSourceSettings& WithConvert608To708(FileSourceConvert608To708 value) { SetConvert608To708(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the presentation style of your input SCC captions. To use the same
     * presentation style as your input: Keep the default value, Disabled. To convert
     * paint-on captions to pop-on: Choose Enabled. We also recommend that you choose
     * Enabled if you notice additional repeated lines in your output captions.
     */
    inline CaptionSourceConvertPaintOnToPopOn GetConvertPaintToPop() const { return m_convertPaintToPop; }
    inline bool ConvertPaintToPopHasBeenSet() const { return m_convertPaintToPopHasBeenSet; }
    inline void SetConvertPaintToPop(CaptionSourceConvertPaintOnToPopOn value) { m_convertPaintToPopHasBeenSet = true; m_convertPaintToPop = value; }
    inline FileSourceSettings& WithConvertPaintToPop(CaptionSourceConvertPaintOnToPopOn value) { SetConvertPaintToPop(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. For example, you might specify 24 / 1 for 24 fps, 25 / 1 for 25 fps,
     * 24000 / 1001 for 23.976 fps, or 30000 / 1001 for 29.97 fps.
     */
    inline const CaptionSourceFramerate& GetFramerate() const { return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    template<typename FramerateT = CaptionSourceFramerate>
    void SetFramerate(FramerateT&& value) { m_framerateHasBeenSet = true; m_framerate = std::forward<FramerateT>(value); }
    template<typename FramerateT = CaptionSourceFramerate>
    FileSourceSettings& WithFramerate(FramerateT&& value) { SetFramerate(std::forward<FramerateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline const Aws::String& GetSourceFile() const { return m_sourceFile; }
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }
    template<typename SourceFileT = Aws::String>
    void SetSourceFile(SourceFileT&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::forward<SourceFileT>(value); }
    template<typename SourceFileT = Aws::String>
    FileSourceSettings& WithSourceFile(SourceFileT&& value) { SetSourceFile(std::forward<SourceFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use this setting when you need to adjust the sync between your sidecar
     * captions and your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/time-delta-use-cases.html.
     * Enter a positive or negative number to modify the times in the captions file.
     * For example, type 15 to add 15 seconds to all the times in the captions file.
     * Type -5 to subtract 5 seconds from the times in the captions file. You can
     * optionally specify your time delta in milliseconds instead of seconds. When you
     * do so, set the related setting, Time delta units to Milliseconds. Note that,
     * when you specify a time delta for timecode-based caption sources, such as SCC
     * and STL, and your time delta isn't a multiple of the input frame rate,
     * MediaConvert snaps the captions to the nearest frame. For example, when your
     * input video frame rate is 25 fps and you specify 1010ms for time delta,
     * MediaConvert delays your captions by 1000 ms.
     */
    inline int GetTimeDelta() const { return m_timeDelta; }
    inline bool TimeDeltaHasBeenSet() const { return m_timeDeltaHasBeenSet; }
    inline void SetTimeDelta(int value) { m_timeDeltaHasBeenSet = true; m_timeDelta = value; }
    inline FileSourceSettings& WithTimeDelta(int value) { SetTimeDelta(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the setting Time delta to adjust the sync between your sidecar
     * captions and your video, use this setting to specify the units for the delta
     * that you specify. When you don't specify a value for Time delta units,
     * MediaConvert uses seconds by default.
     */
    inline FileSourceTimeDeltaUnits GetTimeDeltaUnits() const { return m_timeDeltaUnits; }
    inline bool TimeDeltaUnitsHasBeenSet() const { return m_timeDeltaUnitsHasBeenSet; }
    inline void SetTimeDeltaUnits(FileSourceTimeDeltaUnits value) { m_timeDeltaUnitsHasBeenSet = true; m_timeDeltaUnits = value; }
    inline FileSourceSettings& WithTimeDeltaUnits(FileSourceTimeDeltaUnits value) { SetTimeDeltaUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether this set of input captions appears in your outputs in both STL
     * and Teletext format. If you choose Upconvert, MediaConvert includes the captions
     * data in two ways: it passes the STL data through using the Teletext
     * compatibility bytes fields of the Teletext wrapper, and it also translates the
     * STL data into Teletext.
     */
    inline CaptionSourceUpconvertSTLToTeletext GetUpconvertSTLToTeletext() const { return m_upconvertSTLToTeletext; }
    inline bool UpconvertSTLToTeletextHasBeenSet() const { return m_upconvertSTLToTeletextHasBeenSet; }
    inline void SetUpconvertSTLToTeletext(CaptionSourceUpconvertSTLToTeletext value) { m_upconvertSTLToTeletextHasBeenSet = true; m_upconvertSTLToTeletext = value; }
    inline FileSourceSettings& WithUpconvertSTLToTeletext(CaptionSourceUpconvertSTLToTeletext value) { SetUpconvertSTLToTeletext(value); return *this;}
    ///@}
  private:

    CaptionSourceByteRateLimit m_byteRateLimit{CaptionSourceByteRateLimit::NOT_SET};
    bool m_byteRateLimitHasBeenSet = false;

    FileSourceConvert608To708 m_convert608To708{FileSourceConvert608To708::NOT_SET};
    bool m_convert608To708HasBeenSet = false;

    CaptionSourceConvertPaintOnToPopOn m_convertPaintToPop{CaptionSourceConvertPaintOnToPopOn::NOT_SET};
    bool m_convertPaintToPopHasBeenSet = false;

    CaptionSourceFramerate m_framerate;
    bool m_framerateHasBeenSet = false;

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet = false;

    int m_timeDelta{0};
    bool m_timeDeltaHasBeenSet = false;

    FileSourceTimeDeltaUnits m_timeDeltaUnits{FileSourceTimeDeltaUnits::NOT_SET};
    bool m_timeDeltaUnitsHasBeenSet = false;

    CaptionSourceUpconvertSTLToTeletext m_upconvertSTLToTeletext{CaptionSourceUpconvertSTLToTeletext::NOT_SET};
    bool m_upconvertSTLToTeletextHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
