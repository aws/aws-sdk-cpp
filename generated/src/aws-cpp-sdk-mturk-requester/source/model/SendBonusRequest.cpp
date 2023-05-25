/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/SendBonusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendBonusRequest::SendBonusRequest() : 
    m_workerIdHasBeenSet(false),
    m_bonusAmountHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_uniqueRequestTokenHasBeenSet(false)
{
}

Aws::String SendBonusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_bonusAmountHasBeenSet)
  {
   payload.WithString("BonusAmount", m_bonusAmount);

  }

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_uniqueRequestTokenHasBeenSet)
  {
   payload.WithString("UniqueRequestToken", m_uniqueRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendBonusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.SendBonus"));
  return headers;

}




