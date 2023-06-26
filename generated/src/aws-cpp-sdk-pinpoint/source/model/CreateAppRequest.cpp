/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppRequest::CreateAppRequest() : 
    m_createApplicationRequestHasBeenSet(false)
{
}

Aws::String CreateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createApplicationRequestHasBeenSet)
  {
   payload = m_createApplicationRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




