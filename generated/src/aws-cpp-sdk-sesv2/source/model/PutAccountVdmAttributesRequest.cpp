/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutAccountVdmAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountVdmAttributesRequest::PutAccountVdmAttributesRequest() : 
    m_vdmAttributesHasBeenSet(false)
{
}

Aws::String PutAccountVdmAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vdmAttributesHasBeenSet)
  {
   payload.WithObject("VdmAttributes", m_vdmAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




