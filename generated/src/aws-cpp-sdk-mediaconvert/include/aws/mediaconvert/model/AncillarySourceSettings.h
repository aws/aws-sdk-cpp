/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AncillaryConvert608To708.h>
#include <aws/mediaconvert/model/AncillaryTerminateCaptions.h>
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
   * Settings for ancillary captions source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AncillarySourceSettings">AWS
   * API Reference</a></p>
   */
  class AncillarySourceSettings
  {
  public:
    AWS_MEDIACONVERT_API AncillarySourceSettings() = default;
    AWS_MEDIACONVERT_API AncillarySourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AncillarySourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert, MediaConvert includes the captions data
     * in two ways: it passes the 608 data through using the 608 compatibility bytes
     * fields of the 708 wrapper, and it also translates the 608 data into 708.
     */
    inline AncillaryConvert608To708 GetConvert608To708() const { return m_convert608To708; }
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }
    inline void SetConvert608To708(AncillaryConvert608To708 value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }
    inline AncillarySourceSettings& WithConvert608To708(AncillaryConvert608To708 value) { SetConvert608To708(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the 608 channel number in the ancillary data track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSourceAncillaryChannelNumber() const { return m_sourceAncillaryChannelNumber; }
    inline bool SourceAncillaryChannelNumberHasBeenSet() const { return m_sourceAncillaryChannelNumberHasBeenSet; }
    inline void SetSourceAncillaryChannelNumber(int value) { m_sourceAncillaryChannelNumberHasBeenSet = true; m_sourceAncillaryChannelNumber = value; }
    inline AncillarySourceSettings& WithSourceAncillaryChannelNumber(int value) { SetSourceAncillaryChannelNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * By default, the service terminates any unterminated captions at the end of each
     * input. If you want the caption to continue onto your next input, disable this
     * setting.
     */
    inline AncillaryTerminateCaptions GetTerminateCaptions() const { return m_terminateCaptions; }
    inline bool TerminateCaptionsHasBeenSet() const { return m_terminateCaptionsHasBeenSet; }
    inline void SetTerminateCaptions(AncillaryTerminateCaptions value) { m_terminateCaptionsHasBeenSet = true; m_terminateCaptions = value; }
    inline AncillarySourceSettings& WithTerminateCaptions(AncillaryTerminateCaptions value) { SetTerminateCaptions(value); return *this;}
    ///@}
  private:

    AncillaryConvert608To708 m_convert608To708{AncillaryConvert608To708::NOT_SET};
    bool m_convert608To708HasBeenSet = false;

    int m_sourceAncillaryChannelNumber{0};
    bool m_sourceAncillaryChannelNumberHasBeenSet = false;

    AncillaryTerminateCaptions m_terminateCaptions{AncillaryTerminateCaptions::NOT_SET};
    bool m_terminateCaptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
