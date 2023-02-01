/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DisassociateElasticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateElasticIpRequest::DisassociateElasticIpRequest() : 
    m_elasticIpHasBeenSet(false)
{
}

Aws::String DisassociateElasticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateElasticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DisassociateElasticIp"));
  return headers;

}




