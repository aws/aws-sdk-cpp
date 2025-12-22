/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/BatchDeviceSuccessResponseItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

BatchDeviceSuccessResponseItem::BatchDeviceSuccessResponseItem(JsonView jsonValue) { *this = jsonValue; }

BatchDeviceSuccessResponseItem& BatchDeviceSuccessResponseItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeviceSuccessResponseItem::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
