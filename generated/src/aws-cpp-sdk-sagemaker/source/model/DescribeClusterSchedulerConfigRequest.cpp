/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeClusterSchedulerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeClusterSchedulerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterSchedulerConfigIdHasBeenSet)
  {
   payload.WithString("ClusterSchedulerConfigId", m_clusterSchedulerConfigId);

  }

  if(m_clusterSchedulerConfigVersionHasBeenSet)
  {
   payload.WithInteger("ClusterSchedulerConfigVersion", m_clusterSchedulerConfigVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeClusterSchedulerConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeClusterSchedulerConfig"));
  return headers;

}




