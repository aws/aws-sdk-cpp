/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceResourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceResourceSummary::SpaceResourceSummary(JsonView jsonValue) { *this = jsonValue; }

SpaceResourceSummary& SpaceResourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = SpaceQuickSightResourceTypeMapper::GetSpaceQuickSightResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceDetails")) {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceName")) {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceResourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", SpaceQuickSightResourceTypeMapper::GetNameForSpaceQuickSightResourceType(m_resourceType));
  }

  if (m_resourceDetailsHasBeenSet) {
    payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("ResourceName", m_resourceName);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
