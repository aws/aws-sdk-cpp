﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AssignOpportunityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssignOpportunityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assigneeHasBeenSet)
  {
   payload.WithObject("Assignee", m_assignee.Jsonize());

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssignOpportunityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.AssignOpportunity"));
  return headers;

}




