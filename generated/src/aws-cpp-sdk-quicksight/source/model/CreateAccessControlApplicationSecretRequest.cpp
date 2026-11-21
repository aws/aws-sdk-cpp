/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateAccessControlApplicationSecretRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAccessControlApplicationSecretRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_clientSecretConfigurationHasBeenSet) {
    payload.WithObject("ClientSecretConfiguration", m_clientSecretConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
