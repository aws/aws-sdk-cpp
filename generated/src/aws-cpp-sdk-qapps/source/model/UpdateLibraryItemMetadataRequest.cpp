﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UpdateLibraryItemMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLibraryItemMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_libraryItemIdHasBeenSet)
  {
   payload.WithString("libraryItemId", m_libraryItemId);

  }

  if(m_isVerifiedHasBeenSet)
  {
   payload.WithBool("isVerified", m_isVerified);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLibraryItemMetadataRequest::GetRequestSpecificHeaders() const
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




