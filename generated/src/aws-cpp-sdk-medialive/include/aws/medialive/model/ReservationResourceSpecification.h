/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/medialive/model/ReservationCodec.h>
#include <aws/medialive/model/ReservationMaximumBitrate.h>
#include <aws/medialive/model/ReservationMaximumFramerate.h>
#include <aws/medialive/model/ReservationResolution.h>
#include <aws/medialive/model/ReservationResourceType.h>
#include <aws/medialive/model/ReservationSpecialFeature.h>
#include <aws/medialive/model/ReservationVideoQuality.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Resource configuration (codec, resolution, bitrate, ...)<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ReservationResourceSpecification">AWS
   * API Reference</a></p>
   */
  class ReservationResourceSpecification
  {
  public:
    AWS_MEDIALIVE_API ReservationResourceSpecification() = default;
    AWS_MEDIALIVE_API ReservationResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ReservationResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline ChannelClass GetChannelClass() const { return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    inline void SetChannelClass(ChannelClass value) { m_channelClassHasBeenSet = true; m_channelClass = value; }
    inline ReservationResourceSpecification& WithChannelClass(ChannelClass value) { SetChannelClass(value); return *this;}
    ///@}

    ///@{
    /**
     * Codec, e.g. 'AVC'
     */
    inline ReservationCodec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(ReservationCodec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline ReservationResourceSpecification& WithCodec(ReservationCodec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline ReservationMaximumBitrate GetMaximumBitrate() const { return m_maximumBitrate; }
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
    inline void SetMaximumBitrate(ReservationMaximumBitrate value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }
    inline ReservationResourceSpecification& WithMaximumBitrate(ReservationMaximumBitrate value) { SetMaximumBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline ReservationMaximumFramerate GetMaximumFramerate() const { return m_maximumFramerate; }
    inline bool MaximumFramerateHasBeenSet() const { return m_maximumFramerateHasBeenSet; }
    inline void SetMaximumFramerate(ReservationMaximumFramerate value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = value; }
    inline ReservationResourceSpecification& WithMaximumFramerate(ReservationMaximumFramerate value) { SetMaximumFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * Resolution, e.g. 'HD'
     */
    inline ReservationResolution GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(ReservationResolution value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline ReservationResourceSpecification& WithResolution(ReservationResolution value) { SetResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * Resource type, 'INPUT', 'OUTPUT', 'MULTIPLEX', or 'CHANNEL'
     */
    inline ReservationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ReservationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ReservationResourceSpecification& WithResourceType(ReservationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline ReservationSpecialFeature GetSpecialFeature() const { return m_specialFeature; }
    inline bool SpecialFeatureHasBeenSet() const { return m_specialFeatureHasBeenSet; }
    inline void SetSpecialFeature(ReservationSpecialFeature value) { m_specialFeatureHasBeenSet = true; m_specialFeature = value; }
    inline ReservationResourceSpecification& WithSpecialFeature(ReservationSpecialFeature value) { SetSpecialFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline ReservationVideoQuality GetVideoQuality() const { return m_videoQuality; }
    inline bool VideoQualityHasBeenSet() const { return m_videoQualityHasBeenSet; }
    inline void SetVideoQuality(ReservationVideoQuality value) { m_videoQualityHasBeenSet = true; m_videoQuality = value; }
    inline ReservationResourceSpecification& WithVideoQuality(ReservationVideoQuality value) { SetVideoQuality(value); return *this;}
    ///@}
  private:

    ChannelClass m_channelClass{ChannelClass::NOT_SET};
    bool m_channelClassHasBeenSet = false;

    ReservationCodec m_codec{ReservationCodec::NOT_SET};
    bool m_codecHasBeenSet = false;

    ReservationMaximumBitrate m_maximumBitrate{ReservationMaximumBitrate::NOT_SET};
    bool m_maximumBitrateHasBeenSet = false;

    ReservationMaximumFramerate m_maximumFramerate{ReservationMaximumFramerate::NOT_SET};
    bool m_maximumFramerateHasBeenSet = false;

    ReservationResolution m_resolution{ReservationResolution::NOT_SET};
    bool m_resolutionHasBeenSet = false;

    ReservationResourceType m_resourceType{ReservationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    ReservationSpecialFeature m_specialFeature{ReservationSpecialFeature::NOT_SET};
    bool m_specialFeatureHasBeenSet = false;

    ReservationVideoQuality m_videoQuality{ReservationVideoQuality::NOT_SET};
    bool m_videoQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
