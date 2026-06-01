/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FailedSpaceResourceOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FailedSpaceResourceOperation::FailedSpaceResourceOperation(JsonView jsonValue) { *this = jsonValue; }

FailedSpaceResourceOperation& FailedSpaceResourceOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = SpaceQuickSightResourceTypeMapper::GetSpaceQuickSightResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceDetails")) {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedSpaceResourceOperation::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", SpaceQuickSightResourceTypeMapper::GetNameForSpaceQuickSightResourceType(m_resourceType));
  }

  if (m_resourceDetailsHasBeenSet) {
    payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
