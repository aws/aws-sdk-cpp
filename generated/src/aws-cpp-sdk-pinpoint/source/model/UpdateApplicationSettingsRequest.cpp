/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateApplicationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApplicationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_writeApplicationSettingsRequestHasBeenSet)
  {
   payload = m_writeApplicationSettingsRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




