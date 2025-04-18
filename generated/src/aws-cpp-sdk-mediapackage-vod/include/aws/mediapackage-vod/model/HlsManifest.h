﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/AdMarkers.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * An HTTP Live Streaming (HLS) manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/HlsManifest">AWS
   * API Reference</a></p>
   */
  class HlsManifest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API HlsManifest() = default;
    AWS_MEDIAPACKAGEVOD_API HlsManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API HlsManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline AdMarkers GetAdMarkers() const { return m_adMarkers; }
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }
    inline void SetAdMarkers(AdMarkers value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }
    inline HlsManifest& WithAdMarkers(AdMarkers value) { SetAdMarkers(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const { return m_includeIframeOnlyStream; }
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }
    inline HlsManifest& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}
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
    HlsManifest& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The interval (in seconds) between each EXT-X-PROGRAM-DATE-TIME tag
inserted into
     * manifests. Additionally, when an interval is specified
ID3Timed Metadata
     * messages will be generated every 5 seconds using the
ingest time of the
     * content.
If the interval is not specified, or set to 0, then
no
     * EXT-X-PROGRAM-DATE-TIME tags will be inserted into manifests and no
ID3Timed
     * Metadata messages will be generated. Note that irrespective
of this parameter,
     * if any ID3 Timed Metadata is found in HTTP Live Streaming (HLS) input,
it will
     * be passed through to HLS output.

     */
    inline int GetProgramDateTimeIntervalSeconds() const { return m_programDateTimeIntervalSeconds; }
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }
    inline HlsManifest& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool GetRepeatExtXKey() const { return m_repeatExtXKey; }
    inline bool RepeatExtXKeyHasBeenSet() const { return m_repeatExtXKeyHasBeenSet; }
    inline void SetRepeatExtXKey(bool value) { m_repeatExtXKeyHasBeenSet = true; m_repeatExtXKey = value; }
    inline HlsManifest& WithRepeatExtXKey(bool value) { SetRepeatExtXKey(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    HlsManifest& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}
  private:

    AdMarkers m_adMarkers{AdMarkers::NOT_SET};
    bool m_adMarkersHasBeenSet = false;

    bool m_includeIframeOnlyStream{false};
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_programDateTimeIntervalSeconds{0};
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;

    bool m_repeatExtXKey{false};
    bool m_repeatExtXKeyHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
