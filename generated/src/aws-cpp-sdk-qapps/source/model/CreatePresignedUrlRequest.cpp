﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CreatePresignedUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresignedUrlRequest::CreatePresignedUrlRequest() : 
    m_instanceIdHasBeenSet(false),
    m_cardIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_fileContentsSha256HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_scope(DocumentScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String CreatePresignedUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cardIdHasBeenSet)
  {
   payload.WithString("cardId", m_cardId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_fileContentsSha256HasBeenSet)
  {
   payload.WithString("fileContentsSha256", m_fileContentsSha256);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", DocumentScopeMapper::GetNameForDocumentScope(m_scope));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePresignedUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_instanceIdHasBeenSet)
  {
    ss << m_instanceId;
    headers.emplace("instance-id",  ss.str());
    ss.str("");
  }

  return headers;

}




