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
   * Use Min top rendition size to specify a minimum size for the highest resolution
   * in your ABR stack. * The highest resolution in your ABR stack will be equal to
   * or greater than the value that you enter. For example: If you specify 1280x720
   * the highest resolution in your ABR stack will be equal to or greater than
   * 1280x720. * If you specify a value for Max resolution, the value that you
   * specify for Min top rendition size must be less than, or equal to, Max
   * resolution.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MinTopRenditionSize">AWS
   * API Reference</a></p>
   */
  class MinTopRenditionSize
  {
  public:
    AWS_MEDIACONVERT_API MinTopRenditionSize() = default;
    AWS_MEDIACONVERT_API MinTopRenditionSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MinTopRenditionSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use Height to define the video resolution height, in pixels, for this rule.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline MinTopRenditionSize& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Width to define the video resolution width, in pixels, for this rule.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline MinTopRenditionSize& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}
  private:

    int m_height{0};
    bool m_heightHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
