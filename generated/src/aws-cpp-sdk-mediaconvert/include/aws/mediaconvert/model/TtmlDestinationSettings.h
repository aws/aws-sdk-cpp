/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/TtmlStylePassthrough.h>
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
   * Settings related to TTML captions. TTML is a sidecar format that holds captions
   * in a file that is separate from the video container. Set up sidecar captions in
   * the same output group, but different output from your video. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TtmlDestinationSettings">AWS
   * API Reference</a></p>
   */
  class TtmlDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API TtmlDestinationSettings() = default;
    AWS_MEDIACONVERT_API TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * IMSC, SMPTE-TT) to the TTML output.
     */
    inline TtmlStylePassthrough GetStylePassthrough() const { return m_stylePassthrough; }
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }
    inline void SetStylePassthrough(TtmlStylePassthrough value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }
    inline TtmlDestinationSettings& WithStylePassthrough(TtmlStylePassthrough value) { SetStylePassthrough(value); return *this;}
    ///@}
  private:

    TtmlStylePassthrough m_stylePassthrough{TtmlStylePassthrough::NOT_SET};
    bool m_stylePassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
