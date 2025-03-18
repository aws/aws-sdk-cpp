/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoOverlayUnit.h>
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
   * position of video overlay<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayPosition">AWS
   * API Reference</a></p>
   */
  class VideoOverlayPosition
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayPosition() = default;
    AWS_MEDIACONVERT_API VideoOverlayPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * To scale your video overlay to the same height as the base input video: Leave
     * blank. To scale the height of your video overlay to a different height: Enter an
     * integer representing the Unit type that you choose, either Pixels or Percentage.
     * For example, when you enter 360 and choose Pixels, your video overlay will be
     * rendered with a height of 360. When you enter 50, choose Percentage, and your
     * overlay's source has a height of 1080, your video overlay will be rendered with
     * a height of 540. To scale your overlay to a specific height while automatically
     * maintaining its original aspect ratio, enter a value for Height and leave Width
     * blank.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline VideoOverlayPosition& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Unit type to use when you enter a value for X position, Y position,
     * Width, or Height. You can choose Pixels or Percentage. Leave blank to use the
     * default value, Pixels.
     */
    inline VideoOverlayUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(VideoOverlayUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline VideoOverlayPosition& WithUnit(VideoOverlayUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * To scale your video overlay to the same width as the base input video: Leave
     * blank. To scale the width of your video overlay to a different width: Enter an
     * integer representing the Unit type that you choose, either Pixels or Percentage.
     * For example, when you enter 640 and choose Pixels, your video overlay will scale
     * to a height of 640 pixels. When you enter 50, choose Percentage, and your
     * overlay's source has a width of 1920, your video overlay will scale to a width
     * of 960. To scale your overlay to a specific width while automatically
     * maintaining its original aspect ratio, enter a value for Width and leave Height
     * blank.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline VideoOverlayPosition& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * To position the left edge of your video overlay along the left edge of the base
     * input video's frame: Keep blank, or enter 0. To position the left edge of your
     * video overlay to the right, relative to the left edge of the base input video's
     * frame: Enter an integer representing the Unit type that you choose, either
     * Pixels or Percentage. For example, when you enter 10 and choose Pixels, your
     * video overlay will be positioned 10 pixels from the left edge of the base input
     * video's frame. When you enter 10, choose Percentage, and your base input video
     * is 1920x1080, your video overlay will be positioned 192 pixels from the left
     * edge of the base input video's frame.
     */
    inline int GetXPosition() const { return m_xPosition; }
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }
    inline VideoOverlayPosition& WithXPosition(int value) { SetXPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * To position the top edge of your video overlay along the top edge of the base
     * input video's frame: Keep blank, or enter 0. To position the top edge of your
     * video overlay down, relative to the top edge of the base input video's frame:
     * Enter an integer representing the Unit type that you choose, either Pixels or
     * Percentage. For example, when you enter 10 and choose Pixels, your video overlay
     * will be positioned 10 pixels from the top edge of the base input video's frame.
     * When you enter 10, choose Percentage, and your underlying video is 1920x1080,
     * your video overlay will be positioned 108 pixels from the top edge of the base
     * input video's frame.
     */
    inline int GetYPosition() const { return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline VideoOverlayPosition& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}
  private:

    int m_height{0};
    bool m_heightHasBeenSet = false;

    VideoOverlayUnit m_unit{VideoOverlayUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_xPosition{0};
    bool m_xPositionHasBeenSet = false;

    int m_yPosition{0};
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
