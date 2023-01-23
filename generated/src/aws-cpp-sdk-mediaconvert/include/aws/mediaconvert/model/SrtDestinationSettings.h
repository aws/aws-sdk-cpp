/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/SrtStylePassthrough.h>
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
   * Settings related to SRT captions. SRT is a sidecar format that holds captions in
   * a file that is separate from the video container. Set up sidecar captions in the
   * same output group, but different output from your video. When you work directly
   * in your JSON job specification, include this object and any required children
   * when you set destinationType to SRT.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SrtDestinationSettings">AWS
   * API Reference</a></p>
   */
  class SrtDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API SrtDestinationSettings();
    AWS_MEDIACONVERT_API SrtDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API SrtDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline const SrtStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline void SetStylePassthrough(const SrtStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline void SetStylePassthrough(SrtStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline SrtDestinationSettings& WithStylePassthrough(const SrtStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline SrtDestinationSettings& WithStylePassthrough(SrtStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    SrtStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
