/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AssociateOpportunityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateOpportunityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_opportunityIdentifierHasBeenSet)
  {
   payload.WithString("OpportunityIdentifier", m_opportunityIdentifier);

  }

  if(m_relatedEntityTypeHasBeenSet)
  {
   payload.WithString("RelatedEntityType", RelatedEntityTypeMapper::GetNameForRelatedEntityType(m_relatedEntityType));
  }

  if(m_relatedEntityIdentifierHasBeenSet)
  {
   payload.WithString("RelatedEntityIdentifier", m_relatedEntityIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateOpportunityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.AssociateOpportunity"));
  return headers;

}




