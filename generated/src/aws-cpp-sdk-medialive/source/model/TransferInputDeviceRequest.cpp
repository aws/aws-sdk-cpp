/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TransferInputDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TransferInputDeviceRequest::TransferInputDeviceRequest() : 
    m_inputDeviceIdHasBeenSet(false),
    m_targetCustomerIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_transferMessageHasBeenSet(false)
{
}

Aws::String TransferInputDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetCustomerIdHasBeenSet)
  {
   payload.WithString("targetCustomerId", m_targetCustomerId);

  }

  if(m_targetRegionHasBeenSet)
  {
   payload.WithString("targetRegion", m_targetRegion);

  }

  if(m_transferMessageHasBeenSet)
  {
   payload.WithString("transferMessage", m_transferMessage);

  }

  return payload.View().WriteReadable();
}




