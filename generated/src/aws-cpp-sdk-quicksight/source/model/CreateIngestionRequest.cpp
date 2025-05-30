﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateIngestionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIngestionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ingestionTypeHasBeenSet)
  {
   payload.WithString("IngestionType", IngestionTypeMapper::GetNameForIngestionType(m_ingestionType));
  }

  return payload.View().WriteReadable();
}




