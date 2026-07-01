/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateContainerAssociationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContainerAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_containerAssociationNameHasBeenSet) {
    payload.WithString("ContainerAssociationName", m_containerAssociationName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ContainerMonitoringTypeMapper::GetNameForContainerMonitoringType(m_type));
  }

  if (m_containerMonitoringConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> containerMonitoringConfigurationsJsonList(m_containerMonitoringConfigurations.size());
    for (unsigned containerMonitoringConfigurationsIndex = 0;
         containerMonitoringConfigurationsIndex < containerMonitoringConfigurationsJsonList.GetLength();
         ++containerMonitoringConfigurationsIndex) {
      containerMonitoringConfigurationsJsonList[containerMonitoringConfigurationsIndex].AsObject(
          m_containerMonitoringConfigurations[containerMonitoringConfigurationsIndex].Jsonize());
    }
    payload.WithArray("ContainerMonitoringConfigurations", std::move(containerMonitoringConfigurationsJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContainerAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateContainerAssociation"));
  return headers;
}
