/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SegmentCreateOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SegmentCreateOperation::SegmentCreateOperation(JsonView jsonValue) { *this = jsonValue; }

SegmentCreateOperation& SegmentCreateOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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

JsonValue SegmentCreateOperation::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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
