/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

StartNetworkMigrationMappingUpdateSegment::StartNetworkMigrationMappingUpdateSegment(JsonView jsonValue) { *this = jsonValue; }

StartNetworkMigrationMappingUpdateSegment& StartNetworkMigrationMappingUpdateSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetAccount")) {
    m_targetAccount = jsonValue.GetString("targetAccount");
    m_targetAccountHasBeenSet = true;
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

JsonValue StartNetworkMigrationMappingUpdateSegment::Jsonize() const {
  JsonValue payload;

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_targetAccountHasBeenSet) {
    payload.WithString("targetAccount", m_targetAccount);
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
