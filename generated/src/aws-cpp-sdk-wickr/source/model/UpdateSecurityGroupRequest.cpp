/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/UpdateSecurityGroupRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSecurityGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_securityGroupSettingsHasBeenSet) {
    payload.WithObject("securityGroupSettings", m_securityGroupSettings.Jsonize());
  }

  return payload.View().WriteReadable();
}
