/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/CreateOpportunityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOpportunityRequest::SerializePayload() const
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithObject("LifeCycle", m_lifeCycle.Jsonize());

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", OpportunityOriginMapper::GetNameForOpportunityOrigin(m_origin));
  }

  if(m_opportunityTeamHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> opportunityTeamJsonList(m_opportunityTeam.size());
   for(unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex)
   {
     opportunityTeamJsonList[opportunityTeamIndex].AsObject(m_opportunityTeam[opportunityTeamIndex].Jsonize());
   }
   payload.WithArray("OpportunityTeam", std::move(opportunityTeamJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOpportunityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.CreateOpportunity"));
  return headers;

}




