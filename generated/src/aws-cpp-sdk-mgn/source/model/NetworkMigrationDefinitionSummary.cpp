/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationDefinitionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationDefinitionSummary::NetworkMigrationDefinitionSummary(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationDefinitionSummary& NetworkMigrationDefinitionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEnvironment")) {
    m_sourceEnvironment = SourceEnvironmentMapper::GetSourceEnvironmentForName(jsonValue.GetString("sourceEnvironment"));
    m_sourceEnvironmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeTags")) {
    Aws::Map<Aws::String, JsonView> scopeTagsJsonMap = jsonValue.GetObject("scopeTags").GetAllObjects();
    for (auto& scopeTagsItem : scopeTagsJsonMap) {
      m_scopeTags[scopeTagsItem.first] = scopeTagsItem.second.AsString();
    }
    m_scopeTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationDefinitionSummary::Jsonize() const {
  JsonValue payload;

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sourceEnvironmentHasBeenSet) {
    payload.WithString("sourceEnvironment", SourceEnvironmentMapper::GetNameForSourceEnvironment(m_sourceEnvironment));
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_scopeTagsHasBeenSet) {
    JsonValue scopeTagsJsonMap;
    for (auto& scopeTagsItem : m_scopeTags) {
      scopeTagsJsonMap.WithString(scopeTagsItem.first, scopeTagsItem.second);
    }
    payload.WithObject("scopeTags", std::move(scopeTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
