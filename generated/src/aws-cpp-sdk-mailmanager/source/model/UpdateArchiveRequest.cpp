/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/UpdateArchiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateArchiveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_archiveNameHasBeenSet)
  {
   payload.WithString("ArchiveName", m_archiveName);

  }

  if(m_retentionHasBeenSet)
  {
   payload.WithObject("Retention", m_retention.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateArchiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.UpdateArchive"));
  return headers;

}




