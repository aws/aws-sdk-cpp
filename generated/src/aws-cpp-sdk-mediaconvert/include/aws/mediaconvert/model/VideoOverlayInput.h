/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/VideoOverlayInputClipping.h>
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
   * Input settings for Video overlay. You can include one or more video overlays in
   * sequence at different times that you specify.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayInput">AWS
   * API Reference</a></p>
   */
  class VideoOverlayInput
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayInput();
    AWS_MEDIACONVERT_API VideoOverlayInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline const Aws::String& GetFileInput() const{ return m_fileInput; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline void SetFileInput(const Aws::String& value) { m_fileInputHasBeenSet = true; m_fileInput = value; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline void SetFileInput(Aws::String&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::move(value); }

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline void SetFileInput(const char* value) { m_fileInputHasBeenSet = true; m_fileInput.assign(value); }

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline VideoOverlayInput& WithFileInput(const Aws::String& value) { SetFileInput(value); return *this;}

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline VideoOverlayInput& WithFileInput(Aws::String&& value) { SetFileInput(std::move(value)); return *this;}

    /**
     * Specify the input file S3, HTTP, or HTTPS URI for your video overlay. For
     * consistency in color and formatting in your output video image, we recommend
     * that you specify a video with similar characteristics as the underlying input
     * video.
     */
    inline VideoOverlayInput& WithFileInput(const char* value) { SetFileInput(value); return *this;}


    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline const Aws::Vector<VideoOverlayInputClipping>& GetInputClippings() const{ return m_inputClippings; }

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline bool InputClippingsHasBeenSet() const { return m_inputClippingsHasBeenSet; }

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline void SetInputClippings(const Aws::Vector<VideoOverlayInputClipping>& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = value; }

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline void SetInputClippings(Aws::Vector<VideoOverlayInputClipping>&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = std::move(value); }

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline VideoOverlayInput& WithInputClippings(const Aws::Vector<VideoOverlayInputClipping>& value) { SetInputClippings(value); return *this;}

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline VideoOverlayInput& WithInputClippings(Aws::Vector<VideoOverlayInputClipping>&& value) { SetInputClippings(std::move(value)); return *this;}

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline VideoOverlayInput& AddInputClippings(const VideoOverlayInputClipping& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(value); return *this; }

    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline VideoOverlayInput& AddInputClippings(VideoOverlayInputClipping&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(std::move(value)); return *this; }


    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline const InputTimecodeSource& GetTimecodeSource() const{ return m_timecodeSource; }

    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline bool TimecodeSourceHasBeenSet() const { return m_timecodeSourceHasBeenSet; }

    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline void SetTimecodeSource(const InputTimecodeSource& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }

    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline void SetTimecodeSource(InputTimecodeSource&& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = std::move(value); }

    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline VideoOverlayInput& WithTimecodeSource(const InputTimecodeSource& value) { SetTimecodeSource(value); return *this;}

    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline VideoOverlayInput& WithTimecodeSource(InputTimecodeSource&& value) { SetTimecodeSource(std::move(value)); return *this;}


    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline const Aws::String& GetTimecodeStart() const{ return m_timecodeStart; }

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline bool TimecodeStartHasBeenSet() const { return m_timecodeStartHasBeenSet; }

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline void SetTimecodeStart(const Aws::String& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = value; }

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline void SetTimecodeStart(Aws::String&& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = std::move(value); }

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline void SetTimecodeStart(const char* value) { m_timecodeStartHasBeenSet = true; m_timecodeStart.assign(value); }

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline VideoOverlayInput& WithTimecodeStart(const Aws::String& value) { SetTimecodeStart(value); return *this;}

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline VideoOverlayInput& WithTimecodeStart(Aws::String&& value) { SetTimecodeStart(std::move(value)); return *this;}

    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline VideoOverlayInput& WithTimecodeStart(const char* value) { SetTimecodeStart(value); return *this;}

  private:

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet = false;

    Aws::Vector<VideoOverlayInputClipping> m_inputClippings;
    bool m_inputClippingsHasBeenSet = false;

    InputTimecodeSource m_timecodeSource;
    bool m_timecodeSourceHasBeenSet = false;

    Aws::String m_timecodeStart;
    bool m_timecodeStartHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
