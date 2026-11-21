/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateInboundConnectorApplicationAssociationsRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateInboundConnectorApplicationAssociationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_associateAccessControlApplicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associateAccessControlApplicationsJsonList(m_associateAccessControlApplications.size());
    for (unsigned associateAccessControlApplicationsIndex = 0;
         associateAccessControlApplicationsIndex < associateAccessControlApplicationsJsonList.GetLength();
         ++associateAccessControlApplicationsIndex) {
      associateAccessControlApplicationsJsonList[associateAccessControlApplicationsIndex].AsString(
          m_associateAccessControlApplications[associateAccessControlApplicationsIndex]);
    }
    payload.WithArray("AssociateAccessControlApplications", std::move(associateAccessControlApplicationsJsonList));
  }

  if (m_disassociateAccessControlApplicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> disassociateAccessControlApplicationsJsonList(m_disassociateAccessControlApplications.size());
    for (unsigned disassociateAccessControlApplicationsIndex = 0;
         disassociateAccessControlApplicationsIndex < disassociateAccessControlApplicationsJsonList.GetLength();
         ++disassociateAccessControlApplicationsIndex) {
      disassociateAccessControlApplicationsJsonList[disassociateAccessControlApplicationsIndex].AsString(
          m_disassociateAccessControlApplications[disassociateAccessControlApplicationsIndex]);
    }
    payload.WithArray("DisassociateAccessControlApplications", std::move(disassociateAccessControlApplicationsJsonList));
  }

  return payload.View().WriteReadable();
}
