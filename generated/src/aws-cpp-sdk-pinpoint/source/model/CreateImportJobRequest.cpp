/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importJobRequestHasBeenSet)
  {
   payload = m_importJobRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




