/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/DimensionLabel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

DimensionLabel::DimensionLabel(JsonView jsonValue) { *this = jsonValue; }

DimensionLabel& DimensionLabel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("labelType")) {
    m_labelType = DimensionLabelTypeMapper::GetDimensionLabelTypeForName(jsonValue.GetString("labelType"));
    m_labelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("labelValue")) {
    m_labelValue = jsonValue.GetString("labelValue");
    m_labelValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DimensionLabel::Jsonize() const {
  JsonValue payload;

  if (m_labelTypeHasBeenSet) {
    payload.WithString("labelType", DimensionLabelTypeMapper::GetNameForDimensionLabelType(m_labelType));
  }

  if (m_labelValueHasBeenSet) {
    payload.WithString("labelValue", m_labelValue);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
