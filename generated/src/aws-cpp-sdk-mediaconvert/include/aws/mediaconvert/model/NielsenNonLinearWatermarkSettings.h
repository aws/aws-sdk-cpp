/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NielsenActiveWatermarkProcessType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/NielsenSourceWatermarkStatusType.h>
#include <aws/mediaconvert/model/NielsenUniqueTicPerAudioTrackType.h>
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
   * Ignore these settings unless you are using Nielsen non-linear watermarking.
   * Specify the values that MediaConvert uses to generate and place Nielsen
   * watermarks in your output audio. In addition to specifying these values, you
   * also need to set up your cloud TIC server. These settings apply to every output
   * in your job. The MediaConvert implementation is currently with the following
   * Nielsen versions: Nielsen Watermark SDK Version 6.0.13 Nielsen NLM Watermark
   * Engine Version 1.3.3 Nielsen Watermark Authenticator [SID_TIC] Version
   * [7.0.0]<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NielsenNonLinearWatermarkSettings">AWS
   * API Reference</a></p>
   */
  class NielsenNonLinearWatermarkSettings
  {
  public:
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings() = default;
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW, you must provide a value for the setting SID. When you
     * choose CBET, you must provide a value for the setting CSID. When you choose NAES
     * 2, NW, and CBET, you must provide values for both of these settings.
     */
    inline NielsenActiveWatermarkProcessType GetActiveWatermarkProcess() const { return m_activeWatermarkProcess; }
    inline bool ActiveWatermarkProcessHasBeenSet() const { return m_activeWatermarkProcessHasBeenSet; }
    inline void SetActiveWatermarkProcess(NielsenActiveWatermarkProcessType value) { m_activeWatermarkProcessHasBeenSet = true; m_activeWatermarkProcess = value; }
    inline NielsenNonLinearWatermarkSettings& WithActiveWatermarkProcess(NielsenActiveWatermarkProcessType value) { SetActiveWatermarkProcess(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination.
     */
    inline const Aws::String& GetAdiFilename() const { return m_adiFilename; }
    inline bool AdiFilenameHasBeenSet() const { return m_adiFilenameHasBeenSet; }
    template<typename AdiFilenameT = Aws::String>
    void SetAdiFilename(AdiFilenameT&& value) { m_adiFilenameHasBeenSet = true; m_adiFilename = std::forward<AdiFilenameT>(value); }
    template<typename AdiFilenameT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithAdiFilename(AdiFilenameT&& value) { SetAdiFilename(std::forward<AdiFilenameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * that includes CBET.
     */
    inline const Aws::String& GetCbetSourceId() const { return m_cbetSourceId; }
    inline bool CbetSourceIdHasBeenSet() const { return m_cbetSourceIdHasBeenSet; }
    template<typename CbetSourceIdT = Aws::String>
    void SetCbetSourceId(CbetSourceIdT&& value) { m_cbetSourceIdHasBeenSet = true; m_cbetSourceId = std::forward<CbetSourceIdT>(value); }
    template<typename CbetSourceIdT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithCbetSourceId(CbetSourceIdT&& value) { SetCbetSourceId(std::forward<CbetSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline const Aws::String& GetEpisodeId() const { return m_episodeId; }
    inline bool EpisodeIdHasBeenSet() const { return m_episodeIdHasBeenSet; }
    template<typename EpisodeIdT = Aws::String>
    void SetEpisodeId(EpisodeIdT&& value) { m_episodeIdHasBeenSet = true; m_episodeId = std::forward<EpisodeIdT>(value); }
    template<typename EpisodeIdT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithEpisodeId(EpisodeIdT&& value) { SetEpisodeId(std::forward<EpisodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file to specify it. MediaConvert
     * delivers the Nielsen metadata .zip files only to your metadata destination
     * Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You are
     * responsible for delivering the metadata .zip files to Nielsen.
     */
    inline const Aws::String& GetMetadataDestination() const { return m_metadataDestination; }
    inline bool MetadataDestinationHasBeenSet() const { return m_metadataDestinationHasBeenSet; }
    template<typename MetadataDestinationT = Aws::String>
    void SetMetadataDestination(MetadataDestinationT&& value) { m_metadataDestinationHasBeenSet = true; m_metadataDestination = std::forward<MetadataDestinationT>(value); }
    template<typename MetadataDestinationT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithMetadataDestination(MetadataDestinationT&& value) { SetMetadataDestination(std::forward<MetadataDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use the SID that Nielsen provides to you. This source ID should be unique to
     * your Nielsen account but common to all of your output assets. Required for all
     * Nielsen non-linear watermarking. This ID should be unique to your Nielsen
     * account but common to all of your output assets. Required for all Nielsen
     * non-linear watermarking.
     */
    inline int GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(int value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline NielsenNonLinearWatermarkSettings& WithSourceId(int value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked, the service fails
     * the job. Nielsen requires that you add non-linear watermarking to only clean
     * content that doesn't already have non-linear Nielsen watermarks.
     */
    inline NielsenSourceWatermarkStatusType GetSourceWatermarkStatus() const { return m_sourceWatermarkStatus; }
    inline bool SourceWatermarkStatusHasBeenSet() const { return m_sourceWatermarkStatusHasBeenSet; }
    inline void SetSourceWatermarkStatus(NielsenSourceWatermarkStatusType value) { m_sourceWatermarkStatusHasBeenSet = true; m_sourceWatermarkStatus = value; }
    inline NielsenNonLinearWatermarkSettings& WithSourceWatermarkStatus(NielsenSourceWatermarkStatusType value) { SetSourceWatermarkStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline const Aws::String& GetTicServerUrl() const { return m_ticServerUrl; }
    inline bool TicServerUrlHasBeenSet() const { return m_ticServerUrlHasBeenSet; }
    template<typename TicServerUrlT = Aws::String>
    void SetTicServerUrl(TicServerUrlT&& value) { m_ticServerUrlHasBeenSet = true; m_ticServerUrl = std::forward<TicServerUrlT>(value); }
    template<typename TicServerUrlT = Aws::String>
    NielsenNonLinearWatermarkSettings& WithTicServerUrl(TicServerUrlT&& value) { SetTicServerUrl(std::forward<TicServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs. To create assets that have unique TIC values for each
     * audio track, choose Use unique TICs.
     */
    inline NielsenUniqueTicPerAudioTrackType GetUniqueTicPerAudioTrack() const { return m_uniqueTicPerAudioTrack; }
    inline bool UniqueTicPerAudioTrackHasBeenSet() const { return m_uniqueTicPerAudioTrackHasBeenSet; }
    inline void SetUniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType value) { m_uniqueTicPerAudioTrackHasBeenSet = true; m_uniqueTicPerAudioTrack = value; }
    inline NielsenNonLinearWatermarkSettings& WithUniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType value) { SetUniqueTicPerAudioTrack(value); return *this;}
    ///@}
  private:

    NielsenActiveWatermarkProcessType m_activeWatermarkProcess{NielsenActiveWatermarkProcessType::NOT_SET};
    bool m_activeWatermarkProcessHasBeenSet = false;

    Aws::String m_adiFilename;
    bool m_adiFilenameHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_cbetSourceId;
    bool m_cbetSourceIdHasBeenSet = false;

    Aws::String m_episodeId;
    bool m_episodeIdHasBeenSet = false;

    Aws::String m_metadataDestination;
    bool m_metadataDestinationHasBeenSet = false;

    int m_sourceId{0};
    bool m_sourceIdHasBeenSet = false;

    NielsenSourceWatermarkStatusType m_sourceWatermarkStatus{NielsenSourceWatermarkStatusType::NOT_SET};
    bool m_sourceWatermarkStatusHasBeenSet = false;

    Aws::String m_ticServerUrl;
    bool m_ticServerUrlHasBeenSet = false;

    NielsenUniqueTicPerAudioTrackType m_uniqueTicPerAudioTrack{NielsenUniqueTicPerAudioTrackType::NOT_SET};
    bool m_uniqueTicPerAudioTrackHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
