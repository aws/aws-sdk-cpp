/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/InitiateDocumentVersionUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InitiateDocumentVersionUploadRequest::InitiateDocumentVersionUploadRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentCreatedTimestampHasBeenSet(false),
    m_contentModifiedTimestampHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_documentSizeInBytes(0),
    m_documentSizeInBytesHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false)
{
}

Aws::String InitiateDocumentVersionUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_contentCreatedTimestampHasBeenSet)
  {
   payload.WithDouble("ContentCreatedTimestamp", m_contentCreatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_contentModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ContentModifiedTimestamp", m_contentModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_documentSizeInBytesHasBeenSet)
  {
   payload.WithInt64("DocumentSizeInBytes", m_documentSizeInBytes);

  }

  if(m_parentFolderIdHasBeenSet)
  {
   payload.WithString("ParentFolderId", m_parentFolderId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InitiateDocumentVersionUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




