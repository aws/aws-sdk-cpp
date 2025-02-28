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
   * Information about the container format of the media file.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_MEDIACONVERT_API Container();
    AWS_MEDIACONVERT_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The duration of the media file in seconds.
     */
    inline double GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Container& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The format of the container
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline Container& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline Container& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of Track objects.
     */
    inline const Aws::Vector<Track>& GetTracks() const{ return m_tracks; }
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }
    inline void SetTracks(const Aws::Vector<Track>& value) { m_tracksHasBeenSet = true; m_tracks = value; }
    inline void SetTracks(Aws::Vector<Track>&& value) { m_tracksHasBeenSet = true; m_tracks = std::move(value); }
    inline Container& WithTracks(const Aws::Vector<Track>& value) { SetTracks(value); return *this;}
    inline Container& WithTracks(Aws::Vector<Track>&& value) { SetTracks(std::move(value)); return *this;}
    inline Container& AddTracks(const Track& value) { m_tracksHasBeenSet = true; m_tracks.push_back(value); return *this; }
    inline Container& AddTracks(Track&& value) { m_tracksHasBeenSet = true; m_tracks.push_back(std::move(value)); return *this; }
    ///@}
  private:

    double m_duration;
    bool m_durationHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    Aws::Vector<Track> m_tracks;
    bool m_tracksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
