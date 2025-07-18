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
   * Specify a rectangle of content to crop and use from your video overlay's input
   * video. When you do, MediaConvert uses the cropped dimensions that you specify
   * under X offset, Y offset, Width, and Height.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayCrop">AWS
   * API Reference</a></p>
   */
  class VideoOverlayCrop
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayCrop() = default;
    AWS_MEDIACONVERT_API VideoOverlayCrop(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayCrop& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the height of the video overlay cropping rectangle. To use the same
     * height as your overlay input video: Keep blank, or enter 0. To specify a
     * different height for the cropping rectangle: Enter an integer representing the
     * Unit type that you choose, either Pixels or Percentage. For example, when you
     * enter 100 and choose Pixels, the cropping rectangle will be 100 pixels high.
     * When you enter 10, choose Percentage, and your overlay input video is 1920x1080,
     * the cropping rectangle will be 108 pixels high.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline VideoOverlayCrop& WithHeight(int value) { SetHeight(value); return *this;}
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
    inline VideoOverlayCrop& WithUnit(VideoOverlayUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the width of the video overlay cropping rectangle. To use the same width
     * as your overlay input video: Keep blank, or enter 0. To specify a different
     * width for the cropping rectangle: Enter an integer representing the Unit type
     * that you choose, either Pixels or Percentage. For example, when you enter 100
     * and choose Pixels, the cropping rectangle will be 100 pixels wide. When you
     * enter 10, choose Percentage, and your overlay input video is 1920x1080, the
     * cropping rectangle will be 192 pixels wide.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline VideoOverlayCrop& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the distance between the cropping rectangle and the left edge of your
     * overlay video's frame. To position the cropping rectangle along the left edge:
     * Keep blank, or enter 0. To position the cropping rectangle to the right,
     * relative to the left edge of your overlay video's frame: Enter an integer
     * representing the Unit type that you choose, either Pixels or Percentage. For
     * example, when you enter 10 and choose Pixels, the cropping rectangle will be
     * positioned 10 pixels from the left edge of the overlay video's frame. When you
     * enter 10, choose Percentage, and your overlay input video is 1920x1080, the
     * cropping rectangle will be positioned 192 pixels from the left edge of the
     * overlay video's frame.
     */
    inline int GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }
    inline VideoOverlayCrop& WithX(int value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the distance between the cropping rectangle and the top edge of your
     * overlay video's frame. To position the cropping rectangle along the top edge:
     * Keep blank, or enter 0. To position the cropping rectangle down, relative to the
     * top edge of your overlay video's frame: Enter an integer representing the Unit
     * type that you choose, either Pixels or Percentage. For example, when you enter
     * 10 and choose Pixels, the cropping rectangle will be positioned 10 pixels from
     * the top edge of the overlay video's frame. When you enter 10, choose Percentage,
     * and your overlay input video is 1920x1080, the cropping rectangle will be
     * positioned 108 pixels from the top edge of the overlay video's frame.
     */
    inline int GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }
    inline VideoOverlayCrop& WithY(int value) { SetY(value); return *this;}
    ///@}
  private:

    int m_height{0};
    bool m_heightHasBeenSet = false;

    VideoOverlayUnit m_unit{VideoOverlayUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_x{0};
    bool m_xHasBeenSet = false;

    int m_y{0};
    bool m_yHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
