/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/CloudConnectorSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

CloudConnectorSummary::CloudConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

CloudConnectorSummary& CloudConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CloudConnectorId")) {
    m_cloudConnectorId = jsonValue.GetString("CloudConnectorId");
    m_cloudConnectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("Provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfigConnectorArn")) {
    m_configConnectorArn = jsonValue.GetString("ConfigConnectorArn");
    m_configConnectorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_cloudConnectorIdHasBeenSet) {
    payload.WithString("CloudConnectorId", m_cloudConnectorId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_providerHasBeenSet) {
    payload.WithString("Provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_configConnectorArnHasBeenSet) {
    payload.WithString("ConfigConnectorArn", m_configConnectorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
