/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateSegmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSegmentRequest::CreateSegmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_writeSegmentRequestHasBeenSet(false)
{
}

Aws::String CreateSegmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_writeSegmentRequestHasBeenSet)
  {
   payload = m_writeSegmentRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




