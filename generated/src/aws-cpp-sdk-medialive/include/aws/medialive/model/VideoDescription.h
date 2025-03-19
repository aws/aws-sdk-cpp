/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/VideoCodecSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/VideoDescriptionRespondToAfd.h>
#include <aws/medialive/model/VideoDescriptionScalingBehavior.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Video settings for this stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoDescription">AWS
   * API Reference</a></p>
   */
  class VideoDescription
  {
  public:
    AWS_MEDIALIVE_API VideoDescription() = default;
    AWS_MEDIALIVE_API VideoDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Video codec settings.
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
     * Output video height, in pixels. Must be an even number. For most codecs, you can
     * leave this field and width blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline VideoDescription& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VideoDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates how MediaLive will respond to the AFD values that might be in the
     * input video. If you do not know what AFD signaling is, or if your downstream
     * system has not given you guidance, choose PASSTHROUGH.
RESPOND: MediaLive clips
     * the input video using a formula that uses the AFD values (configured in
     * afdSignaling ), the input display aspect ratio, and the output display aspect
     * ratio. MediaLive also includes the AFD values in the output, unless the codec
     * for this encode is FRAME_CAPTURE.
PASSTHROUGH: MediaLive ignores the AFD values
     * and does not clip the video. But MediaLive does include the values in the
     * output.
NONE: MediaLive does not clip the input video and does not include the
     * AFD values in the output
     */
    inline VideoDescriptionRespondToAfd GetRespondToAfd() const { return m_respondToAfd; }
    inline bool RespondToAfdHasBeenSet() const { return m_respondToAfdHasBeenSet; }
    inline void SetRespondToAfd(VideoDescriptionRespondToAfd value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = value; }
    inline VideoDescription& WithRespondToAfd(VideoDescriptionRespondToAfd value) { SetRespondToAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * STRETCH_TO_OUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline VideoDescriptionScalingBehavior GetScalingBehavior() const { return m_scalingBehavior; }
    inline bool ScalingBehaviorHasBeenSet() const { return m_scalingBehaviorHasBeenSet; }
    inline void SetScalingBehavior(VideoDescriptionScalingBehavior value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = value; }
    inline VideoDescription& WithScalingBehavior(VideoDescriptionScalingBehavior value) { SetScalingBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Changes the strength of the anti-alias filter used for scaling. 0 is the softest
     * setting, 100 is the sharpest. A setting of 50 is recommended for most content.
     */
    inline int GetSharpness() const { return m_sharpness; }
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }
    inline void SetSharpness(int value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }
    inline VideoDescription& WithSharpness(int value) { SetSharpness(value); return *this;}
    ///@}

    ///@{
    /**
     * Output video width, in pixels. Must be an even number. For most codecs, you can
     * leave this field and height blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline VideoDescription& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}
  private:

    VideoCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VideoDescriptionRespondToAfd m_respondToAfd{VideoDescriptionRespondToAfd::NOT_SET};
    bool m_respondToAfdHasBeenSet = false;

    VideoDescriptionScalingBehavior m_scalingBehavior{VideoDescriptionScalingBehavior::NOT_SET};
    bool m_scalingBehaviorHasBeenSet = false;

    int m_sharpness{0};
    bool m_sharpnessHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
