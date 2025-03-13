/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/GetAwsOpportunitySummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAwsOpportunitySummaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_relatedOpportunityIdentifierHasBeenSet)
  {
   payload.WithString("RelatedOpportunityIdentifier", m_relatedOpportunityIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAwsOpportunitySummaryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.GetAwsOpportunitySummary"));
  return headers;

}




