/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListAssignmentsForHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssignmentsForHITRequest::ListAssignmentsForHITRequest() : 
    m_hITIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_assignmentStatusesHasBeenSet(false)
{
}

Aws::String ListAssignmentsForHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_assignmentStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assignmentStatusesJsonList(m_assignmentStatuses.size());
   for(unsigned assignmentStatusesIndex = 0; assignmentStatusesIndex < assignmentStatusesJsonList.GetLength(); ++assignmentStatusesIndex)
   {
     assignmentStatusesJsonList[assignmentStatusesIndex].AsString(AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatuses[assignmentStatusesIndex]));
   }
   payload.WithArray("AssignmentStatuses", std::move(assignmentStatusesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAssignmentsForHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListAssignmentsForHIT"));
  return headers;

}




