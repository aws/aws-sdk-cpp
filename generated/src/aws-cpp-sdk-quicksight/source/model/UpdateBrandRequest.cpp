/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateBrandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_brandDefinitionHasBeenSet)
  {
   payload.WithObject("BrandDefinition", m_brandDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




