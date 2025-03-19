/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ManagedNotificationChannelAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

ManagedNotificationChannelAssociationSummary::ManagedNotificationChannelAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedNotificationChannelAssociationSummary& ManagedNotificationChannelAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelIdentifier"))
  {
    m_channelIdentifier = jsonValue.GetString("channelIdentifier");
    m_channelIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelType"))
  {
    m_channelType = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("channelType"));
    m_channelTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrideOption"))
  {
    m_overrideOption = ChannelAssociationOverrideOptionMapper::GetChannelAssociationOverrideOptionForName(jsonValue.GetString("overrideOption"));
    m_overrideOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedNotificationChannelAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdentifierHasBeenSet)
  {
   payload.WithString("channelIdentifier", m_channelIdentifier);

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("channelType", ChannelTypeMapper::GetNameForChannelType(m_channelType));
  }

  if(m_overrideOptionHasBeenSet)
  {
   payload.WithString("overrideOption", ChannelAssociationOverrideOptionMapper::GetNameForChannelAssociationOverrideOption(m_overrideOption));
  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
