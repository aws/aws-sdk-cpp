/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/AcceptQualificationRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptQualificationRequestRequest::AcceptQualificationRequestRequest() : 
    m_qualificationRequestIdHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false)
{
}

Aws::String AcceptQualificationRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_qualificationRequestIdHasBeenSet)
  {
   payload.WithString("QualificationRequestId", m_qualificationRequestId);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("IntegerValue", m_integerValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptQualificationRequestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.AcceptQualificationRequest"));
  return headers;

}




