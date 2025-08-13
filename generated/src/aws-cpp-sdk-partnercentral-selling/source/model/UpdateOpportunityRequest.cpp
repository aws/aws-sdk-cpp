/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/UpdateOpportunityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOpportunityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_primaryNeedsFromAwsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryNeedsFromAwsJsonList(m_primaryNeedsFromAws.size());
   for(unsigned primaryNeedsFromAwsIndex = 0; primaryNeedsFromAwsIndex < primaryNeedsFromAwsJsonList.GetLength(); ++primaryNeedsFromAwsIndex)
   {
     primaryNeedsFromAwsJsonList[primaryNeedsFromAwsIndex].AsString(PrimaryNeedFromAwsMapper::GetNameForPrimaryNeedFromAws(m_primaryNeedsFromAws[primaryNeedsFromAwsIndex]));
   }
   payload.WithArray("PrimaryNeedsFromAws", std::move(primaryNeedsFromAwsJsonList));

  }

  if(m_nationalSecurityHasBeenSet)
  {
   payload.WithString("NationalSecurity", NationalSecurityMapper::GetNameForNationalSecurity(m_nationalSecurity));
  }

  if(m_partnerOpportunityIdentifierHasBeenSet)
  {
   payload.WithString("PartnerOpportunityIdentifier", m_partnerOpportunityIdentifier);

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("Project", m_project.Jsonize());

  }

  if(m_opportunityTypeHasBeenSet)
  {
   payload.WithString("OpportunityType", OpportunityTypeMapper::GetNameForOpportunityType(m_opportunityType));
  }

  if(m_marketingHasBeenSet)
  {
   payload.WithObject("Marketing", m_marketing.Jsonize());

  }

  if(m_softwareRevenueHasBeenSet)
  {
   payload.WithObject("SoftwareRevenue", m_softwareRevenue.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithObject("LifeCycle", m_lifeCycle.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOpportunityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.UpdateOpportunity"));
  return headers;

}




