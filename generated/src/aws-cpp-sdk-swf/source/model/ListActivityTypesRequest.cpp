﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListActivityTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListActivityTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("nextPageToken", m_nextPageToken);

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

Aws::Http::HeaderValueCollection ListActivityTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.ListActivityTypes"));
  return headers;

}




