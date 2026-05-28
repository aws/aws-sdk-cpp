/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/System.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

System::System(JsonView jsonValue) { *this = jsonValue; }

System& System::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemArn")) {
    m_systemArn = jsonValue.GetString("systemArn");
    m_systemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemId")) {
    m_systemId = jsonValue.GetString("systemId");
    m_systemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharingEnabled")) {
    m_sharingEnabled = jsonValue.GetBool("sharingEnabled");
    m_sharingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ouId")) {
    m_ouId = jsonValue.GetString("ouId");
    m_ouIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue System::Jsonize() const {
  JsonValue payload;

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_systemIdHasBeenSet) {
    payload.WithString("systemId", m_systemId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_sharingEnabledHasBeenSet) {
    payload.WithBool("sharingEnabled", m_sharingEnabled);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_organizationIdHasBeenSet) {
    payload.WithString("organizationId", m_organizationId);
  }

  if (m_ouIdHasBeenSet) {
    payload.WithString("ouId", m_ouId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
