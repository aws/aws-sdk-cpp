/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutConfigurationSetDeliveryOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tlsPolicyHasBeenSet)
  {
   payload.WithString("TlsPolicy", TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy));
  }

  if(m_sendingPoolNameHasBeenSet)
  {
   payload.WithString("SendingPoolName", m_sendingPoolName);

  }

  return payload.View().WriteReadable();
}




