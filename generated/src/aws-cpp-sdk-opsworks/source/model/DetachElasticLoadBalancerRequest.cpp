/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DetachElasticLoadBalancerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachElasticLoadBalancerRequest::DetachElasticLoadBalancerRequest() : 
    m_elasticLoadBalancerNameHasBeenSet(false),
    m_layerIdHasBeenSet(false)
{
}

Aws::String DetachElasticLoadBalancerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticLoadBalancerNameHasBeenSet)
  {
   payload.WithString("ElasticLoadBalancerName", m_elasticLoadBalancerName);

  }

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachElasticLoadBalancerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DetachElasticLoadBalancer"));
  return headers;

}




