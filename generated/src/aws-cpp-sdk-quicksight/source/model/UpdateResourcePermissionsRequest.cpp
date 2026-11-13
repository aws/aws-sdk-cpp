/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateResourcePermissionsRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResourcePermissionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_roleTypeHasBeenSet) {
    payload.WithString("RoleType", ServiceRoleTypeMapper::GetNameForServiceRoleType(m_roleType));
  }

  if (m_customerManagedRoleArnHasBeenSet) {
    payload.WithString("CustomerManagedRoleArn", m_customerManagedRoleArn);
  }

  return payload.View().WriteReadable();
}
