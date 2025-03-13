/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/RegisterComputeNodeGroupInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PCS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterComputeNodeGroupInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_bootstrapIdHasBeenSet)
  {
   payload.WithString("bootstrapId", m_bootstrapId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterComputeNodeGroupInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSParallelComputingService.RegisterComputeNodeGroupInstance"));
  return headers;

}




