/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/UpdateLaunchConfigurationDefaultsRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLaunchConfigurationDefaultsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceServerIDHasBeenSet) {
    payload.WithString("sourceServerID", m_sourceServerID);
  }

  if (m_accountIDHasBeenSet) {
    payload.WithString("accountID", m_accountID);
  }

  if (m_smallVolumeMaxSizeHasBeenSet) {
    payload.WithInt64("smallVolumeMaxSize", m_smallVolumeMaxSize);
  }

  if (m_smallVolumeConfigurationHasBeenSet) {
    payload.WithObject("smallVolumeConfiguration", m_smallVolumeConfiguration.Jsonize());
  }

  if (m_largeVolumeConfigurationHasBeenSet) {
    payload.WithObject("largeVolumeConfiguration", m_largeVolumeConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
