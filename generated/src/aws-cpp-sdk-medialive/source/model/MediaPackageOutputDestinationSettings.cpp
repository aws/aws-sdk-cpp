/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageOutputDestinationSettings.h>
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

MediaPackageOutputDestinationSettings::MediaPackageOutputDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPackageOutputDestinationSettings& MediaPackageOutputDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelGroup"))
  {
    m_channelGroup = jsonValue.GetString("channelGroup");
    m_channelGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageOutputDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_channelGroupHasBeenSet)
  {
   payload.WithString("channelGroup", m_channelGroup);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
