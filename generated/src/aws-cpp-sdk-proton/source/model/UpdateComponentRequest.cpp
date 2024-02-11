/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateComponentRequest::UpdateComponentRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_deploymentType(ComponentDeploymentUpdateType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceSpecHasBeenSet(false),
    m_templateFileHasBeenSet(false)
{
}

Aws::String UpdateComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", ComponentDeploymentUpdateTypeMapper::GetNameForComponentDeploymentUpdateType(m_deploymentType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_serviceSpecHasBeenSet)
  {
   payload.WithString("serviceSpec", m_serviceSpec);

  }

  if(m_templateFileHasBeenSet)
  {
   payload.WithString("templateFile", m_templateFile);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateComponent"));
  return headers;

}




