/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  return payload.View().WriteReadable();
}




