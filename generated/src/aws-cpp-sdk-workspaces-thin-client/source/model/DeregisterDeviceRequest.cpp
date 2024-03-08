/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/DeregisterDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesThinClient::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterDeviceRequest::DeregisterDeviceRequest() : 
    m_idHasBeenSet(false),
    m_targetDeviceStatus(TargetDeviceStatus::NOT_SET),
    m_targetDeviceStatusHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DeregisterDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetDeviceStatusHasBeenSet)
  {
   payload.WithString("targetDeviceStatus", TargetDeviceStatusMapper::GetNameForTargetDeviceStatus(m_targetDeviceStatus));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




