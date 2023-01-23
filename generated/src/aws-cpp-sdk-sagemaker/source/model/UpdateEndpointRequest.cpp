/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointRequest::UpdateEndpointRequest() : 
    m_endpointNameHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_retainAllVariantProperties(false),
    m_retainAllVariantPropertiesHasBeenSet(false),
    m_excludeRetainedVariantPropertiesHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false),
    m_retainDeploymentConfig(false),
    m_retainDeploymentConfigHasBeenSet(false)
{
}

Aws::String UpdateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_retainAllVariantPropertiesHasBeenSet)
  {
   payload.WithBool("RetainAllVariantProperties", m_retainAllVariantProperties);

  }

  if(m_excludeRetainedVariantPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeRetainedVariantPropertiesJsonList(m_excludeRetainedVariantProperties.size());
   for(unsigned excludeRetainedVariantPropertiesIndex = 0; excludeRetainedVariantPropertiesIndex < excludeRetainedVariantPropertiesJsonList.GetLength(); ++excludeRetainedVariantPropertiesIndex)
   {
     excludeRetainedVariantPropertiesJsonList[excludeRetainedVariantPropertiesIndex].AsObject(m_excludeRetainedVariantProperties[excludeRetainedVariantPropertiesIndex].Jsonize());
   }
   payload.WithArray("ExcludeRetainedVariantProperties", std::move(excludeRetainedVariantPropertiesJsonList));

  }

  if(m_deploymentConfigHasBeenSet)
  {
   payload.WithObject("DeploymentConfig", m_deploymentConfig.Jsonize());

  }

  if(m_retainDeploymentConfigHasBeenSet)
  {
   payload.WithBool("RetainDeploymentConfig", m_retainDeploymentConfig);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateEndpoint"));
  return headers;

}




