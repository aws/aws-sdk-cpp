/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/RejectQualificationRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectQualificationRequestRequest::RejectQualificationRequestRequest() : 
    m_qualificationRequestIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String RejectQualificationRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_qualificationRequestIdHasBeenSet)
  {
   payload.WithString("QualificationRequestId", m_qualificationRequestId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RejectQualificationRequestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.RejectQualificationRequest"));
  return headers;

}




