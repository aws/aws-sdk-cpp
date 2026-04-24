/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/CollectionGroupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

CollectionGroupSummary::CollectionGroupSummary(JsonView jsonValue) { *this = jsonValue; }

CollectionGroupSummary& CollectionGroupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfCollections")) {
    m_numberOfCollections = jsonValue.GetInteger("numberOfCollections");
    m_numberOfCollectionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdDate")) {
    m_createdDate = jsonValue.GetInt64("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityLimits")) {
    m_capacityLimits = jsonValue.GetObject("capacityLimits");
    m_capacityLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectionGroupSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_numberOfCollectionsHasBeenSet) {
    payload.WithInteger("numberOfCollections", m_numberOfCollections);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithInt64("createdDate", m_createdDate);
  }

  if (m_capacityLimitsHasBeenSet) {
    payload.WithObject("capacityLimits", m_capacityLimits.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
