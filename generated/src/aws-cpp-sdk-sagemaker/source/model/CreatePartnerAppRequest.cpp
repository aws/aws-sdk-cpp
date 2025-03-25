/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePartnerAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePartnerAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PartnerAppTypeMapper::GetNameForPartnerAppType(m_type));
  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_maintenanceConfigHasBeenSet)
  {
   payload.WithObject("MaintenanceConfig", m_maintenanceConfig.Jsonize());

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", m_tier);

  }

  if(m_applicationConfigHasBeenSet)
  {
   payload.WithObject("ApplicationConfig", m_applicationConfig.Jsonize());

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("AuthType", PartnerAppAuthTypeMapper::GetNameForPartnerAppAuthType(m_authType));
  }

  if(m_enableIamSessionBasedIdentityHasBeenSet)
  {
   payload.WithBool("EnableIamSessionBasedIdentity", m_enableIamSessionBasedIdentity);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePartnerAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreatePartnerApp"));
  return headers;

}




