/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/StartExportJobV2Request.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartExportJobV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("Destination", m_destination.Jsonize());
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("OutputConfiguration", m_outputConfiguration.Jsonize());
  }

  if (m_scopesHasBeenSet) {
    payload.WithObject("Scopes", m_scopes.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
