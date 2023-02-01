/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImportHubContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportHubContentRequest::ImportHubContentRequest() : 
    m_hubContentNameHasBeenSet(false),
    m_hubContentVersionHasBeenSet(false),
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentTypeHasBeenSet(false),
    m_documentSchemaVersionHasBeenSet(false),
    m_hubNameHasBeenSet(false),
    m_hubContentDisplayNameHasBeenSet(false),
    m_hubContentDescriptionHasBeenSet(false),
    m_hubContentMarkdownHasBeenSet(false),
    m_hubContentDocumentHasBeenSet(false),
    m_hubContentSearchKeywordsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportHubContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubContentNameHasBeenSet)
  {
   payload.WithString("HubContentName", m_hubContentName);

  }

  if(m_hubContentVersionHasBeenSet)
  {
   payload.WithString("HubContentVersion", m_hubContentVersion);

  }

  if(m_hubContentTypeHasBeenSet)
  {
   payload.WithString("HubContentType", HubContentTypeMapper::GetNameForHubContentType(m_hubContentType));
  }

  if(m_documentSchemaVersionHasBeenSet)
  {
   payload.WithString("DocumentSchemaVersion", m_documentSchemaVersion);

  }

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubContentDisplayNameHasBeenSet)
  {
   payload.WithString("HubContentDisplayName", m_hubContentDisplayName);

  }

  if(m_hubContentDescriptionHasBeenSet)
  {
   payload.WithString("HubContentDescription", m_hubContentDescription);

  }

  if(m_hubContentMarkdownHasBeenSet)
  {
   payload.WithString("HubContentMarkdown", m_hubContentMarkdown);

  }

  if(m_hubContentDocumentHasBeenSet)
  {
   payload.WithString("HubContentDocument", m_hubContentDocument);

  }

  if(m_hubContentSearchKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hubContentSearchKeywordsJsonList(m_hubContentSearchKeywords.size());
   for(unsigned hubContentSearchKeywordsIndex = 0; hubContentSearchKeywordsIndex < hubContentSearchKeywordsJsonList.GetLength(); ++hubContentSearchKeywordsIndex)
   {
     hubContentSearchKeywordsJsonList[hubContentSearchKeywordsIndex].AsString(m_hubContentSearchKeywords[hubContentSearchKeywordsIndex]);
   }
   payload.WithArray("HubContentSearchKeywords", std::move(hubContentSearchKeywordsJsonList));

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

Aws::Http::HeaderValueCollection ImportHubContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ImportHubContent"));
  return headers;

}




