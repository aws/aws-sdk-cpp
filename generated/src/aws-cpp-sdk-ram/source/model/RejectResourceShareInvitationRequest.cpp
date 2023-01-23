/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/RejectResourceShareInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectResourceShareInvitationRequest::RejectResourceShareInvitationRequest() : 
    m_resourceShareInvitationArnHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String RejectResourceShareInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceShareInvitationArnHasBeenSet)
  {
   payload.WithString("resourceShareInvitationArn", m_resourceShareInvitationArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




