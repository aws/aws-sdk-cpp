/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeAgentVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAgentVersionsRequest::DescribeAgentVersionsRequest() : 
    m_stackIdHasBeenSet(false),
    m_configurationManagerHasBeenSet(false)
{
}

Aws::String DescribeAgentVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_configurationManagerHasBeenSet)
  {
   payload.WithObject("ConfigurationManager", m_configurationManager.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAgentVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeAgentVersions"));
  return headers;

}




