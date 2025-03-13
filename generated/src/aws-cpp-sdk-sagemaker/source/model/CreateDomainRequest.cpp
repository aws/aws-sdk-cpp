/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_authModeHasBeenSet)
  {
   payload.WithString("AuthMode", AuthModeMapper::GetNameForAuthMode(m_authMode));
  }

  if(m_defaultUserSettingsHasBeenSet)
  {
   payload.WithObject("DefaultUserSettings", m_defaultUserSettings.Jsonize());

  }

  if(m_domainSettingsHasBeenSet)
  {
   payload.WithObject("DomainSettings", m_domainSettings.Jsonize());

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

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

  if(m_appNetworkAccessTypeHasBeenSet)
  {
   payload.WithString("AppNetworkAccessType", AppNetworkAccessTypeMapper::GetNameForAppNetworkAccessType(m_appNetworkAccessType));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_appSecurityGroupManagementHasBeenSet)
  {
   payload.WithString("AppSecurityGroupManagement", AppSecurityGroupManagementMapper::GetNameForAppSecurityGroupManagement(m_appSecurityGroupManagement));
  }

  if(m_tagPropagationHasBeenSet)
  {
   payload.WithString("TagPropagation", TagPropagationMapper::GetNameForTagPropagation(m_tagPropagation));
  }

  if(m_defaultSpaceSettingsHasBeenSet)
  {
   payload.WithObject("DefaultSpaceSettings", m_defaultSpaceSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateDomain"));
  return headers;

}




