﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateQPersonalizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQPersonalizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_personalizationModeHasBeenSet)
  {
   payload.WithString("PersonalizationMode", PersonalizationModeMapper::GetNameForPersonalizationMode(m_personalizationMode));
  }

  return payload.View().WriteReadable();
}




