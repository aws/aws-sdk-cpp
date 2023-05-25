/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/CreateHITTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHITTypeRequest::CreateHITTypeRequest() : 
    m_autoApprovalDelayInSeconds(0),
    m_autoApprovalDelayInSecondsHasBeenSet(false),
    m_assignmentDurationInSeconds(0),
    m_assignmentDurationInSecondsHasBeenSet(false),
    m_rewardHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_qualificationRequirementsHasBeenSet(false)
{
}

Aws::String CreateHITTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoApprovalDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("AutoApprovalDelayInSeconds", m_autoApprovalDelayInSeconds);

  }

  if(m_assignmentDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("AssignmentDurationInSeconds", m_assignmentDurationInSeconds);

  }

  if(m_rewardHasBeenSet)
  {
   payload.WithString("Reward", m_reward);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_keywordsHasBeenSet)
  {
   payload.WithString("Keywords", m_keywords);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_qualificationRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> qualificationRequirementsJsonList(m_qualificationRequirements.size());
   for(unsigned qualificationRequirementsIndex = 0; qualificationRequirementsIndex < qualificationRequirementsJsonList.GetLength(); ++qualificationRequirementsIndex)
   {
     qualificationRequirementsJsonList[qualificationRequirementsIndex].AsObject(m_qualificationRequirements[qualificationRequirementsIndex].Jsonize());
   }
   payload.WithArray("QualificationRequirements", std::move(qualificationRequirementsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHITTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateHITType"));
  return headers;

}




