﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateTemplateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTemplateAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateVersionNumberHasBeenSet)
  {
   payload.WithInt64("TemplateVersionNumber", m_templateVersionNumber);

  }

  return payload.View().WriteReadable();
}




