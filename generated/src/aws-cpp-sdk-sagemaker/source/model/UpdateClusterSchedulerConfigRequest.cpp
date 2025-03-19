/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateClusterSchedulerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterSchedulerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterSchedulerConfigIdHasBeenSet)
  {
   payload.WithString("ClusterSchedulerConfigId", m_clusterSchedulerConfigId);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithInteger("TargetVersion", m_targetVersion);

  }

  if(m_schedulerConfigHasBeenSet)
  {
   payload.WithObject("SchedulerConfig", m_schedulerConfig.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterSchedulerConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateClusterSchedulerConfig"));
  return headers;

}




