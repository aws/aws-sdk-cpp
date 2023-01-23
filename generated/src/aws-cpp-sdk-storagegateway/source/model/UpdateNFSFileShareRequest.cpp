/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateNFSFileShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNFSFileShareRequest::UpdateNFSFileShareRequest() : 
    m_fileShareARNHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_nFSFileShareDefaultsHasBeenSet(false),
    m_defaultStorageClassHasBeenSet(false),
    m_objectACL(ObjectACL::NOT_SET),
    m_objectACLHasBeenSet(false),
    m_clientListHasBeenSet(false),
    m_squashHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_guessMIMETypeEnabled(false),
    m_guessMIMETypeEnabledHasBeenSet(false),
    m_requesterPays(false),
    m_requesterPaysHasBeenSet(false),
    m_fileShareNameHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_notificationPolicyHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false)
{
}

Aws::String UpdateNFSFileShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_kMSEncryptedHasBeenSet)
  {
   payload.WithBool("KMSEncrypted", m_kMSEncrypted);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_nFSFileShareDefaultsHasBeenSet)
  {
   payload.WithObject("NFSFileShareDefaults", m_nFSFileShareDefaults.Jsonize());

  }

  if(m_defaultStorageClassHasBeenSet)
  {
   payload.WithString("DefaultStorageClass", m_defaultStorageClass);

  }

  if(m_objectACLHasBeenSet)
  {
   payload.WithString("ObjectACL", ObjectACLMapper::GetNameForObjectACL(m_objectACL));
  }

  if(m_clientListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientListJsonList(m_clientList.size());
   for(unsigned clientListIndex = 0; clientListIndex < clientListJsonList.GetLength(); ++clientListIndex)
   {
     clientListJsonList[clientListIndex].AsString(m_clientList[clientListIndex]);
   }
   payload.WithArray("ClientList", std::move(clientListJsonList));

  }

  if(m_squashHasBeenSet)
  {
   payload.WithString("Squash", m_squash);

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

  if(m_auditDestinationARNHasBeenSet)
  {
   payload.WithString("AuditDestinationARN", m_auditDestinationARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNFSFileShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateNFSFileShare"));
  return headers;

}




