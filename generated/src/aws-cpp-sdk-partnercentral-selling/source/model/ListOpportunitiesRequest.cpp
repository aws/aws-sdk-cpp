/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListOpportunitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListOpportunitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithObject("LastModifiedDate", m_lastModifiedDate.Jsonize());

  }

  if(m_identifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifierJsonList(m_identifier.size());
   for(unsigned identifierIndex = 0; identifierIndex < identifierJsonList.GetLength(); ++identifierIndex)
   {
     identifierJsonList[identifierIndex].AsString(m_identifier[identifierIndex]);
   }
   payload.WithArray("Identifier", std::move(identifierJsonList));

  }

  if(m_lifeCycleStageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifeCycleStageJsonList(m_lifeCycleStage.size());
   for(unsigned lifeCycleStageIndex = 0; lifeCycleStageIndex < lifeCycleStageJsonList.GetLength(); ++lifeCycleStageIndex)
   {
     lifeCycleStageJsonList[lifeCycleStageIndex].AsString(StageMapper::GetNameForStage(m_lifeCycleStage[lifeCycleStageIndex]));
   }
   payload.WithArray("LifeCycleStage", std::move(lifeCycleStageJsonList));

  }

  if(m_lifeCycleReviewStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifeCycleReviewStatusJsonList(m_lifeCycleReviewStatus.size());
   for(unsigned lifeCycleReviewStatusIndex = 0; lifeCycleReviewStatusIndex < lifeCycleReviewStatusJsonList.GetLength(); ++lifeCycleReviewStatusIndex)
   {
     lifeCycleReviewStatusJsonList[lifeCycleReviewStatusIndex].AsString(ReviewStatusMapper::GetNameForReviewStatus(m_lifeCycleReviewStatus[lifeCycleReviewStatusIndex]));
   }
   payload.WithArray("LifeCycleReviewStatus", std::move(lifeCycleReviewStatusJsonList));

  }

  if(m_customerCompanyNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerCompanyNameJsonList(m_customerCompanyName.size());
   for(unsigned customerCompanyNameIndex = 0; customerCompanyNameIndex < customerCompanyNameJsonList.GetLength(); ++customerCompanyNameIndex)
   {
     customerCompanyNameJsonList[customerCompanyNameIndex].AsString(m_customerCompanyName[customerCompanyNameIndex]);
   }
   payload.WithArray("CustomerCompanyName", std::move(customerCompanyNameJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListOpportunitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListOpportunities"));
  return headers;

}




