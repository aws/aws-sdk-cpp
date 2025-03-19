/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateBrandAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrandAssignmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_brandArnHasBeenSet)
  {
   payload.WithString("BrandArn", m_brandArn);

  }

  return payload.View().WriteReadable();
}




