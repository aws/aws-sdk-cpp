﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportJobRequestHasBeenSet)
  {
   payload = m_exportJobRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




