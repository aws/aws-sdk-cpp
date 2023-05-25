/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/AddAttachmentsToSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddAttachmentsToSetRequest::AddAttachmentsToSetRequest() : 
    m_attachmentSetIdHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
}

Aws::String AddAttachmentsToSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentSetIdHasBeenSet)
  {
   payload.WithString("attachmentSetId", m_attachmentSetId);

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddAttachmentsToSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.AddAttachmentsToSet"));
  return headers;

}




