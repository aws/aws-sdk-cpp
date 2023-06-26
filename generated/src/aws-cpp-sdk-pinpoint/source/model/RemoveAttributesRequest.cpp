/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/RemoveAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveAttributesRequest::RemoveAttributesRequest() : 
    m_applicationIdHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_updateAttributesRequestHasBeenSet(false)
{
}

Aws::String RemoveAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateAttributesRequestHasBeenSet)
  {
   payload = m_updateAttributesRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




