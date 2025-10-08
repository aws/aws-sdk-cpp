/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/StartOutpostDecommissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartOutpostDecommissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_validateOnlyHasBeenSet)
  {
   payload.WithBool("ValidateOnly", m_validateOnly);

  }

  return payload.View().WriteReadable();
}




