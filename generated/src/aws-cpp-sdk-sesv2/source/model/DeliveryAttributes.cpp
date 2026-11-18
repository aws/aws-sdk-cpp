/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/DeliveryAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

DeliveryAttributes::DeliveryAttributes(JsonView jsonValue) { *this = jsonValue; }

DeliveryAttributes& DeliveryAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SharedPoolDeliveryMode")) {
    m_sharedPoolDeliveryMode =
        AccountSharedPoolDeliveryModeMapper::GetAccountSharedPoolDeliveryModeForName(jsonValue.GetString("SharedPoolDeliveryMode"));
    m_sharedPoolDeliveryModeHasBeenSet = true;
  }
  return *this;
}

JsonValue DeliveryAttributes::Jsonize() const {
  JsonValue payload;

  if (m_sharedPoolDeliveryModeHasBeenSet) {
    payload.WithString("SharedPoolDeliveryMode",
                       AccountSharedPoolDeliveryModeMapper::GetNameForAccountSharedPoolDeliveryMode(m_sharedPoolDeliveryMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
