/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MsSmoothGroupSettings.h>
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

MsSmoothGroupSettings::MsSmoothGroupSettings() : 
    m_additionalManifestsHasBeenSet(false),
    m_audioDeduplication(MsSmoothAudioDeduplication::NOT_SET),
    m_audioDeduplicationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_fragmentLengthControl(MsSmoothFragmentLengthControl::NOT_SET),
    m_fragmentLengthControlHasBeenSet(false),
    m_manifestEncoding(MsSmoothManifestEncoding::NOT_SET),
    m_manifestEncodingHasBeenSet(false)
{
}

MsSmoothGroupSettings::MsSmoothGroupSettings(JsonView jsonValue) : 
    m_additionalManifestsHasBeenSet(false),
    m_audioDeduplication(MsSmoothAudioDeduplication::NOT_SET),
    m_audioDeduplicationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_fragmentLengthControl(MsSmoothFragmentLengthControl::NOT_SET),
    m_fragmentLengthControlHasBeenSet(false),
    m_manifestEncoding(MsSmoothManifestEncoding::NOT_SET),
    m_manifestEncodingHasBeenSet(false)
{
  *this = jsonValue;
}

MsSmoothGroupSettings& MsSmoothGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalManifests"))
  {
    Aws::Utils::Array<JsonView> additionalManifestsJsonList = jsonValue.GetArray("additionalManifests");
    for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
    {
      m_additionalManifests.push_back(additionalManifestsJsonList[additionalManifestsIndex].AsObject());
    }
    m_additionalManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioDeduplication"))
  {
    m_audioDeduplication = MsSmoothAudioDeduplicationMapper::GetMsSmoothAudioDeduplicationForName(jsonValue.GetString("audioDeduplication"));

    m_audioDeduplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLengthControl"))
  {
    m_fragmentLengthControl = MsSmoothFragmentLengthControlMapper::GetMsSmoothFragmentLengthControlForName(jsonValue.GetString("fragmentLengthControl"));

    m_fragmentLengthControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestEncoding"))
  {
    m_manifestEncoding = MsSmoothManifestEncodingMapper::GetMsSmoothManifestEncodingForName(jsonValue.GetString("manifestEncoding"));

    m_manifestEncodingHasBeenSet = true;
  }

  return *this;
}

JsonValue MsSmoothGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_additionalManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalManifestsJsonList(m_additionalManifests.size());
   for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
   {
     additionalManifestsJsonList[additionalManifestsIndex].AsObject(m_additionalManifests[additionalManifestsIndex].Jsonize());
   }
   payload.WithArray("additionalManifests", std::move(additionalManifestsJsonList));

  }

  if(m_audioDeduplicationHasBeenSet)
  {
   payload.WithString("audioDeduplication", MsSmoothAudioDeduplicationMapper::GetNameForMsSmoothAudioDeduplication(m_audioDeduplication));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_fragmentLengthControlHasBeenSet)
  {
   payload.WithString("fragmentLengthControl", MsSmoothFragmentLengthControlMapper::GetNameForMsSmoothFragmentLengthControl(m_fragmentLengthControl));
  }

  if(m_manifestEncodingHasBeenSet)
  {
   payload.WithString("manifestEncoding", MsSmoothManifestEncodingMapper::GetNameForMsSmoothManifestEncoding(m_manifestEncoding));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
