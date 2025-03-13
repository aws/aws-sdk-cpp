/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for ListReservationsRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservationsRequest">AWS
   * API Reference</a></p>
   */
  class ListReservationsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListReservationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReservations"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'
     */
    inline const Aws::String& GetChannelClass() const { return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    template<typename ChannelClassT = Aws::String>
    void SetChannelClass(ChannelClassT&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::forward<ChannelClassT>(value); }
    template<typename ChannelClassT = Aws::String>
    ListReservationsRequest& WithChannelClass(ChannelClassT&& value) { SetChannelClass(std::forward<ChannelClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', 'AUDIO', 'LINK', or 'AV1'
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    ListReservationsRequest& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReservationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'
     */
    inline const Aws::String& GetMaximumBitrate() const { return m_maximumBitrate; }
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
    template<typename MaximumBitrateT = Aws::String>
    void SetMaximumBitrate(MaximumBitrateT&& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = std::forward<MaximumBitrateT>(value); }
    template<typename MaximumBitrateT = Aws::String>
    ListReservationsRequest& WithMaximumBitrate(MaximumBitrateT&& value) { SetMaximumBitrate(std::forward<MaximumBitrateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline const Aws::String& GetMaximumFramerate() const { return m_maximumFramerate; }
    inline bool MaximumFramerateHasBeenSet() const { return m_maximumFramerateHasBeenSet; }
    template<typename MaximumFramerateT = Aws::String>
    void SetMaximumFramerate(MaximumFramerateT&& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = std::forward<MaximumFramerateT>(value); }
    template<typename MaximumFramerateT = Aws::String>
    ListReservationsRequest& WithMaximumFramerate(MaximumFramerateT&& value) { SetMaximumFramerate(std::forward<MaximumFramerateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReservationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by resolution, 'SD', 'HD', 'FHD', or 'UHD'
     */
    inline const Aws::String& GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    template<typename ResolutionT = Aws::String>
    void SetResolution(ResolutionT&& value) { m_resolutionHasBeenSet = true; m_resolution = std::forward<ResolutionT>(value); }
    template<typename ResolutionT = Aws::String>
    ListReservationsRequest& WithResolution(ResolutionT&& value) { SetResolution(std::forward<ResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', 'MULTIPLEX', or 'CHANNEL'
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListReservationsRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'
     */
    inline const Aws::String& GetSpecialFeature() const { return m_specialFeature; }
    inline bool SpecialFeatureHasBeenSet() const { return m_specialFeatureHasBeenSet; }
    template<typename SpecialFeatureT = Aws::String>
    void SetSpecialFeature(SpecialFeatureT&& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = std::forward<SpecialFeatureT>(value); }
    template<typename SpecialFeatureT = Aws::String>
    ListReservationsRequest& WithSpecialFeature(SpecialFeatureT&& value) { SetSpecialFeature(std::forward<SpecialFeatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'
     */
    inline const Aws::String& GetVideoQuality() const { return m_videoQuality; }
    inline bool VideoQualityHasBeenSet() const { return m_videoQualityHasBeenSet; }
    template<typename VideoQualityT = Aws::String>
    void SetVideoQuality(VideoQualityT&& value) { m_videoQualityHasBeenSet = true; m_videoQuality = std::forward<VideoQualityT>(value); }
    template<typename VideoQualityT = Aws::String>
    ListReservationsRequest& WithVideoQuality(VideoQualityT&& value) { SetVideoQuality(std::forward<VideoQualityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelClass;
    bool m_channelClassHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet = false;

    Aws::String m_maximumFramerate;
    bool m_maximumFramerateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_specialFeature;
    bool m_specialFeatureHasBeenSet = false;

    Aws::String m_videoQuality;
    bool m_videoQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
