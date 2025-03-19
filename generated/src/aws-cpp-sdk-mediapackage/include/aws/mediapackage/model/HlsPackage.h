/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/AdMarkers.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/mediapackage/model/HlsEncryption.h>
#include <aws/mediapackage/model/PlaylistType.h>
#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/mediapackage/model/__AdTriggersElement.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) packaging configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsPackage">AWS
   * API Reference</a></p>
   */
  class HlsPackage
  {
  public:
    AWS_MEDIAPACKAGE_API HlsPackage() = default;
    AWS_MEDIAPACKAGE_API HlsPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
"DATERANGE" inserts EXT-X-DATERANGE tags
     * to signal ad and program transition events 
in HLS and CMAF manifests. For this
     * option, you must set a programDateTimeIntervalSeconds value 
that is greater
     * than 0.

     */
    inline AdMarkers GetAdMarkers() const { return m_adMarkers; }
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }
    inline void SetAdMarkers(AdMarkers value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }
    inline HlsPackage& WithAdMarkers(AdMarkers value) { SetAdMarkers(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const { return m_adTriggers; }
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }
    template<typename AdTriggersT = Aws::Vector<__AdTriggersElement>>
    void SetAdTriggers(AdTriggersT&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::forward<AdTriggersT>(value); }
    template<typename AdTriggersT = Aws::Vector<__AdTriggersElement>>
    HlsPackage& WithAdTriggers(AdTriggersT&& value) { SetAdTriggers(std::forward<AdTriggersT>(value)); return *this;}
    inline HlsPackage& AddAdTriggers(__AdTriggersElement value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline AdsOnDeliveryRestrictions GetAdsOnDeliveryRestrictions() const { return m_adsOnDeliveryRestrictions; }
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }
    inline HlsPackage& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions value) { SetAdsOnDeliveryRestrictions(value); return *this;}
    ///@}

    ///@{
    
    inline const HlsEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = HlsEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = HlsEncryption>
    HlsPackage& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline bool GetIncludeDvbSubtitles() const { return m_includeDvbSubtitles; }
    inline bool IncludeDvbSubtitlesHasBeenSet() const { return m_includeDvbSubtitlesHasBeenSet; }
    inline void SetIncludeDvbSubtitles(bool value) { m_includeDvbSubtitlesHasBeenSet = true; m_includeDvbSubtitles = value; }
    inline HlsPackage& WithIncludeDvbSubtitles(bool value) { SetIncludeDvbSubtitles(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const { return m_includeIframeOnlyStream; }
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }
    inline HlsPackage& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}
    ///@}

    ///@{
    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline PlaylistType GetPlaylistType() const { return m_playlistType; }
    inline bool PlaylistTypeHasBeenSet() const { return m_playlistTypeHasBeenSet; }
    inline void SetPlaylistType(PlaylistType value) { m_playlistTypeHasBeenSet = true; m_playlistType = value; }
    inline HlsPackage& WithPlaylistType(PlaylistType value) { SetPlaylistType(value); return *this;}
    ///@}

    ///@{
    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline int GetPlaylistWindowSeconds() const { return m_playlistWindowSeconds; }
    inline bool PlaylistWindowSecondsHasBeenSet() const { return m_playlistWindowSecondsHasBeenSet; }
    inline void SetPlaylistWindowSeconds(int value) { m_playlistWindowSecondsHasBeenSet = true; m_playlistWindowSeconds = value; }
    inline HlsPackage& WithPlaylistWindowSeconds(int value) { SetPlaylistWindowSeconds(value); return *this;}
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
    inline HlsPackage& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline int GetSegmentDurationSeconds() const { return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline HlsPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    HlsPackage& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline bool GetUseAudioRenditionGroup() const { return m_useAudioRenditionGroup; }
    inline bool UseAudioRenditionGroupHasBeenSet() const { return m_useAudioRenditionGroupHasBeenSet; }
    inline void SetUseAudioRenditionGroup(bool value) { m_useAudioRenditionGroupHasBeenSet = true; m_useAudioRenditionGroup = value; }
    inline HlsPackage& WithUseAudioRenditionGroup(bool value) { SetUseAudioRenditionGroup(value); return *this;}
    ///@}
  private:

    AdMarkers m_adMarkers{AdMarkers::NOT_SET};
    bool m_adMarkersHasBeenSet = false;

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet = false;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions{AdsOnDeliveryRestrictions::NOT_SET};
    bool m_adsOnDeliveryRestrictionsHasBeenSet = false;

    HlsEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    bool m_includeDvbSubtitles{false};
    bool m_includeDvbSubtitlesHasBeenSet = false;

    bool m_includeIframeOnlyStream{false};
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    PlaylistType m_playlistType{PlaylistType::NOT_SET};
    bool m_playlistTypeHasBeenSet = false;

    int m_playlistWindowSeconds{0};
    bool m_playlistWindowSecondsHasBeenSet = false;

    int m_programDateTimeIntervalSeconds{0};
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;

    bool m_useAudioRenditionGroup{false};
    bool m_useAudioRenditionGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
