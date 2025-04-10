﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/ManifestLayout.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/mediapackage-vod/model/ScteMarkersSource.h>
#include <aws/mediapackage-vod/model/StreamSelection.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A DASH manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DashManifest">AWS
   * API Reference</a></p>
   */
  class DashManifest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DashManifest() = default;
    AWS_MEDIAPACKAGEVOD_API DashManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API DashManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline ManifestLayout GetManifestLayout() const { return m_manifestLayout; }
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }
    inline void SetManifestLayout(ManifestLayout value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }
    inline DashManifest& WithManifestLayout(ManifestLayout value) { SetManifestLayout(value); return *this;}
    ///@}

    ///@{
    /**
     * An optional string to include in the name of the manifest.
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    DashManifest& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const { return m_minBufferTimeSeconds; }
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }
    inline DashManifest& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline Profile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(Profile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline DashManifest& WithProfile(Profile value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content.
     */
    inline ScteMarkersSource GetScteMarkersSource() const { return m_scteMarkersSource; }
    inline bool ScteMarkersSourceHasBeenSet() const { return m_scteMarkersSourceHasBeenSet; }
    inline void SetScteMarkersSource(ScteMarkersSource value) { m_scteMarkersSourceHasBeenSet = true; m_scteMarkersSource = value; }
    inline DashManifest& WithScteMarkersSource(ScteMarkersSource value) { SetScteMarkersSource(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    DashManifest& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}
  private:

    ManifestLayout m_manifestLayout{ManifestLayout::NOT_SET};
    bool m_manifestLayoutHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_minBufferTimeSeconds{0};
    bool m_minBufferTimeSecondsHasBeenSet = false;

    Profile m_profile{Profile::NOT_SET};
    bool m_profileHasBeenSet = false;

    ScteMarkersSource m_scteMarkersSource{ScteMarkersSource::NOT_SET};
    bool m_scteMarkersSourceHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
