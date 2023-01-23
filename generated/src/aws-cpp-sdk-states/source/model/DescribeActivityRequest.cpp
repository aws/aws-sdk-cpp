/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeActivityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeActivityRequest::DescribeActivityRequest() : 
    m_activityArnHasBeenSet(false)
{
}

Aws::String DescribeActivityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activityArnHasBeenSet)
  {
   payload.WithString("activityArn", m_activityArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeActivityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.DescribeActivity"));
  return headers;

}




