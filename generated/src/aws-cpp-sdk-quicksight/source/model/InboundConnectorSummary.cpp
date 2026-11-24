/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/InboundConnectorSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

InboundConnectorSummary::InboundConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

InboundConnectorSummary& InboundConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InboundConnectorId")) {
    m_inboundConnectorId = jsonValue.GetString("InboundConnectorId");
    m_inboundConnectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InboundConnectorStatusMapper::GetInboundConnectorStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantUrl")) {
    m_tenantUrl = jsonValue.GetString("TenantUrl");
    m_tenantUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InboundConnectorConfiguration")) {
    m_inboundConnectorConfiguration = jsonValue.GetObject("InboundConnectorConfiguration");
    m_inboundConnectorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_inboundConnectorIdHasBeenSet) {
    payload.WithString("InboundConnectorId", m_inboundConnectorId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", InboundConnectorStatusMapper::GetNameForInboundConnectorStatus(m_status));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_tenantUrlHasBeenSet) {
    payload.WithString("TenantUrl", m_tenantUrl);
  }

  if (m_inboundConnectorConfigurationHasBeenSet) {
    payload.WithObject("InboundConnectorConfiguration", m_inboundConnectorConfiguration.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
