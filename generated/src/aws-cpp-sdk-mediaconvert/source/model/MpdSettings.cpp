/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

MpdSettings::MpdSettings() : 
    m_accessibilityCaptionHints(MpdAccessibilityCaptionHints::NOT_SET),
    m_accessibilityCaptionHintsHasBeenSet(false),
    m_audioDuration(MpdAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_captionContainerType(MpdCaptionContainerType::NOT_SET),
    m_captionContainerTypeHasBeenSet(false),
    m_klvMetadata(MpdKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_manifestMetadataSignaling(MpdManifestMetadataSignaling::NOT_SET),
    m_manifestMetadataSignalingHasBeenSet(false),
    m_scte35Esam(MpdScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(MpdScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(MpdTimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataBoxVersion(MpdTimedMetadataBoxVersion::NOT_SET),
    m_timedMetadataBoxVersionHasBeenSet(false),
    m_timedMetadataSchemeIdUriHasBeenSet(false),
    m_timedMetadataValueHasBeenSet(false)
{
}

MpdSettings::MpdSettings(JsonView jsonValue) : 
    m_accessibilityCaptionHints(MpdAccessibilityCaptionHints::NOT_SET),
    m_accessibilityCaptionHintsHasBeenSet(false),
    m_audioDuration(MpdAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_captionContainerType(MpdCaptionContainerType::NOT_SET),
    m_captionContainerTypeHasBeenSet(false),
    m_klvMetadata(MpdKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_manifestMetadataSignaling(MpdManifestMetadataSignaling::NOT_SET),
    m_manifestMetadataSignalingHasBeenSet(false),
    m_scte35Esam(MpdScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(MpdScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(MpdTimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataBoxVersion(MpdTimedMetadataBoxVersion::NOT_SET),
    m_timedMetadataBoxVersionHasBeenSet(false),
    m_timedMetadataSchemeIdUriHasBeenSet(false),
    m_timedMetadataValueHasBeenSet(false)
{
  *this = jsonValue;
}

MpdSettings& MpdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessibilityCaptionHints"))
  {
    m_accessibilityCaptionHints = MpdAccessibilityCaptionHintsMapper::GetMpdAccessibilityCaptionHintsForName(jsonValue.GetString("accessibilityCaptionHints"));

    m_accessibilityCaptionHintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioDuration"))
  {
    m_audioDuration = MpdAudioDurationMapper::GetMpdAudioDurationForName(jsonValue.GetString("audioDuration"));

    m_audioDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionContainerType"))
  {
    m_captionContainerType = MpdCaptionContainerTypeMapper::GetMpdCaptionContainerTypeForName(jsonValue.GetString("captionContainerType"));

    m_captionContainerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("klvMetadata"))
  {
    m_klvMetadata = MpdKlvMetadataMapper::GetMpdKlvMetadataForName(jsonValue.GetString("klvMetadata"));

    m_klvMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestMetadataSignaling"))
  {
    m_manifestMetadataSignaling = MpdManifestMetadataSignalingMapper::GetMpdManifestMetadataSignalingForName(jsonValue.GetString("manifestMetadataSignaling"));

    m_manifestMetadataSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = MpdScte35EsamMapper::GetMpdScte35EsamForName(jsonValue.GetString("scte35Esam"));

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = MpdScte35SourceMapper::GetMpdScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadata"))
  {
    m_timedMetadata = MpdTimedMetadataMapper::GetMpdTimedMetadataForName(jsonValue.GetString("timedMetadata"));

    m_timedMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataBoxVersion"))
  {
    m_timedMetadataBoxVersion = MpdTimedMetadataBoxVersionMapper::GetMpdTimedMetadataBoxVersionForName(jsonValue.GetString("timedMetadataBoxVersion"));

    m_timedMetadataBoxVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataSchemeIdUri"))
  {
    m_timedMetadataSchemeIdUri = jsonValue.GetString("timedMetadataSchemeIdUri");

    m_timedMetadataSchemeIdUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataValue"))
  {
    m_timedMetadataValue = jsonValue.GetString("timedMetadataValue");

    m_timedMetadataValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MpdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accessibilityCaptionHintsHasBeenSet)
  {
   payload.WithString("accessibilityCaptionHints", MpdAccessibilityCaptionHintsMapper::GetNameForMpdAccessibilityCaptionHints(m_accessibilityCaptionHints));
  }

  if(m_audioDurationHasBeenSet)
  {
   payload.WithString("audioDuration", MpdAudioDurationMapper::GetNameForMpdAudioDuration(m_audioDuration));
  }

  if(m_captionContainerTypeHasBeenSet)
  {
   payload.WithString("captionContainerType", MpdCaptionContainerTypeMapper::GetNameForMpdCaptionContainerType(m_captionContainerType));
  }

  if(m_klvMetadataHasBeenSet)
  {
   payload.WithString("klvMetadata", MpdKlvMetadataMapper::GetNameForMpdKlvMetadata(m_klvMetadata));
  }

  if(m_manifestMetadataSignalingHasBeenSet)
  {
   payload.WithString("manifestMetadataSignaling", MpdManifestMetadataSignalingMapper::GetNameForMpdManifestMetadataSignaling(m_manifestMetadataSignaling));
  }

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithString("scte35Esam", MpdScte35EsamMapper::GetNameForMpdScte35Esam(m_scte35Esam));
  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", MpdScte35SourceMapper::GetNameForMpdScte35Source(m_scte35Source));
  }

  if(m_timedMetadataHasBeenSet)
  {
   payload.WithString("timedMetadata", MpdTimedMetadataMapper::GetNameForMpdTimedMetadata(m_timedMetadata));
  }

  if(m_timedMetadataBoxVersionHasBeenSet)
  {
   payload.WithString("timedMetadataBoxVersion", MpdTimedMetadataBoxVersionMapper::GetNameForMpdTimedMetadataBoxVersion(m_timedMetadataBoxVersion));
  }

  if(m_timedMetadataSchemeIdUriHasBeenSet)
  {
   payload.WithString("timedMetadataSchemeIdUri", m_timedMetadataSchemeIdUri);

  }

  if(m_timedMetadataValueHasBeenSet)
  {
   payload.WithString("timedMetadataValue", m_timedMetadataValue);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
