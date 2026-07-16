/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/FeatureDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

FeatureDetail::FeatureDetail(JsonView jsonValue) { *this = jsonValue; }

FeatureDetail& FeatureDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FeatureStatus")) {
    m_featureStatus = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("FeatureStatus"));
    m_featureStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FeatureDetail::Jsonize() const {
  JsonValue payload;

  if (m_featureStatusHasBeenSet) {
    payload.WithString("FeatureStatus", FeatureStatusMapper::GetNameForFeatureStatus(m_featureStatus));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
