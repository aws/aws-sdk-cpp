﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/AdMarkers.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/PlaylistType.h>
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
   * A HTTP Live Streaming (HLS) manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsManifestCreateOrUpdateParameters">AWS
   * API Reference</a></p>
   */
  class HlsManifestCreateOrUpdateParameters
  {
  public:
    AWS_MEDIAPACKAGE_API HlsManifestCreateOrUpdateParameters();
    AWS_MEDIAPACKAGE_API HlsManifestCreateOrUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsManifestCreateOrUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline const AdMarkers& GetAdMarkers() const{ return m_adMarkers; }
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }
    inline void SetAdMarkers(const AdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }
    inline void SetAdMarkers(AdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }
    inline HlsManifestCreateOrUpdateParameters& WithAdMarkers(const AdMarkers& value) { SetAdMarkers(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithAdMarkers(AdMarkers&& value) { SetAdMarkers(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const{ return m_adTriggers; }
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }
    inline void SetAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { m_adTriggersHasBeenSet = true; m_adTriggers = value; }
    inline void SetAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::move(value); }
    inline HlsManifestCreateOrUpdateParameters& WithAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { SetAdTriggers(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { SetAdTriggers(std::move(value)); return *this;}
    inline HlsManifestCreateOrUpdateParameters& AddAdTriggers(const __AdTriggersElement& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }
    inline HlsManifestCreateOrUpdateParameters& AddAdTriggers(__AdTriggersElement&& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AdsOnDeliveryRestrictions& GetAdsOnDeliveryRestrictions() const{ return m_adsOnDeliveryRestrictions; }
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }
    inline void SetAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = std::move(value); }
    inline HlsManifestCreateOrUpdateParameters& WithAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { SetAdsOnDeliveryRestrictions(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { SetAdsOnDeliveryRestrictions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline HlsManifestCreateOrUpdateParameters& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const{ return m_includeIframeOnlyStream; }
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }
    inline HlsManifestCreateOrUpdateParameters& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}
    ///@}

    ///@{
    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}

    ///@{
    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline const PlaylistType& GetPlaylistType() const{ return m_playlistType; }
    inline bool PlaylistTypeHasBeenSet() const { return m_playlistTypeHasBeenSet; }
    inline void SetPlaylistType(const PlaylistType& value) { m_playlistTypeHasBeenSet = true; m_playlistType = value; }
    inline void SetPlaylistType(PlaylistType&& value) { m_playlistTypeHasBeenSet = true; m_playlistType = std::move(value); }
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistType(const PlaylistType& value) { SetPlaylistType(value); return *this;}
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistType(PlaylistType&& value) { SetPlaylistType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline int GetPlaylistWindowSeconds() const{ return m_playlistWindowSeconds; }
    inline bool PlaylistWindowSecondsHasBeenSet() const { return m_playlistWindowSecondsHasBeenSet; }
    inline void SetPlaylistWindowSeconds(int value) { m_playlistWindowSecondsHasBeenSet = true; m_playlistWindowSeconds = value; }
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistWindowSeconds(int value) { SetPlaylistWindowSeconds(value); return *this;}
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
    inline int GetProgramDateTimeIntervalSeconds() const{ return m_programDateTimeIntervalSeconds; }
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }
    inline HlsManifestCreateOrUpdateParameters& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}
    ///@}
  private:

    AdMarkers m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet = false;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions;
    bool m_adsOnDeliveryRestrictionsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    PlaylistType m_playlistType;
    bool m_playlistTypeHasBeenSet = false;

    int m_playlistWindowSeconds;
    bool m_playlistWindowSecondsHasBeenSet = false;

    int m_programDateTimeIntervalSeconds;
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
