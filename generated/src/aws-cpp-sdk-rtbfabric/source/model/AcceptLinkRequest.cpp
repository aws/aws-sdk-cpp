/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/AcceptLinkRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptLinkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_attributesHasBeenSet) {
    payload.WithObject("attributes", m_attributes.Jsonize());
  }

  if (m_logSettingsHasBeenSet) {
    payload.WithObject("logSettings", m_logSettings.Jsonize());
  }

  return payload.View().WriteReadable();
}
