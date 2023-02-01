/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/DescribeCreateAccountStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCreateAccountStatusRequest::DescribeCreateAccountStatusRequest() : 
    m_createAccountRequestIdHasBeenSet(false)
{
}

Aws::String DescribeCreateAccountStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createAccountRequestIdHasBeenSet)
  {
   payload.WithString("CreateAccountRequestId", m_createAccountRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCreateAccountStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DescribeCreateAccountStatus"));
  return headers;

}




