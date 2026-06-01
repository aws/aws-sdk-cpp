/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceQuickSightResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceQuickSightResource::SpaceQuickSightResource(JsonView jsonValue) { *this = jsonValue; }

SpaceQuickSightResource& SpaceQuickSightResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = SpaceQuickSightResourceTypeMapper::GetSpaceQuickSightResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceDetails")) {
    m_resourceDetails = jsonValue.GetObject("resourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceQuickSightResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", SpaceQuickSightResourceTypeMapper::GetNameForSpaceQuickSightResourceType(m_resourceType));
  }

  if (m_resourceDetailsHasBeenSet) {
    payload.WithObject("resourceDetails", m_resourceDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
