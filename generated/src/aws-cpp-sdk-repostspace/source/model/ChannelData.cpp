/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/ChannelData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace repostspace
{
namespace Model
{

ChannelData::ChannelData(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelData& ChannelData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spaceId"))
  {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelDescription"))
  {
    m_channelDescription = jsonValue.GetString("channelDescription");
    m_channelDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createDateTime"))
  {
    m_createDateTime = jsonValue.GetString("createDateTime");
    m_createDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteDateTime"))
  {
    m_deleteDateTime = jsonValue.GetString("deleteDateTime");
    m_deleteDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelStatus"))
  {
    m_channelStatus = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("channelStatus"));
    m_channelStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");
    m_userCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupCount"))
  {
    m_groupCount = jsonValue.GetInteger("groupCount");
    m_groupCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelData::Jsonize() const
{
  JsonValue payload;

  if(m_spaceIdHasBeenSet)
  {
   payload.WithString("spaceId", m_spaceId);

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_channelDescriptionHasBeenSet)
  {
   payload.WithString("channelDescription", m_channelDescription);

  }

  if(m_createDateTimeHasBeenSet)
  {
   payload.WithString("createDateTime", m_createDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deleteDateTimeHasBeenSet)
  {
   payload.WithString("deleteDateTime", m_deleteDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_channelStatusHasBeenSet)
  {
   payload.WithString("channelStatus", ChannelStatusMapper::GetNameForChannelStatus(m_channelStatus));
  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("userCount", m_userCount);

  }

  if(m_groupCountHasBeenSet)
  {
   payload.WithInteger("groupCount", m_groupCount);

  }

  return payload;
}

} // namespace Model
} // namespace repostspace
} // namespace Aws
