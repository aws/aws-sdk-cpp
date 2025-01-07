﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UpdateQAppSessionMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQAppSessionMetadataRequest::UpdateQAppSessionMetadataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_sharingConfigurationHasBeenSet(false)
{
}

Aws::String UpdateQAppSessionMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_sessionNameHasBeenSet)
  {
   payload.WithString("sessionName", m_sessionName);

  }

  if(m_sharingConfigurationHasBeenSet)
  {
   payload.WithObject("sharingConfiguration", m_sharingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateQAppSessionMetadataRequest::GetRequestSpecificHeaders() const
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




