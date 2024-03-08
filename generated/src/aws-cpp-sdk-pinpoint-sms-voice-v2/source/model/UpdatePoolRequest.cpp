/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdatePoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePoolRequest::UpdatePoolRequest() : 
    m_poolIdHasBeenSet(false),
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
    m_deletionProtectionEnabledHasBeenSet(false)
{
}

Aws::String UpdatePoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdatePool"));
  return headers;

}




