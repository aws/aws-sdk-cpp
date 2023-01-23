/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ChannelsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ChannelsResponse::ChannelsResponse() : 
    m_channelsHasBeenSet(false)
{
}

ChannelsResponse::ChannelsResponse(JsonView jsonValue) : 
    m_channelsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelsResponse& ChannelsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Channels"))
  {
    Aws::Map<Aws::String, JsonView> channelsJsonMap = jsonValue.GetObject("Channels").GetAllObjects();
    for(auto& channelsItem : channelsJsonMap)
    {
      m_channels[channelsItem.first] = channelsItem.second.AsObject();
    }
    m_channelsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   JsonValue channelsJsonMap;
   for(auto& channelsItem : m_channels)
   {
     channelsJsonMap.WithObject(channelsItem.first, channelsItem.second.Jsonize());
   }
   payload.WithObject("Channels", std::move(channelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
