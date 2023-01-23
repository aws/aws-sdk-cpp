/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/CreateMemberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMemberRequest::CreateMemberRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_invitationIdHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_memberConfigurationHasBeenSet(false)
{
}

Aws::String CreateMemberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  if(m_memberConfigurationHasBeenSet)
  {
   payload.WithObject("MemberConfiguration", m_memberConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




