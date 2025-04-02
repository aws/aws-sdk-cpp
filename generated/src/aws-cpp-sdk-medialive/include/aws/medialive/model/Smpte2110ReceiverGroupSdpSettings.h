/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputSdpLocation.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Information about the SDP files that describe the SMPTE 2110 streams that go
   * into one SMPTE 2110 receiver group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Smpte2110ReceiverGroupSdpSettings">AWS
   * API Reference</a></p>
   */
  class Smpte2110ReceiverGroupSdpSettings
  {
  public:
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSdpSettings() = default;
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSdpSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSdpSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of InputSdpLocations. Each item in the list specifies the SDP file and
     * index for one ancillary SMPTE 2110 stream.
Each stream encapsulates one captions
     * stream (out of any number you can include) or the single SCTE 35 stream that you
     * can include.
     */
    inline const Aws::Vector<InputSdpLocation>& GetAncillarySdps() const { return m_ancillarySdps; }
    inline bool AncillarySdpsHasBeenSet() const { return m_ancillarySdpsHasBeenSet; }
    template<typename AncillarySdpsT = Aws::Vector<InputSdpLocation>>
    void SetAncillarySdps(AncillarySdpsT&& value) { m_ancillarySdpsHasBeenSet = true; m_ancillarySdps = std::forward<AncillarySdpsT>(value); }
    template<typename AncillarySdpsT = Aws::Vector<InputSdpLocation>>
    Smpte2110ReceiverGroupSdpSettings& WithAncillarySdps(AncillarySdpsT&& value) { SetAncillarySdps(std::forward<AncillarySdpsT>(value)); return *this;}
    template<typename AncillarySdpsT = InputSdpLocation>
    Smpte2110ReceiverGroupSdpSettings& AddAncillarySdps(AncillarySdpsT&& value) { m_ancillarySdpsHasBeenSet = true; m_ancillarySdps.emplace_back(std::forward<AncillarySdpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of InputSdpLocations. Each item in the list specifies the SDP file and
     * index for one audio SMPTE 2110 stream.
     */
    inline const Aws::Vector<InputSdpLocation>& GetAudioSdps() const { return m_audioSdps; }
    inline bool AudioSdpsHasBeenSet() const { return m_audioSdpsHasBeenSet; }
    template<typename AudioSdpsT = Aws::Vector<InputSdpLocation>>
    void SetAudioSdps(AudioSdpsT&& value) { m_audioSdpsHasBeenSet = true; m_audioSdps = std::forward<AudioSdpsT>(value); }
    template<typename AudioSdpsT = Aws::Vector<InputSdpLocation>>
    Smpte2110ReceiverGroupSdpSettings& WithAudioSdps(AudioSdpsT&& value) { SetAudioSdps(std::forward<AudioSdpsT>(value)); return *this;}
    template<typename AudioSdpsT = InputSdpLocation>
    Smpte2110ReceiverGroupSdpSettings& AddAudioSdps(AudioSdpsT&& value) { m_audioSdpsHasBeenSet = true; m_audioSdps.emplace_back(std::forward<AudioSdpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The InputSdpLocation that specifies the SDP file and index for the single video
     * SMPTE 2110 stream for this 2110 input.
     */
    inline const InputSdpLocation& GetVideoSdp() const { return m_videoSdp; }
    inline bool VideoSdpHasBeenSet() const { return m_videoSdpHasBeenSet; }
    template<typename VideoSdpT = InputSdpLocation>
    void SetVideoSdp(VideoSdpT&& value) { m_videoSdpHasBeenSet = true; m_videoSdp = std::forward<VideoSdpT>(value); }
    template<typename VideoSdpT = InputSdpLocation>
    Smpte2110ReceiverGroupSdpSettings& WithVideoSdp(VideoSdpT&& value) { SetVideoSdp(std::forward<VideoSdpT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InputSdpLocation> m_ancillarySdps;
    bool m_ancillarySdpsHasBeenSet = false;

    Aws::Vector<InputSdpLocation> m_audioSdps;
    bool m_audioSdpsHasBeenSet = false;

    InputSdpLocation m_videoSdp;
    bool m_videoSdpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
