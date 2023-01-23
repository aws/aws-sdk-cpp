/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/RejectInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectInvitationRequest::RejectInvitationRequest() : 
    m_invitationIdHasBeenSet(false)
{
}

Aws::String RejectInvitationRequest::SerializePayload() const
{
  return {};
}




