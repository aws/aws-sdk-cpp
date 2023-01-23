/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListDomainsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDomainsRequest::ListDomainsRequest() : 
    m_nextPageTokenHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_maximumPageSize(0),
    m_maximumPageSizeHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false)
{
}

Aws::String ListDomainsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("nextPageToken", m_nextPageToken);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_maximumPageSizeHasBeenSet)
  {
   payload.WithInteger("maximumPageSize", m_maximumPageSize);

  }

  if(m_reverseOrderHasBeenSet)
  {
   payload.WithBool("reverseOrder", m_reverseOrder);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDomainsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.ListDomains"));
  return headers;

}




