/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateSPICECapacityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSPICECapacityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_purchaseModeHasBeenSet)
  {
   payload.WithString("PurchaseMode", PurchaseModeMapper::GetNameForPurchaseMode(m_purchaseMode));
  }

  return payload.View().WriteReadable();
}




