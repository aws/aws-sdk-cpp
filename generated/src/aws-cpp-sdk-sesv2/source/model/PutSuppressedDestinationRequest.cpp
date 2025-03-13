/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutSuppressedDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSuppressedDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", SuppressionListReasonMapper::GetNameForSuppressionListReason(m_reason));
  }

  return payload.View().WriteReadable();
}




