/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UpdateServiceRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_associatedSystemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedSystemsJsonList(m_associatedSystems.size());
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      associatedSystemsJsonList[associatedSystemsIndex].AsObject(m_associatedSystems[associatedSystemsIndex].Jsonize());
    }
    payload.WithArray("associatedSystems", std::move(associatedSystemsJsonList));
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_permissionModelHasBeenSet) {
    payload.WithObject("permissionModel", m_permissionModel.Jsonize());
  }

  if (m_dependencyDiscoveryHasBeenSet) {
    payload.WithString("dependencyDiscovery", DependencyDiscoveryInputMapper::GetNameForDependencyDiscoveryInput(m_dependencyDiscovery));
  }

  if (m_reportConfigurationHasBeenSet) {
    payload.WithObject("reportConfiguration", m_reportConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
