/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ConnectorSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ConnectorSummary::ConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

ConnectorSummary& ConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConnectorArn")) {
    m_connectorArn = jsonValue.GetString("ConnectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectorId")) {
    m_connectorId = jsonValue.GetString("ConnectorId");
    m_connectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProviderSummary")) {
    m_providerSummary = jsonValue.GetObject("ProviderSummary");
    m_providerSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnablementStatus")) {
    m_enablementStatus = EnablementStatusMapper::GetEnablementStatusForName(jsonValue.GetString("EnablementStatus"));
    m_enablementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnablementStatusReason")) {
    m_enablementStatusReason = jsonValue.GetString("EnablementStatusReason");
    m_enablementStatusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_connectorArnHasBeenSet) {
    payload.WithString("ConnectorArn", m_connectorArn);
  }

  if (m_connectorIdHasBeenSet) {
    payload.WithString("ConnectorId", m_connectorId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_providerSummaryHasBeenSet) {
    payload.WithObject("ProviderSummary", m_providerSummary.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_enablementStatusHasBeenSet) {
    payload.WithString("EnablementStatus", EnablementStatusMapper::GetNameForEnablementStatus(m_enablementStatus));
  }

  if (m_enablementStatusReasonHasBeenSet) {
    payload.WithString("EnablementStatusReason", m_enablementStatusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
