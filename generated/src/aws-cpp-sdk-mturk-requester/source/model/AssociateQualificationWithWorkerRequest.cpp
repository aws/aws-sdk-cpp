/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/AssociateQualificationWithWorkerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateQualificationWithWorkerRequest::AssociateQualificationWithWorkerRequest() : 
    m_qualificationTypeIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_sendNotification(false),
    m_sendNotificationHasBeenSet(false)
{
}

Aws::String AssociateQualificationWithWorkerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("IntegerValue", m_integerValue);

  }

  if(m_sendNotificationHasBeenSet)
  {
   payload.WithBool("SendNotification", m_sendNotification);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateQualificationWithWorkerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.AssociateQualificationWithWorker"));
  return headers;

}




