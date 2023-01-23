/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/MoveAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MoveAccountRequest::MoveAccountRequest() : 
    m_accountIdHasBeenSet(false),
    m_sourceParentIdHasBeenSet(false),
    m_destinationParentIdHasBeenSet(false)
{
}

Aws::String MoveAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_sourceParentIdHasBeenSet)
  {
   payload.WithString("SourceParentId", m_sourceParentId);

  }

  if(m_destinationParentIdHasBeenSet)
  {
   payload.WithString("DestinationParentId", m_destinationParentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MoveAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.MoveAccount"));
  return headers;

}




