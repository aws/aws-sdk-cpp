/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PCS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_slurmConfigurationHasBeenSet)
  {
   payload.WithObject("slurmConfiguration", m_slurmConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSParallelComputingService.UpdateCluster"));
  return headers;

}




