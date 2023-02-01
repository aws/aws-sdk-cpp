/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/RequiredFlag.h>
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
   * Use Allowed renditions to specify a list of possible resolutions in your ABR
   * stack. * MediaConvert will create an ABR stack exclusively from the list of
   * resolutions that you specify. * Some resolutions in the Allowed renditions list
   * may not be included, however you can force a resolution to be included by
   * setting Required to ENABLED. * You must specify at least one resolution that is
   * greater than or equal to any resolutions that you specify in Min top rendition
   * size or Min bottom rendition size. * If you specify Allowed renditions, you must
   * not specify a separate rule for Force include renditions.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AllowedRenditionSize">AWS
   * API Reference</a></p>
   */
  class AllowedRenditionSize
  {
  public:
    AWS_MEDIACONVERT_API AllowedRenditionSize();
    AWS_MEDIACONVERT_API AllowedRenditionSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AllowedRenditionSize& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AllowedRenditionSize& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline const RequiredFlag& GetRequired() const{ return m_required; }

    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline void SetRequired(const RequiredFlag& value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline void SetRequired(RequiredFlag&& value) { m_requiredHasBeenSet = true; m_required = std::move(value); }

    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline AllowedRenditionSize& WithRequired(const RequiredFlag& value) { SetRequired(value); return *this;}

    /**
     * Set to ENABLED to force a rendition to be included.
     */
    inline AllowedRenditionSize& WithRequired(RequiredFlag&& value) { SetRequired(std::move(value)); return *this;}


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
    inline AllowedRenditionSize& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    int m_height;
    bool m_heightHasBeenSet = false;

    RequiredFlag m_required;
    bool m_requiredHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
