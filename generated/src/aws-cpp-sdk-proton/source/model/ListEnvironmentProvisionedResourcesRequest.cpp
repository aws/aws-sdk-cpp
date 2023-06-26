/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentProvisionedResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEnvironmentProvisionedResourcesRequest::ListEnvironmentProvisionedResourcesRequest() : 
    m_environmentNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListEnvironmentProvisionedResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEnvironmentProvisionedResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.ListEnvironmentProvisionedResources"));
  return headers;

}




