/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateInboundConnectorRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateInboundConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_inboundConnectorConfigurationHasBeenSet) {
    payload.WithObject("InboundConnectorConfiguration", m_inboundConnectorConfiguration.Jsonize());
  }

  if (m_inboundConnectorStatusHasBeenSet) {
    payload.WithString("InboundConnectorStatus", InboundConnectorStatusMapper::GetNameForInboundConnectorStatus(m_inboundConnectorStatus));
  }

  return payload.View().WriteReadable();
}
