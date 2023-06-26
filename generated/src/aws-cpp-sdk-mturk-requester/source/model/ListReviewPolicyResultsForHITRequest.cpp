/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest() : 
    m_hITIdHasBeenSet(false),
    m_policyLevelsHasBeenSet(false),
    m_retrieveActions(false),
    m_retrieveActionsHasBeenSet(false),
    m_retrieveResults(false),
    m_retrieveResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListReviewPolicyResultsForHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_policyLevelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyLevelsJsonList(m_policyLevels.size());
   for(unsigned policyLevelsIndex = 0; policyLevelsIndex < policyLevelsJsonList.GetLength(); ++policyLevelsIndex)
   {
     policyLevelsJsonList[policyLevelsIndex].AsString(ReviewPolicyLevelMapper::GetNameForReviewPolicyLevel(m_policyLevels[policyLevelsIndex]));
   }
   payload.WithArray("PolicyLevels", std::move(policyLevelsJsonList));

  }

  if(m_retrieveActionsHasBeenSet)
  {
   payload.WithBool("RetrieveActions", m_retrieveActions);

  }

  if(m_retrieveResultsHasBeenSet)
  {
   payload.WithBool("RetrieveResults", m_retrieveResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListReviewPolicyResultsForHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListReviewPolicyResultsForHIT"));
  return headers;

}




