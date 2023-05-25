/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDocumentRequest::CreateDocumentRequest() : 
    m_contentHasBeenSet(false),
    m_requiresHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_requiresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresJsonList(m_requires.size());
   for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
   {
     requiresJsonList[requiresIndex].AsObject(m_requires[requiresIndex].Jsonize());
   }
   payload.WithArray("Requires", std::move(requiresJsonList));

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("Attachments", std::move(attachmentsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentTypeMapper::GetNameForDocumentType(m_documentType));
  }

  if(m_documentFormatHasBeenSet)
  {
   payload.WithString("DocumentFormat", DocumentFormatMapper::GetNameForDocumentFormat(m_documentFormat));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

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

Aws::Http::HeaderValueCollection CreateDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateDocument"));
  return headers;

}




