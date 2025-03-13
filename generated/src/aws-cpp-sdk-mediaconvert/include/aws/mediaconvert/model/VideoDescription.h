/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AfdSignaling.h>
#include <aws/mediaconvert/model/AntiAlias.h>
#include <aws/mediaconvert/model/ChromaPositionMode.h>
#include <aws/mediaconvert/model/VideoCodecSettings.h>
#include <aws/mediaconvert/model/ColorMetadata.h>
#include <aws/mediaconvert/model/Rectangle.h>
#include <aws/mediaconvert/model/DropFrameTimecode.h>
#include <aws/mediaconvert/model/RespondToAfd.h>
#include <aws/mediaconvert/model/ScalingBehavior.h>
#include <aws/mediaconvert/model/VideoTimecodeInsertion.h>
#include <aws/mediaconvert/model/TimecodeTrack.h>
#include <aws/mediaconvert/model/VideoPreprocessor.h>
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
   * Settings related to video encoding of your output. The specific video settings
   * depend on the video codec that you choose.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoDescription">AWS
   * API Reference</a></p>
   */
  class VideoDescription
  {
  public:
    AWS_MEDIACONVERT_API VideoDescription() = default;
    AWS_MEDIACONVERT_API VideoDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling to specify whether the service includes AFD values in the output video
     * data and what those values are. * Choose None to remove all AFD values from this
     * output. * Choose Fixed to ignore input AFD values and instead encode the value
     * specified in the job. * Choose Auto to calculate output AFD values based on the
     * input AFD scaler data.
     */
    inline AfdSignaling GetAfdSignaling() const { return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(AfdSignaling value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline VideoDescription& WithAfdSignaling(AfdSignaling value) { SetAfdSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline AntiAlias GetAntiAlias() const { return m_antiAlias; }
    inline bool AntiAliasHasBeenSet() const { return m_antiAliasHasBeenSet; }
    inline void SetAntiAlias(AntiAlias value) { m_antiAliasHasBeenSet = true; m_antiAlias = value; }
    inline VideoDescription& WithAntiAlias(AntiAlias value) { SetAntiAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the chroma sample positioning metadata for your H.264 or H.265 output.
     * To have MediaConvert automatically determine chroma positioning: We recommend
     * that you keep the default value, Auto. To specify center positioning: Choose
     * Force center. To specify top left positioning: Choose Force top left.
     */
    inline ChromaPositionMode GetChromaPositionMode() const { return m_chromaPositionMode; }
    inline bool ChromaPositionModeHasBeenSet() const { return m_chromaPositionModeHasBeenSet; }
    inline void SetChromaPositionMode(ChromaPositionMode value) { m_chromaPositionModeHasBeenSet = true; m_chromaPositionMode = value; }
    inline VideoDescription& WithChromaPositionMode(ChromaPositionMode value) { SetChromaPositionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Video codec settings contains the group of settings related to video encoding.
     * The settings in this group vary depending on the value that you choose for Video
     * codec. For each codec enum that you choose, define the corresponding settings
     * object. The following lists the codec enum, settings object pairs. * AV1,
     * Av1Settings * AVC_INTRA, AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings
     * * GIF, GifSettings * H_264, H264Settings * H_265, H265Settings * MPEG2,
     * Mpeg2Settings * PRORES, ProresSettings * UNCOMPRESSED, UncompressedSettings *
     * VC3, Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline const VideoCodecSettings& GetCodecSettings() const { return m_codecSettings; }
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }
    template<typename CodecSettingsT = VideoCodecSettings>
    void SetCodecSettings(CodecSettingsT&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::forward<CodecSettingsT>(value); }
    template<typename CodecSettingsT = VideoCodecSettings>
    VideoDescription& WithCodecSettings(CodecSettingsT&& value) { SetCodecSettings(std::forward<CodecSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choose Insert for this setting to include color metadata in this output. Choose
     * Ignore to exclude color metadata from this output. If you don't specify a value,
     * the service sets this to Insert by default.
     */
    inline ColorMetadata GetColorMetadata() const { return m_colorMetadata; }
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }
    inline void SetColorMetadata(ColorMetadata value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }
    inline VideoDescription& WithColorMetadata(ColorMetadata value) { SetColorMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Cropping selection to specify the video area that the service will include
     * in the output video frame.
     */
    inline const Rectangle& GetCrop() const { return m_crop; }
    inline bool CropHasBeenSet() const { return m_cropHasBeenSet; }
    template<typename CropT = Rectangle>
    void SetCrop(CropT&& value) { m_cropHasBeenSet = true; m_crop = std::forward<CropT>(value); }
    template<typename CropT = Rectangle>
    VideoDescription& WithCrop(CropT&& value) { SetCrop(std::forward<CropT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion or Timecode track is enabled.
     */
    inline DropFrameTimecode GetDropFrameTimecode() const { return m_dropFrameTimecode; }
    inline bool DropFrameTimecodeHasBeenSet() const { return m_dropFrameTimecodeHasBeenSet; }
    inline void SetDropFrameTimecode(DropFrameTimecode value) { m_dropFrameTimecodeHasBeenSet = true; m_dropFrameTimecode = value; }
    inline VideoDescription& WithDropFrameTimecode(DropFrameTimecode value) { SetDropFrameTimecode(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if you set AFD Signaling to Fixed. Use Fixed to specify a four-bit
     * AFD value which the service will write on all frames of this video output.
     */
    inline int GetFixedAfd() const { return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(int value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline VideoDescription& WithFixedAfd(int value) { SetFixedAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Height to define the video resolution height, in pixels, for this output. To
     * use the same resolution as your input: Leave both Width and Height blank. To
     * evenly scale from your input resolution: Leave Height blank and enter a value
     * for Width. For example, if your input is 1920x1080 and you set Width to 1280,
     * your output will be 1280x720.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline VideoDescription& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Selection placement to define the video area in your output frame. The area
     * outside of the rectangle that you specify here is black.
     */
    inline const Rectangle& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Rectangle>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Rectangle>
    VideoDescription& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Respond to AFD to specify how the service changes the video itself in
     * response to AFD values in the input. * Choose Respond to clip the input video
     * frame according to the AFD value, input display aspect ratio, and output display
     * aspect ratio. * Choose Passthrough to include the input AFD values. Do not
     * choose this when AfdSignaling is set to NONE. A preferred implementation of this
     * workflow is to set RespondToAfd to and set AfdSignaling to AUTO. * Choose None
     * to remove all input AFD values from this output.
     */
    inline RespondToAfd GetRespondToAfd() const { return m_respondToAfd; }
    inline bool RespondToAfdHasBeenSet() const { return m_respondToAfdHasBeenSet; }
    inline void SetRespondToAfd(RespondToAfd value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = value; }
    inline VideoDescription& WithRespondToAfd(RespondToAfd value) { SetRespondToAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the video Scaling behavior when your output has a different resolution
     * than your input. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-scaling.html
     */
    inline ScalingBehavior GetScalingBehavior() const { return m_scalingBehavior; }
    inline bool ScalingBehaviorHasBeenSet() const { return m_scalingBehaviorHasBeenSet; }
    inline void SetScalingBehavior(ScalingBehavior value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = value; }
    inline VideoDescription& WithScalingBehavior(ScalingBehavior value) { SetScalingBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Sharpness setting to specify the strength of anti-aliasing. This setting
     * changes the width of the anti-alias filter kernel used for scaling. Sharpness
     * only applies if your output resolution is different from your input resolution.
     * 0 is the softest setting, 100 the sharpest, and 50 recommended for most content.
     */
    inline int GetSharpness() const { return m_sharpness; }
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }
    inline void SetSharpness(int value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }
    inline VideoDescription& WithSharpness(int value) { SetSharpness(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion to PIC_TIMING_SEI. To
     * leave them out, set it to DISABLED. Default is DISABLED. When the service
     * inserts timecodes in an output, by default, it uses any embedded timecodes from
     * the input. If none are present, the service will set the timecode for the first
     * output frame to zero. To change this default behavior, adjust the settings under
     * Timecode configuration. In the console, these settings are located under Job >
     * Job settings > Timecode configuration. Note - Timecode source under input
     * settings does not affect the timecodes that are inserted in the output. Source
     * under Job settings > Timecode configuration does.
     */
    inline VideoTimecodeInsertion GetTimecodeInsertion() const { return m_timecodeInsertion; }
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }
    inline void SetTimecodeInsertion(VideoTimecodeInsertion value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }
    inline VideoDescription& WithTimecodeInsertion(VideoTimecodeInsertion value) { SetTimecodeInsertion(value); return *this;}
    ///@}

    ///@{
    /**
     * To include a timecode track in your MP4 output: Choose Enabled. MediaConvert
     * writes the timecode track in the Null Media Header box (NMHD), without any
     * timecode text formatting information. You can also specify dropframe or
     * non-dropframe timecode under the Drop Frame Timecode setting. To not include a
     * timecode track: Keep the default value, Disabled.
     */
    inline TimecodeTrack GetTimecodeTrack() const { return m_timecodeTrack; }
    inline bool TimecodeTrackHasBeenSet() const { return m_timecodeTrackHasBeenSet; }
    inline void SetTimecodeTrack(TimecodeTrack value) { m_timecodeTrackHasBeenSet = true; m_timecodeTrack = value; }
    inline VideoDescription& WithTimecodeTrack(TimecodeTrack value) { SetTimecodeTrack(value); return *this;}
    ///@}

    ///@{
    /**
     * Find additional transcoding features under Preprocessors. Enable the features at
     * each output individually. These features are disabled by default.
     */
    inline const VideoPreprocessor& GetVideoPreprocessors() const { return m_videoPreprocessors; }
    inline bool VideoPreprocessorsHasBeenSet() const { return m_videoPreprocessorsHasBeenSet; }
    template<typename VideoPreprocessorsT = VideoPreprocessor>
    void SetVideoPreprocessors(VideoPreprocessorsT&& value) { m_videoPreprocessorsHasBeenSet = true; m_videoPreprocessors = std::forward<VideoPreprocessorsT>(value); }
    template<typename VideoPreprocessorsT = VideoPreprocessor>
    VideoDescription& WithVideoPreprocessors(VideoPreprocessorsT&& value) { SetVideoPreprocessors(std::forward<VideoPreprocessorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Width to define the video resolution width, in pixels, for this output. To
     * use the same resolution as your input: Leave both Width and Height blank. To
     * evenly scale from your input resolution: Leave Width blank and enter a value for
     * Height. For example, if your input is 1920x1080 and you set Height to 720, your
     * output will be 1280x720.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline VideoDescription& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}
  private:

    AfdSignaling m_afdSignaling{AfdSignaling::NOT_SET};
    bool m_afdSignalingHasBeenSet = false;

    AntiAlias m_antiAlias{AntiAlias::NOT_SET};
    bool m_antiAliasHasBeenSet = false;

    ChromaPositionMode m_chromaPositionMode{ChromaPositionMode::NOT_SET};
    bool m_chromaPositionModeHasBeenSet = false;

    VideoCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet = false;

    ColorMetadata m_colorMetadata{ColorMetadata::NOT_SET};
    bool m_colorMetadataHasBeenSet = false;

    Rectangle m_crop;
    bool m_cropHasBeenSet = false;

    DropFrameTimecode m_dropFrameTimecode{DropFrameTimecode::NOT_SET};
    bool m_dropFrameTimecodeHasBeenSet = false;

    int m_fixedAfd{0};
    bool m_fixedAfdHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    Rectangle m_position;
    bool m_positionHasBeenSet = false;

    RespondToAfd m_respondToAfd{RespondToAfd::NOT_SET};
    bool m_respondToAfdHasBeenSet = false;

    ScalingBehavior m_scalingBehavior{ScalingBehavior::NOT_SET};
    bool m_scalingBehaviorHasBeenSet = false;

    int m_sharpness{0};
    bool m_sharpnessHasBeenSet = false;

    VideoTimecodeInsertion m_timecodeInsertion{VideoTimecodeInsertion::NOT_SET};
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeTrack m_timecodeTrack{TimecodeTrack::NOT_SET};
    bool m_timecodeTrackHasBeenSet = false;

    VideoPreprocessor m_videoPreprocessors;
    bool m_videoPreprocessorsHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
