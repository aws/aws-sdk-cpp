/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeploymentsRequest::DescribeDeploymentsRequest() : 
    m_stackIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_deploymentIdsHasBeenSet(false)
{
}

Aws::String DescribeDeploymentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("AppId", m_appId);

  }

  if(m_deploymentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentIdsJsonList(m_deploymentIds.size());
   for(unsigned deploymentIdsIndex = 0; deploymentIdsIndex < deploymentIdsJsonList.GetLength(); ++deploymentIdsIndex)
   {
     deploymentIdsJsonList[deploymentIdsIndex].AsString(m_deploymentIds[deploymentIdsIndex]);
   }
   payload.WithArray("DeploymentIds", std::move(deploymentIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeDeployments"));
  return headers;

}




