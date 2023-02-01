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
    AWS_MEDIAPACKAGE_API HlsPackage();
    AWS_MEDIAPACKAGE_API HlsPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const AdMarkers& GetAdMarkers() const{ return m_adMarkers; }

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
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }

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
    inline void SetAdMarkers(const AdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }

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
    inline void SetAdMarkers(AdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }

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
    inline HlsPackage& WithAdMarkers(const AdMarkers& value) { SetAdMarkers(value); return *this;}

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
    inline HlsPackage& WithAdMarkers(AdMarkers&& value) { SetAdMarkers(std::move(value)); return *this;}


    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const{ return m_adTriggers; }

    
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }

    
    inline void SetAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { m_adTriggersHasBeenSet = true; m_adTriggers = value; }

    
    inline void SetAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::move(value); }

    
    inline HlsPackage& WithAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { SetAdTriggers(value); return *this;}

    
    inline HlsPackage& WithAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { SetAdTriggers(std::move(value)); return *this;}

    
    inline HlsPackage& AddAdTriggers(const __AdTriggersElement& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }

    
    inline HlsPackage& AddAdTriggers(__AdTriggersElement&& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(std::move(value)); return *this; }


    
    inline const AdsOnDeliveryRestrictions& GetAdsOnDeliveryRestrictions() const{ return m_adsOnDeliveryRestrictions; }

    
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }

    
    inline void SetAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }

    
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = std::move(value); }

    
    inline HlsPackage& WithAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { SetAdsOnDeliveryRestrictions(value); return *this;}

    
    inline HlsPackage& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { SetAdsOnDeliveryRestrictions(std::move(value)); return *this;}


    
    inline const HlsEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const HlsEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(HlsEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline HlsPackage& WithEncryption(const HlsEncryption& value) { SetEncryption(value); return *this;}

    
    inline HlsPackage& WithEncryption(HlsEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline bool GetIncludeDvbSubtitles() const{ return m_includeDvbSubtitles; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline bool IncludeDvbSubtitlesHasBeenSet() const { return m_includeDvbSubtitlesHasBeenSet; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline void SetIncludeDvbSubtitles(bool value) { m_includeDvbSubtitlesHasBeenSet = true; m_includeDvbSubtitles = value; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline HlsPackage& WithIncludeDvbSubtitles(bool value) { SetIncludeDvbSubtitles(value); return *this;}


    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const{ return m_includeIframeOnlyStream; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline HlsPackage& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}


    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline const PlaylistType& GetPlaylistType() const{ return m_playlistType; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline bool PlaylistTypeHasBeenSet() const { return m_playlistTypeHasBeenSet; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline void SetPlaylistType(const PlaylistType& value) { m_playlistTypeHasBeenSet = true; m_playlistType = value; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline void SetPlaylistType(PlaylistType&& value) { m_playlistTypeHasBeenSet = true; m_playlistType = std::move(value); }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline HlsPackage& WithPlaylistType(const PlaylistType& value) { SetPlaylistType(value); return *this;}

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline HlsPackage& WithPlaylistType(PlaylistType&& value) { SetPlaylistType(std::move(value)); return *this;}


    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline int GetPlaylistWindowSeconds() const{ return m_playlistWindowSeconds; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline bool PlaylistWindowSecondsHasBeenSet() const { return m_playlistWindowSecondsHasBeenSet; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline void SetPlaylistWindowSeconds(int value) { m_playlistWindowSecondsHasBeenSet = true; m_playlistWindowSeconds = value; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline HlsPackage& WithPlaylistWindowSeconds(int value) { SetPlaylistWindowSeconds(value); return *this;}


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
    inline int GetProgramDateTimeIntervalSeconds() const{ return m_programDateTimeIntervalSeconds; }

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
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }

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
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }

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
    inline HlsPackage& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}


    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline HlsPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline HlsPackage& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline HlsPackage& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}


    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline bool GetUseAudioRenditionGroup() const{ return m_useAudioRenditionGroup; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline bool UseAudioRenditionGroupHasBeenSet() const { return m_useAudioRenditionGroupHasBeenSet; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline void SetUseAudioRenditionGroup(bool value) { m_useAudioRenditionGroupHasBeenSet = true; m_useAudioRenditionGroup = value; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline HlsPackage& WithUseAudioRenditionGroup(bool value) { SetUseAudioRenditionGroup(value); return *this;}

  private:

    AdMarkers m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet = false;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions;
    bool m_adsOnDeliveryRestrictionsHasBeenSet = false;

    HlsEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    bool m_includeDvbSubtitles;
    bool m_includeDvbSubtitlesHasBeenSet = false;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    PlaylistType m_playlistType;
    bool m_playlistTypeHasBeenSet = false;

    int m_playlistWindowSeconds;
    bool m_playlistWindowSecondsHasBeenSet = false;

    int m_programDateTimeIntervalSeconds;
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;

    bool m_useAudioRenditionGroup;
    bool m_useAudioRenditionGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
