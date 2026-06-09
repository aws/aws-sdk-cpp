/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceQuickSightResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceQuickSightResourceDetails::SpaceQuickSightResourceDetails(JsonView jsonValue) { *this = jsonValue; }

SpaceQuickSightResourceDetails& SpaceQuickSightResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceQuickSightResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
