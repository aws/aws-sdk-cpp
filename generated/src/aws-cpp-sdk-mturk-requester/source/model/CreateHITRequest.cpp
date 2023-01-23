/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/CreateHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHITRequest::CreateHITRequest() : 
    m_maxAssignments(0),
    m_maxAssignmentsHasBeenSet(false),
    m_autoApprovalDelayInSeconds(0),
    m_autoApprovalDelayInSecondsHasBeenSet(false),
    m_lifetimeInSeconds(0),
    m_lifetimeInSecondsHasBeenSet(false),
    m_assignmentDurationInSeconds(0),
    m_assignmentDurationInSecondsHasBeenSet(false),
    m_rewardHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_requesterAnnotationHasBeenSet(false),
    m_qualificationRequirementsHasBeenSet(false),
    m_uniqueRequestTokenHasBeenSet(false),
    m_assignmentReviewPolicyHasBeenSet(false),
    m_hITReviewPolicyHasBeenSet(false),
    m_hITLayoutIdHasBeenSet(false),
    m_hITLayoutParametersHasBeenSet(false)
{
}

Aws::String CreateHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxAssignmentsHasBeenSet)
  {
   payload.WithInteger("MaxAssignments", m_maxAssignments);

  }

  if(m_autoApprovalDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("AutoApprovalDelayInSeconds", m_autoApprovalDelayInSeconds);

  }

  if(m_lifetimeInSecondsHasBeenSet)
  {
   payload.WithInt64("LifetimeInSeconds", m_lifetimeInSeconds);

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

  if(m_questionHasBeenSet)
  {
   payload.WithString("Question", m_question);

  }

  if(m_requesterAnnotationHasBeenSet)
  {
   payload.WithString("RequesterAnnotation", m_requesterAnnotation);

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

  if(m_uniqueRequestTokenHasBeenSet)
  {
   payload.WithString("UniqueRequestToken", m_uniqueRequestToken);

  }

  if(m_assignmentReviewPolicyHasBeenSet)
  {
   payload.WithObject("AssignmentReviewPolicy", m_assignmentReviewPolicy.Jsonize());

  }

  if(m_hITReviewPolicyHasBeenSet)
  {
   payload.WithObject("HITReviewPolicy", m_hITReviewPolicy.Jsonize());

  }

  if(m_hITLayoutIdHasBeenSet)
  {
   payload.WithString("HITLayoutId", m_hITLayoutId);

  }

  if(m_hITLayoutParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hITLayoutParametersJsonList(m_hITLayoutParameters.size());
   for(unsigned hITLayoutParametersIndex = 0; hITLayoutParametersIndex < hITLayoutParametersJsonList.GetLength(); ++hITLayoutParametersIndex)
   {
     hITLayoutParametersJsonList[hITLayoutParametersIndex].AsObject(m_hITLayoutParameters[hITLayoutParametersIndex].Jsonize());
   }
   payload.WithArray("HITLayoutParameters", std::move(hITLayoutParametersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateHIT"));
  return headers;

}




