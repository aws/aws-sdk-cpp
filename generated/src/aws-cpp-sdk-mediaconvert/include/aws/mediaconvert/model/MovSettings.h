/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MovClapAtom.h>
#include <aws/mediaconvert/model/MovCslgAtom.h>
#include <aws/mediaconvert/model/MovMpeg2FourCCControl.h>
#include <aws/mediaconvert/model/MovPaddingControl.h>
#include <aws/mediaconvert/model/MovReference.h>
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
   * These settings relate to your QuickTime MOV output container.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MovSettings">AWS
   * API Reference</a></p>
   */
  class MovSettings
  {
  public:
    AWS_MEDIACONVERT_API MovSettings() = default;
    AWS_MEDIACONVERT_API MovSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MovSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline MovClapAtom GetClapAtom() const { return m_clapAtom; }
    inline bool ClapAtomHasBeenSet() const { return m_clapAtomHasBeenSet; }
    inline void SetClapAtom(MovClapAtom value) { m_clapAtomHasBeenSet = true; m_clapAtom = value; }
    inline MovSettings& WithClapAtom(MovClapAtom value) { SetClapAtom(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline MovCslgAtom GetCslgAtom() const { return m_cslgAtom; }
    inline bool CslgAtomHasBeenSet() const { return m_cslgAtomHasBeenSet; }
    inline void SetCslgAtom(MovCslgAtom value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = value; }
    inline MovSettings& WithCslgAtom(MovCslgAtom value) { SetCslgAtom(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline MovMpeg2FourCCControl GetMpeg2FourCCControl() const { return m_mpeg2FourCCControl; }
    inline bool Mpeg2FourCCControlHasBeenSet() const { return m_mpeg2FourCCControlHasBeenSet; }
    inline void SetMpeg2FourCCControl(MovMpeg2FourCCControl value) { m_mpeg2FourCCControlHasBeenSet = true; m_mpeg2FourCCControl = value; }
    inline MovSettings& WithMpeg2FourCCControl(MovMpeg2FourCCControl value) { SetMpeg2FourCCControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Unless you need Omneon compatibility: Keep the default value, None. To make this
     * output compatible with Omneon: Choose Omneon. When you do, MediaConvert
     * increases the length of the 'elst' edit list atom. Note that this might cause
     * file rejections when a recipient of the output file doesn't expect this extra
     * padding.
     */
    inline MovPaddingControl GetPaddingControl() const { return m_paddingControl; }
    inline bool PaddingControlHasBeenSet() const { return m_paddingControlHasBeenSet; }
    inline void SetPaddingControl(MovPaddingControl value) { m_paddingControlHasBeenSet = true; m_paddingControl = value; }
    inline MovSettings& WithPaddingControl(MovPaddingControl value) { SetPaddingControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline MovReference GetReference() const { return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    inline void SetReference(MovReference value) { m_referenceHasBeenSet = true; m_reference = value; }
    inline MovSettings& WithReference(MovReference value) { SetReference(value); return *this;}
    ///@}
  private:

    MovClapAtom m_clapAtom{MovClapAtom::NOT_SET};
    bool m_clapAtomHasBeenSet = false;

    MovCslgAtom m_cslgAtom{MovCslgAtom::NOT_SET};
    bool m_cslgAtomHasBeenSet = false;

    MovMpeg2FourCCControl m_mpeg2FourCCControl{MovMpeg2FourCCControl::NOT_SET};
    bool m_mpeg2FourCCControlHasBeenSet = false;

    MovPaddingControl m_paddingControl{MovPaddingControl::NOT_SET};
    bool m_paddingControlHasBeenSet = false;

    MovReference m_reference{MovReference::NOT_SET};
    bool m_referenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
