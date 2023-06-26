/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/RevokeSignatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeSignatureRequest::RevokeSignatureRequest() : 
    m_jobIdHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String RevokeSignatureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobOwnerHasBeenSet)
  {
   payload.WithString("jobOwner", m_jobOwner);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload.View().WriteReadable();
}




