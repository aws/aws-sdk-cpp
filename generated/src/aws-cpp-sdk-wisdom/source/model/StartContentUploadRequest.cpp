/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/StartContentUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartContentUploadRequest::StartContentUploadRequest() : 
    m_contentTypeHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_presignedUrlTimeToLive(0),
    m_presignedUrlTimeToLiveHasBeenSet(false)
{
}

Aws::String StartContentUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_presignedUrlTimeToLiveHasBeenSet)
  {
   payload.WithInteger("presignedUrlTimeToLive", m_presignedUrlTimeToLive);

  }

  return payload.View().WriteReadable();
}




