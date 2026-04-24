/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateActionConnectorRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateActionConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_authenticationConfigHasBeenSet) {
    payload.WithObject("AuthenticationConfig", m_authenticationConfig.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_vpcConnectionArnHasBeenSet) {
    payload.WithString("VpcConnectionArn", m_vpcConnectionArn);
  }

  return payload.View().WriteReadable();
}
