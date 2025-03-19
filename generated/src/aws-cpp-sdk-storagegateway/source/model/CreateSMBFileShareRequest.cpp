/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CreateSMBFileShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSMBFileShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("EncryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_defaultStorageClassHasBeenSet)
  {
   payload.WithString("DefaultStorageClass", m_defaultStorageClass);

  }

  if(m_objectACLHasBeenSet)
  {
   payload.WithString("ObjectACL", ObjectACLMapper::GetNameForObjectACL(m_objectACL));
  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  if(m_guessMIMETypeEnabledHasBeenSet)
  {
   payload.WithBool("GuessMIMETypeEnabled", m_guessMIMETypeEnabled);

  }

  if(m_requesterPaysHasBeenSet)
  {
   payload.WithBool("RequesterPays", m_requesterPays);

  }

  if(m_sMBACLEnabledHasBeenSet)
  {
   payload.WithBool("SMBACLEnabled", m_sMBACLEnabled);

  }

  if(m_accessBasedEnumerationHasBeenSet)
  {
   payload.WithBool("AccessBasedEnumeration", m_accessBasedEnumeration);

  }

  if(m_adminUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adminUserListJsonList(m_adminUserList.size());
   for(unsigned adminUserListIndex = 0; adminUserListIndex < adminUserListJsonList.GetLength(); ++adminUserListIndex)
   {
     adminUserListJsonList[adminUserListIndex].AsString(m_adminUserList[adminUserListIndex]);
   }
   payload.WithArray("AdminUserList", std::move(adminUserListJsonList));

  }

  if(m_validUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validUserListJsonList(m_validUserList.size());
   for(unsigned validUserListIndex = 0; validUserListIndex < validUserListJsonList.GetLength(); ++validUserListIndex)
   {
     validUserListJsonList[validUserListIndex].AsString(m_validUserList[validUserListIndex]);
   }
   payload.WithArray("ValidUserList", std::move(validUserListJsonList));

  }

  if(m_invalidUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidUserListJsonList(m_invalidUserList.size());
   for(unsigned invalidUserListIndex = 0; invalidUserListIndex < invalidUserListJsonList.GetLength(); ++invalidUserListIndex)
   {
     invalidUserListJsonList[invalidUserListIndex].AsString(m_invalidUserList[invalidUserListIndex]);
   }
   payload.WithArray("InvalidUserList", std::move(invalidUserListJsonList));

  }

  if(m_auditDestinationARNHasBeenSet)
  {
   payload.WithString("AuditDestinationARN", m_auditDestinationARN);

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("Authentication", m_authentication);

  }

  if(m_caseSensitivityHasBeenSet)
  {
   payload.WithString("CaseSensitivity", CaseSensitivityMapper::GetNameForCaseSensitivity(m_caseSensitivity));
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

  if(m_fileShareNameHasBeenSet)
  {
   payload.WithString("FileShareName", m_fileShareName);

  }

  if(m_cacheAttributesHasBeenSet)
  {
   payload.WithObject("CacheAttributes", m_cacheAttributes.Jsonize());

  }

  if(m_notificationPolicyHasBeenSet)
  {
   payload.WithString("NotificationPolicy", m_notificationPolicy);

  }

  if(m_vPCEndpointDNSNameHasBeenSet)
  {
   payload.WithString("VPCEndpointDNSName", m_vPCEndpointDNSName);

  }

  if(m_bucketRegionHasBeenSet)
  {
   payload.WithString("BucketRegion", m_bucketRegion);

  }

  if(m_oplocksEnabledHasBeenSet)
  {
   payload.WithBool("OplocksEnabled", m_oplocksEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSMBFileShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateSMBFileShare"));
  return headers;

}




