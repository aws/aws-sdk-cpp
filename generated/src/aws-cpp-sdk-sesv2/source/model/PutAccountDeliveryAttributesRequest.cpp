/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/PutAccountDeliveryAttributesRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountDeliveryAttributesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sharedPoolDeliveryModeHasBeenSet) {
    payload.WithString("SharedPoolDeliveryMode",
                       AccountSharedPoolDeliveryModeMapper::GetNameForAccountSharedPoolDeliveryMode(m_sharedPoolDeliveryMode));
  }

  return payload.View().WriteReadable();
}
