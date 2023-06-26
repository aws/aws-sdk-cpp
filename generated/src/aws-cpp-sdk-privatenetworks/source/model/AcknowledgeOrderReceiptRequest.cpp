/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/AcknowledgeOrderReceiptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcknowledgeOrderReceiptRequest::AcknowledgeOrderReceiptRequest() : 
    m_orderArnHasBeenSet(false)
{
}

Aws::String AcknowledgeOrderReceiptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_orderArnHasBeenSet)
  {
   payload.WithString("orderArn", m_orderArn);

  }

  return payload.View().WriteReadable();
}




