/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkforceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  if(m_sourceIpConfigHasBeenSet)
  {
   payload.WithObject("SourceIpConfig", m_sourceIpConfig.Jsonize());

  }

  if(m_oidcConfigHasBeenSet)
  {
   payload.WithObject("OidcConfig", m_oidcConfig.Jsonize());

  }

  if(m_workforceVpcConfigHasBeenSet)
  {
   payload.WithObject("WorkforceVpcConfig", m_workforceVpcConfig.Jsonize());

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", WorkforceIpAddressTypeMapper::GetNameForWorkforceIpAddressType(m_ipAddressType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkforceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateWorkforce"));
  return headers;

}




