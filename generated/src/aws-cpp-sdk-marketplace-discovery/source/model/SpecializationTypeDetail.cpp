/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SpecializationTypeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SpecializationTypeDetail::SpecializationTypeDetail(JsonView jsonValue) { *this = jsonValue; }

SpecializationTypeDetail& SpecializationTypeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("specializationType")) {
    m_specializationType = SpecializationTypeMapper::GetSpecializationTypeForName(jsonValue.GetString("specializationType"));
    m_specializationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SpecializationTypeDetail::Jsonize() const {
  JsonValue payload;

  if (m_specializationTypeHasBeenSet) {
    payload.WithString("specializationType", SpecializationTypeMapper::GetNameForSpecializationType(m_specializationType));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
