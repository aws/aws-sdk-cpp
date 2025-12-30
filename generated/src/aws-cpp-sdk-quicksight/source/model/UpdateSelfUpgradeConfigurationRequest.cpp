/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateSelfUpgradeConfigurationRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSelfUpgradeConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_selfUpgradeStatusHasBeenSet) {
    payload.WithString("SelfUpgradeStatus", SelfUpgradeStatusMapper::GetNameForSelfUpgradeStatus(m_selfUpgradeStatus));
  }

  return payload.View().WriteReadable();
}
