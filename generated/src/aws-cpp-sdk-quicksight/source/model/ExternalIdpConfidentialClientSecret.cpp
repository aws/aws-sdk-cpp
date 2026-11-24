/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ExternalIdpConfidentialClientSecret.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ExternalIdpConfidentialClientSecret::ExternalIdpConfidentialClientSecret(JsonView jsonValue) { *this = jsonValue; }

ExternalIdpConfidentialClientSecret& ExternalIdpConfidentialClientSecret::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientSecretId")) {
    m_clientSecretId = jsonValue.GetString("ClientSecretId");
    m_clientSecretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegionalSecretManagerArns")) {
    Aws::Map<Aws::String, JsonView> regionalSecretManagerArnsJsonMap = jsonValue.GetObject("RegionalSecretManagerArns").GetAllObjects();
    for (auto& regionalSecretManagerArnsItem : regionalSecretManagerArnsJsonMap) {
      m_regionalSecretManagerArns[regionalSecretManagerArnsItem.first] = regionalSecretManagerArnsItem.second.AsString();
    }
    m_regionalSecretManagerArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalIdpConfidentialClientSecret::Jsonize() const {
  JsonValue payload;

  if (m_clientSecretIdHasBeenSet) {
    payload.WithString("ClientSecretId", m_clientSecretId);
  }

  if (m_regionalSecretManagerArnsHasBeenSet) {
    JsonValue regionalSecretManagerArnsJsonMap;
    for (auto& regionalSecretManagerArnsItem : m_regionalSecretManagerArns) {
      regionalSecretManagerArnsJsonMap.WithString(regionalSecretManagerArnsItem.first, regionalSecretManagerArnsItem.second);
    }
    payload.WithObject("RegionalSecretManagerArns", std::move(regionalSecretManagerArnsJsonMap));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
