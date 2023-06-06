/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SignPayloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SignPayloadRequest::SignPayloadRequest() : 
    m_profileNameHasBeenSet(false),
    m_profileOwnerHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_payloadFormatHasBeenSet(false)
{
}

Aws::String SignPayloadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("profileName", m_profileName);

  }

  if(m_profileOwnerHasBeenSet)
  {
   payload.WithString("profileOwner", m_profileOwner);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", HashingUtils::Base64Encode(m_payload));
  }

  if(m_payloadFormatHasBeenSet)
  {
   payload.WithString("payloadFormat", m_payloadFormat);

  }

  return payload.View().WriteReadable();
}




