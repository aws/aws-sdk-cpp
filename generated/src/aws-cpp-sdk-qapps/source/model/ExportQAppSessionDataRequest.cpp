﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/ExportQAppSessionDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportQAppSessionDataRequest::ExportQAppSessionDataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String ExportQAppSessionDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportQAppSessionDataRequest::GetRequestSpecificHeaders() const
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




