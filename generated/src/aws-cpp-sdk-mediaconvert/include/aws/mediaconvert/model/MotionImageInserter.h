/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MotionImageInsertionFramerate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/MotionImageInsertionMode.h>
#include <aws/mediaconvert/model/MotionImageInsertionOffset.h>
#include <aws/mediaconvert/model/MotionImagePlayback.h>
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
   * Overlay motion graphics on top of your video. The motion graphics that you
   * specify here appear on all outputs in all output groups. For more information,
   * see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MotionImageInserter">AWS
   * API Reference</a></p>
   */
  class MotionImageInserter
  {
  public:
    AWS_MEDIACONVERT_API MotionImageInserter() = default;
    AWS_MEDIACONVERT_API MotionImageInserter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MotionImageInserter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline const MotionImageInsertionFramerate& GetFramerate() const { return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    template<typename FramerateT = MotionImageInsertionFramerate>
    void SetFramerate(FramerateT&& value) { m_framerateHasBeenSet = true; m_framerate = std::forward<FramerateT>(value); }
    template<typename FramerateT = MotionImageInsertionFramerate>
    MotionImageInserter& WithFramerate(FramerateT&& value) { SetFramerate(std::forward<FramerateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    MotionImageInserter& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline MotionImageInsertionMode GetInsertionMode() const { return m_insertionMode; }
    inline bool InsertionModeHasBeenSet() const { return m_insertionModeHasBeenSet; }
    inline void SetInsertionMode(MotionImageInsertionMode value) { m_insertionModeHasBeenSet = true; m_insertionMode = value; }
    inline MotionImageInserter& WithInsertionMode(MotionImageInsertionMode value) { SetInsertionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline const MotionImageInsertionOffset& GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    template<typename OffsetT = MotionImageInsertionOffset>
    void SetOffset(OffsetT&& value) { m_offsetHasBeenSet = true; m_offset = std::forward<OffsetT>(value); }
    template<typename OffsetT = MotionImageInsertionOffset>
    MotionImageInserter& WithOffset(OffsetT&& value) { SetOffset(std::forward<OffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline MotionImagePlayback GetPlayback() const { return m_playback; }
    inline bool PlaybackHasBeenSet() const { return m_playbackHasBeenSet; }
    inline void SetPlayback(MotionImagePlayback value) { m_playbackHasBeenSet = true; m_playback = value; }
    inline MotionImageInserter& WithPlayback(MotionImagePlayback value) { SetPlayback(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    MotionImageInserter& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    MotionImageInsertionFramerate m_framerate;
    bool m_framerateHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    MotionImageInsertionMode m_insertionMode{MotionImageInsertionMode::NOT_SET};
    bool m_insertionModeHasBeenSet = false;

    MotionImageInsertionOffset m_offset;
    bool m_offsetHasBeenSet = false;

    MotionImagePlayback m_playback{MotionImagePlayback::NOT_SET};
    bool m_playbackHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
