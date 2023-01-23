/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationResourceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ReservationResourceSpecification::ReservationResourceSpecification() : 
    m_channelClass(ChannelClass::NOT_SET),
    m_channelClassHasBeenSet(false),
    m_codec(ReservationCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_maximumBitrate(ReservationMaximumBitrate::NOT_SET),
    m_maximumBitrateHasBeenSet(false),
    m_maximumFramerate(ReservationMaximumFramerate::NOT_SET),
    m_maximumFramerateHasBeenSet(false),
    m_resolution(ReservationResolution::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_resourceType(ReservationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_specialFeature(ReservationSpecialFeature::NOT_SET),
    m_specialFeatureHasBeenSet(false),
    m_videoQuality(ReservationVideoQuality::NOT_SET),
    m_videoQualityHasBeenSet(false)
{
}

ReservationResourceSpecification::ReservationResourceSpecification(JsonView jsonValue) : 
    m_channelClass(ChannelClass::NOT_SET),
    m_channelClassHasBeenSet(false),
    m_codec(ReservationCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_maximumBitrate(ReservationMaximumBitrate::NOT_SET),
    m_maximumBitrateHasBeenSet(false),
    m_maximumFramerate(ReservationMaximumFramerate::NOT_SET),
    m_maximumFramerateHasBeenSet(false),
    m_resolution(ReservationResolution::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_resourceType(ReservationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_specialFeature(ReservationSpecialFeature::NOT_SET),
    m_specialFeatureHasBeenSet(false),
    m_videoQuality(ReservationVideoQuality::NOT_SET),
    m_videoQualityHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationResourceSpecification& ReservationResourceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelClass"))
  {
    m_channelClass = ChannelClassMapper::GetChannelClassForName(jsonValue.GetString("channelClass"));

    m_channelClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = ReservationCodecMapper::GetReservationCodecForName(jsonValue.GetString("codec"));

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumBitrate"))
  {
    m_maximumBitrate = ReservationMaximumBitrateMapper::GetReservationMaximumBitrateForName(jsonValue.GetString("maximumBitrate"));

    m_maximumBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumFramerate"))
  {
    m_maximumFramerate = ReservationMaximumFramerateMapper::GetReservationMaximumFramerateForName(jsonValue.GetString("maximumFramerate"));

    m_maximumFramerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = ReservationResolutionMapper::GetReservationResolutionForName(jsonValue.GetString("resolution"));

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ReservationResourceTypeMapper::GetReservationResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("specialFeature"))
  {
    m_specialFeature = ReservationSpecialFeatureMapper::GetReservationSpecialFeatureForName(jsonValue.GetString("specialFeature"));

    m_specialFeatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoQuality"))
  {
    m_videoQuality = ReservationVideoQualityMapper::GetReservationVideoQualityForName(jsonValue.GetString("videoQuality"));

    m_videoQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationResourceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_channelClassHasBeenSet)
  {
   payload.WithString("channelClass", ChannelClassMapper::GetNameForChannelClass(m_channelClass));
  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", ReservationCodecMapper::GetNameForReservationCodec(m_codec));
  }

  if(m_maximumBitrateHasBeenSet)
  {
   payload.WithString("maximumBitrate", ReservationMaximumBitrateMapper::GetNameForReservationMaximumBitrate(m_maximumBitrate));
  }

  if(m_maximumFramerateHasBeenSet)
  {
   payload.WithString("maximumFramerate", ReservationMaximumFramerateMapper::GetNameForReservationMaximumFramerate(m_maximumFramerate));
  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("resolution", ReservationResolutionMapper::GetNameForReservationResolution(m_resolution));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ReservationResourceTypeMapper::GetNameForReservationResourceType(m_resourceType));
  }

  if(m_specialFeatureHasBeenSet)
  {
   payload.WithString("specialFeature", ReservationSpecialFeatureMapper::GetNameForReservationSpecialFeature(m_specialFeature));
  }

  if(m_videoQualityHasBeenSet)
  {
   payload.WithString("videoQuality", ReservationVideoQualityMapper::GetNameForReservationVideoQuality(m_videoQuality));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
