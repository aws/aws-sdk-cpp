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
   * Placeholder documentation for ListOfferingsRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferingsRequest">AWS
   * API Reference</a></p>
   */
  class ListOfferingsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOfferings"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'
     */
    inline const Aws::String& GetChannelClass() const{ return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    inline void SetChannelClass(const Aws::String& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }
    inline void SetChannelClass(Aws::String&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }
    inline void SetChannelClass(const char* value) { m_channelClassHasBeenSet = true; m_channelClass.assign(value); }
    inline ListOfferingsRequest& WithChannelClass(const Aws::String& value) { SetChannelClass(value); return *this;}
    inline ListOfferingsRequest& WithChannelClass(Aws::String&& value) { SetChannelClass(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithChannelClass(const char* value) { SetChannelClass(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter to offerings that match the configuration of an existing channel, e.g.
     * '2345678' (a channel ID)
     */
    inline const Aws::String& GetChannelConfiguration() const{ return m_channelConfiguration; }
    inline bool ChannelConfigurationHasBeenSet() const { return m_channelConfigurationHasBeenSet; }
    inline void SetChannelConfiguration(const Aws::String& value) { m_channelConfigurationHasBeenSet = true; m_channelConfiguration = value; }
    inline void SetChannelConfiguration(Aws::String&& value) { m_channelConfigurationHasBeenSet = true; m_channelConfiguration = std::move(value); }
    inline void SetChannelConfiguration(const char* value) { m_channelConfigurationHasBeenSet = true; m_channelConfiguration.assign(value); }
    inline ListOfferingsRequest& WithChannelConfiguration(const Aws::String& value) { SetChannelConfiguration(value); return *this;}
    inline ListOfferingsRequest& WithChannelConfiguration(Aws::String&& value) { SetChannelConfiguration(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithChannelConfiguration(const char* value) { SetChannelConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', 'AUDIO', 'LINK', or 'AV1'
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }
    inline ListOfferingsRequest& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}
    inline ListOfferingsRequest& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithCodec(const char* value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by offering duration, e.g. '12'
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }
    inline ListOfferingsRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}
    inline ListOfferingsRequest& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithDuration(const char* value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'
     */
    inline const Aws::String& GetMaximumBitrate() const{ return m_maximumBitrate; }
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
    inline void SetMaximumBitrate(const Aws::String& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }
    inline void SetMaximumBitrate(Aws::String&& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = std::move(value); }
    inline void SetMaximumBitrate(const char* value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate.assign(value); }
    inline ListOfferingsRequest& WithMaximumBitrate(const Aws::String& value) { SetMaximumBitrate(value); return *this;}
    inline ListOfferingsRequest& WithMaximumBitrate(Aws::String&& value) { SetMaximumBitrate(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithMaximumBitrate(const char* value) { SetMaximumBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline const Aws::String& GetMaximumFramerate() const{ return m_maximumFramerate; }
    inline bool MaximumFramerateHasBeenSet() const { return m_maximumFramerateHasBeenSet; }
    inline void SetMaximumFramerate(const Aws::String& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = value; }
    inline void SetMaximumFramerate(Aws::String&& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = std::move(value); }
    inline void SetMaximumFramerate(const char* value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate.assign(value); }
    inline ListOfferingsRequest& WithMaximumFramerate(const Aws::String& value) { SetMaximumFramerate(value); return *this;}
    inline ListOfferingsRequest& WithMaximumFramerate(Aws::String&& value) { SetMaximumFramerate(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithMaximumFramerate(const char* value) { SetMaximumFramerate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by resolution, 'SD', 'HD', 'FHD', or 'UHD'
     */
    inline const Aws::String& GetResolution() const{ return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }
    inline void SetResolution(const char* value) { m_resolutionHasBeenSet = true; m_resolution.assign(value); }
    inline ListOfferingsRequest& WithResolution(const Aws::String& value) { SetResolution(value); return *this;}
    inline ListOfferingsRequest& WithResolution(Aws::String&& value) { SetResolution(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithResolution(const char* value) { SetResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', 'MULTIPLEX', or 'CHANNEL'
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ListOfferingsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ListOfferingsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'
     */
    inline const Aws::String& GetSpecialFeature() const{ return m_specialFeature; }
    inline bool SpecialFeatureHasBeenSet() const { return m_specialFeatureHasBeenSet; }
    inline void SetSpecialFeature(const Aws::String& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = value; }
    inline void SetSpecialFeature(Aws::String&& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = std::move(value); }
    inline void SetSpecialFeature(const char* value) { m_specialFeatureHasBeenSet = true; m_specialFeature.assign(value); }
    inline ListOfferingsRequest& WithSpecialFeature(const Aws::String& value) { SetSpecialFeature(value); return *this;}
    inline ListOfferingsRequest& WithSpecialFeature(Aws::String&& value) { SetSpecialFeature(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithSpecialFeature(const char* value) { SetSpecialFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'
     */
    inline const Aws::String& GetVideoQuality() const{ return m_videoQuality; }
    inline bool VideoQualityHasBeenSet() const { return m_videoQualityHasBeenSet; }
    inline void SetVideoQuality(const Aws::String& value) { m_videoQualityHasBeenSet = true; m_videoQuality = value; }
    inline void SetVideoQuality(Aws::String&& value) { m_videoQualityHasBeenSet = true; m_videoQuality = std::move(value); }
    inline void SetVideoQuality(const char* value) { m_videoQualityHasBeenSet = true; m_videoQuality.assign(value); }
    inline ListOfferingsRequest& WithVideoQuality(const Aws::String& value) { SetVideoQuality(value); return *this;}
    inline ListOfferingsRequest& WithVideoQuality(Aws::String&& value) { SetVideoQuality(std::move(value)); return *this;}
    inline ListOfferingsRequest& WithVideoQuality(const char* value) { SetVideoQuality(value); return *this;}
    ///@}
  private:

    Aws::String m_channelClass;
    bool m_channelClassHasBeenSet = false;

    Aws::String m_channelConfiguration;
    bool m_channelConfigurationHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    int m_maxResults;
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
