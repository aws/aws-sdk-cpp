/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceResourceOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceResourceOperation::SpaceResourceOperation(JsonView jsonValue) { *this = jsonValue; }

SpaceResourceOperation& SpaceResourceOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = SpaceQuickSightResourceTypeMapper::GetSpaceQuickSightResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceDetails")) {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceResourceOperation::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", SpaceQuickSightResourceTypeMapper::GetNameForSpaceQuickSightResourceType(m_resourceType));
  }

  if (m_resourceDetailsHasBeenSet) {
    payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
