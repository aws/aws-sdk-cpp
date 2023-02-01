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
   * Use Force include renditions to specify one or more resolutions to include your
   * ABR stack. * (Recommended) To optimize automated ABR, specify as few resolutions
   * as possible. * (Required) The number of resolutions that you specify must be
   * equal to, or less than, the Max renditions setting. * If you specify a Min top
   * rendition size rule, specify at least one resolution that is equal to, or
   * greater than, Min top rendition size. * If you specify a Min bottom rendition
   * size rule, only specify resolutions that are equal to, or greater than, Min
   * bottom rendition size. * If you specify a Force include renditions rule, do not
   * specify a separate rule for Allowed renditions. * Note: The ABR stack may
   * include other resolutions that you do not specify here, depending on the Max
   * renditions setting.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ForceIncludeRenditionSize">AWS
   * API Reference</a></p>
   */
  class ForceIncludeRenditionSize
  {
  public:
    AWS_MEDIACONVERT_API ForceIncludeRenditionSize();
    AWS_MEDIACONVERT_API ForceIncludeRenditionSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ForceIncludeRenditionSize& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ForceIncludeRenditionSize& WithHeight(int value) { SetHeight(value); return *this;}


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
    inline ForceIncludeRenditionSize& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    int m_height;
    bool m_heightHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
