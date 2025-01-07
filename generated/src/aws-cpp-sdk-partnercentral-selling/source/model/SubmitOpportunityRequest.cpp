/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SubmitOpportunityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubmitOpportunityRequest::SubmitOpportunityRequest() : 
    m_catalogHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_involvementType(SalesInvolvementType::NOT_SET),
    m_involvementTypeHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

Aws::String SubmitOpportunityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_involvementTypeHasBeenSet)
  {
   payload.WithString("InvolvementType", SalesInvolvementTypeMapper::GetNameForSalesInvolvementType(m_involvementType));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SubmitOpportunityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.SubmitOpportunity"));
  return headers;

}




