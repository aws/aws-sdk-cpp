/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
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
   * Settings for the action to activate a static image.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticImageActivateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class StaticImageActivateScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API StaticImageActivateScheduleActionSettings() = default;
    AWS_MEDIALIVE_API StaticImageActivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StaticImageActivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The duration in milliseconds for the image to remain on the video. If omitted or
     * set to 0 the duration is unlimited and the image will remain until it is
     * explicitly deactivated.
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline StaticImageActivateScheduleActionSettings& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The time in milliseconds for the image to fade in. The fade-in starts at the
     * start time of the overlay. Default is 0 (no fade-in).
     */
    inline int GetFadeIn() const { return m_fadeIn; }
    inline bool FadeInHasBeenSet() const { return m_fadeInHasBeenSet; }
    inline void SetFadeIn(int value) { m_fadeInHasBeenSet = true; m_fadeIn = value; }
    inline StaticImageActivateScheduleActionSettings& WithFadeIn(int value) { SetFadeIn(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if a duration is specified. The time in milliseconds for the image
     * to fade out. The fade-out starts when the duration time is hit, so it
     * effectively extends the duration. Default is 0 (no fade-out).
     */
    inline int GetFadeOut() const { return m_fadeOut; }
    inline bool FadeOutHasBeenSet() const { return m_fadeOutHasBeenSet; }
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }
    inline StaticImageActivateScheduleActionSettings& WithFadeOut(int value) { SetFadeOut(value); return *this;}
    ///@}

    ///@{
    /**
     * The height of the image when inserted into the video, in pixels. The overlay
     * will be scaled up or down to the specified height. Leave blank to use the native
     * height of the overlay.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline StaticImageActivateScheduleActionSettings& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * The location and filename of the image file to overlay on the video. The file
     * must be a 32-bit BMP, PNG, or TGA file, and must not be larger (in pixels) than
     * the input video.
     */
    inline const InputLocation& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = InputLocation>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = InputLocation>
    StaticImageActivateScheduleActionSettings& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Placement of the left edge of the overlay relative to the left edge of the video
     * frame, in pixels. 0 (the default) is the left edge of the frame. If the
     * placement causes the overlay to extend beyond the right edge of the underlying
     * video, then the overlay is cropped on the right.
     */
    inline int GetImageX() const { return m_imageX; }
    inline bool ImageXHasBeenSet() const { return m_imageXHasBeenSet; }
    inline void SetImageX(int value) { m_imageXHasBeenSet = true; m_imageX = value; }
    inline StaticImageActivateScheduleActionSettings& WithImageX(int value) { SetImageX(value); return *this;}
    ///@}

    ///@{
    /**
     * Placement of the top edge of the overlay relative to the top edge of the video
     * frame, in pixels. 0 (the default) is the top edge of the frame. If the placement
     * causes the overlay to extend beyond the bottom edge of the underlying video,
     * then the overlay is cropped on the bottom.
     */
    inline int GetImageY() const { return m_imageY; }
    inline bool ImageYHasBeenSet() const { return m_imageYHasBeenSet; }
    inline void SetImageY(int value) { m_imageYHasBeenSet = true; m_imageY = value; }
    inline StaticImageActivateScheduleActionSettings& WithImageY(int value) { SetImageY(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of the layer, 0 to 7. There are 8 layers that can be overlaid on the
     * video, each layer with a different image. The layers are in Z order, which means
     * that overlays with higher values of layer are inserted on top of overlays with
     * lower values of layer. Default is 0.
     */
    inline int GetLayer() const { return m_layer; }
    inline bool LayerHasBeenSet() const { return m_layerHasBeenSet; }
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }
    inline StaticImageActivateScheduleActionSettings& WithLayer(int value) { SetLayer(value); return *this;}
    ///@}

    ///@{
    /**
     * Opacity of image where 0 is transparent and 100 is fully opaque. Default is 100.
     */
    inline int GetOpacity() const { return m_opacity; }
    inline bool OpacityHasBeenSet() const { return m_opacityHasBeenSet; }
    inline void SetOpacity(int value) { m_opacityHasBeenSet = true; m_opacity = value; }
    inline StaticImageActivateScheduleActionSettings& WithOpacity(int value) { SetOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * The width of the image when inserted into the video, in pixels. The overlay will
     * be scaled up or down to the specified width. Leave blank to use the native width
     * of the overlay.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline StaticImageActivateScheduleActionSettings& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}
  private:

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_fadeIn{0};
    bool m_fadeInHasBeenSet = false;

    int m_fadeOut{0};
    bool m_fadeOutHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    InputLocation m_image;
    bool m_imageHasBeenSet = false;

    int m_imageX{0};
    bool m_imageXHasBeenSet = false;

    int m_imageY{0};
    bool m_imageYHasBeenSet = false;

    int m_layer{0};
    bool m_layerHasBeenSet = false;

    int m_opacity{0};
    bool m_opacityHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
