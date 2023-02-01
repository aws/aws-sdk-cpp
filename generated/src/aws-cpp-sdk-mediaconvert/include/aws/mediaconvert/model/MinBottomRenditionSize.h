/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Use Min bottom rendition size to specify a minimum size for the lowest
   * resolution in your ABR stack. * The lowest resolution in your ABR stack will be
   * equal to or greater than the value that you enter. For example: If you specify
   * 640x360 the lowest resolution in your ABR stack will be equal to or greater than
   * to 640x360. * If you specify a Min top rendition size rule, the value that you
   * specify for Min bottom rendition size must be less than, or equal to, Min top
   * rendition size.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MinBottomRenditionSize">AWS
   * API Reference</a></p>
   */
  class MinBottomRenditionSize
  {
  public:
    AWS_MEDIACONVERT_API MinBottomRenditionSize();
    AWS_MEDIACONVERT_API MinBottomRenditionSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MinBottomRenditionSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Height to define the video resolution height, in pixels, for this rule.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Use Height to define the video resolution height, in pixels, for this rule.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * Use Height to define the video resolution height, in pixels, for this rule.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Use Height to define the video resolution height, in pixels, for this rule.
     */
    inline MinBottomRenditionSize& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Use Width to define the video resolution width, in pixels, for this rule.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Use Width to define the video resolution width, in pixels, for this rule.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * Use Width to define the video resolution width, in pixels, for this rule.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Use Width to define the video resolution width, in pixels, for this rule.
     */
    inline MinBottomRenditionSize& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    int m_height;
    bool m_heightHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
