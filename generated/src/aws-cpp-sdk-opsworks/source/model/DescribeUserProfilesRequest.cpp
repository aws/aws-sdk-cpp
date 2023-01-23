/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeUserProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUserProfilesRequest::DescribeUserProfilesRequest() : 
    m_iamUserArnsHasBeenSet(false)
{
}

Aws::String DescribeUserProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iamUserArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iamUserArnsJsonList(m_iamUserArns.size());
   for(unsigned iamUserArnsIndex = 0; iamUserArnsIndex < iamUserArnsJsonList.GetLength(); ++iamUserArnsIndex)
   {
     iamUserArnsJsonList[iamUserArnsIndex].AsString(m_iamUserArns[iamUserArnsIndex]);
   }
   payload.WithArray("IamUserArns", std::move(iamUserArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeUserProfilesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeUserProfiles"));
  return headers;

}




