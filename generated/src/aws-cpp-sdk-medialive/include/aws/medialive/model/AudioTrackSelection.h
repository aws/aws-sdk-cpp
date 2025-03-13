/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AudioDolbyEDecode.h>
#include <aws/medialive/model/AudioTrack.h>
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
   * Audio Track Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioTrackSelection">AWS
   * API Reference</a></p>
   */
  class AudioTrackSelection
  {
  public:
    AWS_MEDIALIVE_API AudioTrackSelection() = default;
    AWS_MEDIALIVE_API AudioTrackSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioTrackSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline const Aws::Vector<AudioTrack>& GetTracks() const { return m_tracks; }
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }
    template<typename TracksT = Aws::Vector<AudioTrack>>
    void SetTracks(TracksT&& value) { m_tracksHasBeenSet = true; m_tracks = std::forward<TracksT>(value); }
    template<typename TracksT = Aws::Vector<AudioTrack>>
    AudioTrackSelection& WithTracks(TracksT&& value) { SetTracks(std::forward<TracksT>(value)); return *this;}
    template<typename TracksT = AudioTrack>
    AudioTrackSelection& AddTracks(TracksT&& value) { m_tracksHasBeenSet = true; m_tracks.emplace_back(std::forward<TracksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline const AudioDolbyEDecode& GetDolbyEDecode() const { return m_dolbyEDecode; }
    inline bool DolbyEDecodeHasBeenSet() const { return m_dolbyEDecodeHasBeenSet; }
    template<typename DolbyEDecodeT = AudioDolbyEDecode>
    void SetDolbyEDecode(DolbyEDecodeT&& value) { m_dolbyEDecodeHasBeenSet = true; m_dolbyEDecode = std::forward<DolbyEDecodeT>(value); }
    template<typename DolbyEDecodeT = AudioDolbyEDecode>
    AudioTrackSelection& WithDolbyEDecode(DolbyEDecodeT&& value) { SetDolbyEDecode(std::forward<DolbyEDecodeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioTrack> m_tracks;
    bool m_tracksHasBeenSet = false;

    AudioDolbyEDecode m_dolbyEDecode;
    bool m_dolbyEDecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
