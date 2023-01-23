/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociateOpsItemRelatedItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateOpsItemRelatedItemRequest::AssociateOpsItemRelatedItemRequest() : 
    m_opsItemIdHasBeenSet(false),
    m_associationTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceUriHasBeenSet(false)
{
}

Aws::String AssociateOpsItemRelatedItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", m_associationType);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceUriHasBeenSet)
  {
   payload.WithString("ResourceUri", m_resourceUri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateOpsItemRelatedItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.AssociateOpsItemRelatedItem"));
  return headers;

}




