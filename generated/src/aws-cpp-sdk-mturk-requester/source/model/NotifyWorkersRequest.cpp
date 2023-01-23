/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/NotifyWorkersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyWorkersRequest::NotifyWorkersRequest() : 
    m_subjectHasBeenSet(false),
    m_messageTextHasBeenSet(false),
    m_workerIdsHasBeenSet(false)
{
}

Aws::String NotifyWorkersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_messageTextHasBeenSet)
  {
   payload.WithString("MessageText", m_messageText);

  }

  if(m_workerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workerIdsJsonList(m_workerIds.size());
   for(unsigned workerIdsIndex = 0; workerIdsIndex < workerIdsJsonList.GetLength(); ++workerIdsIndex)
   {
     workerIdsJsonList[workerIdsIndex].AsString(m_workerIds[workerIdsIndex]);
   }
   payload.WithArray("WorkerIds", std::move(workerIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyWorkersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.NotifyWorkers"));
  return headers;

}




