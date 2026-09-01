/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/UpdateConfigurationSetRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConfigurationSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_configurationSetNameHasBeenSet) {
    payload.WithString("ConfigurationSetName", m_configurationSetName);
  }

  if (m_messageSecurityOptionsHasBeenSet) {
    payload.WithObject("MessageSecurityOptions", m_messageSecurityOptions.Jsonize());
  }

  return payload.View().WriteReadable();
}
