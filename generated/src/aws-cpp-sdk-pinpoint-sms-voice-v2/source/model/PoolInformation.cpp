/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PoolInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

PoolInformation::PoolInformation() : 
    m_poolArnHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_status(PoolStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_twoWayEnabled(false),
    m_twoWayEnabledHasBeenSet(false),
    m_twoWayChannelArnHasBeenSet(false),
    m_twoWayChannelRoleHasBeenSet(false),
    m_selfManagedOptOutsEnabled(false),
    m_selfManagedOptOutsEnabledHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_sharedRoutesEnabled(false),
    m_sharedRoutesEnabledHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

PoolInformation::PoolInformation(JsonView jsonValue) : 
    m_poolArnHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_status(PoolStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_twoWayEnabled(false),
    m_twoWayEnabledHasBeenSet(false),
    m_twoWayChannelArnHasBeenSet(false),
    m_twoWayChannelRoleHasBeenSet(false),
    m_selfManagedOptOutsEnabled(false),
    m_selfManagedOptOutsEnabledHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_sharedRoutesEnabled(false),
    m_sharedRoutesEnabledHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PoolInformation& PoolInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

    m_poolArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PoolStatusMapper::GetPoolStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwoWayEnabled"))
  {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");

    m_twoWayEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwoWayChannelArn"))
  {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");

    m_twoWayChannelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwoWayChannelRole"))
  {
    m_twoWayChannelRole = jsonValue.GetString("TwoWayChannelRole");

    m_twoWayChannelRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfManagedOptOutsEnabled"))
  {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");

    m_selfManagedOptOutsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

    m_optOutListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedRoutesEnabled"))
  {
    m_sharedRoutesEnabled = jsonValue.GetBool("SharedRoutesEnabled");

    m_sharedRoutesEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");

    m_deletionProtectionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PoolInformation::Jsonize() const
{
  JsonValue payload;

  if(m_poolArnHasBeenSet)
  {
   payload.WithString("PoolArn", m_poolArn);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PoolStatusMapper::GetNameForPoolStatus(m_status));
  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_twoWayEnabledHasBeenSet)
  {
   payload.WithBool("TwoWayEnabled", m_twoWayEnabled);

  }

  if(m_twoWayChannelArnHasBeenSet)
  {
   payload.WithString("TwoWayChannelArn", m_twoWayChannelArn);

  }

  if(m_twoWayChannelRoleHasBeenSet)
  {
   payload.WithString("TwoWayChannelRole", m_twoWayChannelRole);

  }

  if(m_selfManagedOptOutsEnabledHasBeenSet)
  {
   payload.WithBool("SelfManagedOptOutsEnabled", m_selfManagedOptOutsEnabled);

  }

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_sharedRoutesEnabledHasBeenSet)
  {
   payload.WithBool("SharedRoutesEnabled", m_sharedRoutesEnabled);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
