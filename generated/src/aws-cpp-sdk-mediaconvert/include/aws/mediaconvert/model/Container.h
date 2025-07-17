/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Format.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Track.h>
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
   * The container of your media file. This information helps you understand the
   * overall structure and details of your media, including format, duration, and
   * track layout.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_MEDIACONVERT_API Container() = default;
    AWS_MEDIACONVERT_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The total duration of your media file, in seconds.
     */
    inline double GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Container& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The format of your media file. For example: MP4, QuickTime (MOV), Matroska
     * (MKV), WebM or MXF. Note that this will be blank if your media file has a format
     * that the MediaConvert Probe operation does not recognize.
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline Container& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Details about each track (video, audio, or data) in the media file.
     */
    inline const Aws::Vector<Track>& GetTracks() const { return m_tracks; }
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }
    template<typename TracksT = Aws::Vector<Track>>
    void SetTracks(TracksT&& value) { m_tracksHasBeenSet = true; m_tracks = std::forward<TracksT>(value); }
    template<typename TracksT = Aws::Vector<Track>>
    Container& WithTracks(TracksT&& value) { SetTracks(std::forward<TracksT>(value)); return *this;}
    template<typename TracksT = Track>
    Container& AddTracks(TracksT&& value) { m_tracksHasBeenSet = true; m_tracks.emplace_back(std::forward<TracksT>(value)); return *this; }
    ///@}
  private:

    double m_duration{0.0};
    bool m_durationHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Vector<Track> m_tracks;
    bool m_tracksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
