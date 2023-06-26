/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PutCoreNetworkPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutCoreNetworkPolicyRequest::PutCoreNetworkPolicyRequest() : 
    m_coreNetworkIdHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_latestVersionId(0),
    m_latestVersionIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String PutCoreNetworkPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("PolicyDocument", m_policyDocument);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_latestVersionIdHasBeenSet)
  {
   payload.WithInteger("LatestVersionId", m_latestVersionId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




