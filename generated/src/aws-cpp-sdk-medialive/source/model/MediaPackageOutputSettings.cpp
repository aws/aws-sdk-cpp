/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageOutputSettings.h>
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

MediaPackageOutputSettings::MediaPackageOutputSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPackageOutputSettings& MediaPackageOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaPackageV2DestinationSettings"))
  {
    m_mediaPackageV2DestinationSettings = jsonValue.GetObject("mediaPackageV2DestinationSettings");
    m_mediaPackageV2DestinationSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPackageV2DestinationSettingsHasBeenSet)
  {
   payload.WithObject("mediaPackageV2DestinationSettings", m_mediaPackageV2DestinationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
