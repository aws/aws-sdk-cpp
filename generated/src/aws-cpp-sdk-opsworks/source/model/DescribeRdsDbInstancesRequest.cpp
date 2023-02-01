/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeRdsDbInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRdsDbInstancesRequest::DescribeRdsDbInstancesRequest() : 
    m_stackIdHasBeenSet(false),
    m_rdsDbInstanceArnsHasBeenSet(false)
{
}

Aws::String DescribeRdsDbInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_rdsDbInstanceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rdsDbInstanceArnsJsonList(m_rdsDbInstanceArns.size());
   for(unsigned rdsDbInstanceArnsIndex = 0; rdsDbInstanceArnsIndex < rdsDbInstanceArnsJsonList.GetLength(); ++rdsDbInstanceArnsIndex)
   {
     rdsDbInstanceArnsJsonList[rdsDbInstanceArnsIndex].AsString(m_rdsDbInstanceArns[rdsDbInstanceArnsIndex]);
   }
   payload.WithArray("RdsDbInstanceArns", std::move(rdsDbInstanceArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRdsDbInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeRdsDbInstances"));
  return headers;

}




