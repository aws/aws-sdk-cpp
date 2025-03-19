/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmfcAudioDuration.h>
#include <aws/mediaconvert/model/Mp4CslgAtom.h>
#include <aws/mediaconvert/model/Mp4FreeSpaceBox.h>
#include <aws/mediaconvert/model/Mp4MoovPlacement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * These settings relate to your MP4 output container. You can create audio only
   * outputs with this container. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mp4Settings">AWS
   * API Reference</a></p>
   */
  class Mp4Settings
  {
  public:
    AWS_MEDIACONVERT_API Mp4Settings() = default;
    AWS_MEDIACONVERT_API Mp4Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Mp4Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration. In all
     * other cases, keep the default value, Default codec duration. When you choose
     * Match video duration, MediaConvert pads the output audio streams with silence or
     * trims them to ensure that the total duration of each audio stream is at least as
     * long as the total duration of the video stream. After padding or trimming, the
     * audio stream duration is no more than one frame longer than the video stream.
     * MediaConvert applies audio padding or trimming only to the end of the last
     * segment of the output. For unsegmented outputs, MediaConvert adds padding only
     * to the end of the file. When you keep the default value, any minor discrepancies
     * between audio and video duration will depend on your output audio codec.
     */
    inline CmfcAudioDuration GetAudioDuration() const { return m_audioDuration; }
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }
    inline void SetAudioDuration(CmfcAudioDuration value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }
    inline Mp4Settings& WithAudioDuration(CmfcAudioDuration value) { SetAudioDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline Mp4CslgAtom GetCslgAtom() const { return m_cslgAtom; }
    inline bool CslgAtomHasBeenSet() const { return m_cslgAtomHasBeenSet; }
    inline void SetCslgAtom(Mp4CslgAtom value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = value; }
    inline Mp4Settings& WithCslgAtom(Mp4CslgAtom value) { SetCslgAtom(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless compliance to the CTTS box version specification
     * matters in your workflow. Specify a value of 1 to set your CTTS box version to 1
     * and make your output compliant with the specification. When you specify a value
     * of 1, you must also set CSLG atom to the value INCLUDE. Keep the default value 0
     * to set your CTTS box version to 0. This can provide backward compatibility for
     * some players and packagers.
     */
    inline int GetCttsVersion() const { return m_cttsVersion; }
    inline bool CttsVersionHasBeenSet() const { return m_cttsVersionHasBeenSet; }
    inline void SetCttsVersion(int value) { m_cttsVersionHasBeenSet = true; m_cttsVersion = value; }
    inline Mp4Settings& WithCttsVersion(int value) { SetCttsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * Inserts a free-space box immediately after the moov box.
     */
    inline Mp4FreeSpaceBox GetFreeSpaceBox() const { return m_freeSpaceBox; }
    inline bool FreeSpaceBoxHasBeenSet() const { return m_freeSpaceBoxHasBeenSet; }
    inline void SetFreeSpaceBox(Mp4FreeSpaceBox value) { m_freeSpaceBoxHasBeenSet = true; m_freeSpaceBox = value; }
    inline Mp4Settings& WithFreeSpaceBox(Mp4FreeSpaceBox value) { SetFreeSpaceBox(value); return *this;}
    ///@}

    ///@{
    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline Mp4MoovPlacement GetMoovPlacement() const { return m_moovPlacement; }
    inline bool MoovPlacementHasBeenSet() const { return m_moovPlacementHasBeenSet; }
    inline void SetMoovPlacement(Mp4MoovPlacement value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = value; }
    inline Mp4Settings& WithMoovPlacement(Mp4MoovPlacement value) { SetMoovPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline const Aws::String& GetMp4MajorBrand() const { return m_mp4MajorBrand; }
    inline bool Mp4MajorBrandHasBeenSet() const { return m_mp4MajorBrandHasBeenSet; }
    template<typename Mp4MajorBrandT = Aws::String>
    void SetMp4MajorBrand(Mp4MajorBrandT&& value) { m_mp4MajorBrandHasBeenSet = true; m_mp4MajorBrand = std::forward<Mp4MajorBrandT>(value); }
    template<typename Mp4MajorBrandT = Aws::String>
    Mp4Settings& WithMp4MajorBrand(Mp4MajorBrandT&& value) { SetMp4MajorBrand(std::forward<Mp4MajorBrandT>(value)); return *this;}
    ///@}
  private:

    CmfcAudioDuration m_audioDuration{CmfcAudioDuration::NOT_SET};
    bool m_audioDurationHasBeenSet = false;

    Mp4CslgAtom m_cslgAtom{Mp4CslgAtom::NOT_SET};
    bool m_cslgAtomHasBeenSet = false;

    int m_cttsVersion{0};
    bool m_cttsVersionHasBeenSet = false;

    Mp4FreeSpaceBox m_freeSpaceBox{Mp4FreeSpaceBox::NOT_SET};
    bool m_freeSpaceBoxHasBeenSet = false;

    Mp4MoovPlacement m_moovPlacement{Mp4MoovPlacement::NOT_SET};
    bool m_moovPlacementHasBeenSet = false;

    Aws::String m_mp4MajorBrand;
    bool m_mp4MajorBrandHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
