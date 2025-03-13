/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateQuickSightQSearchConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQuickSightQSearchConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_qSearchStatusHasBeenSet)
  {
   payload.WithString("QSearchStatus", QSearchStatusMapper::GetNameForQSearchStatus(m_qSearchStatus));
  }

  return payload.View().WriteReadable();
}




