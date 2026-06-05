/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UserIndexCapacityFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UserIndexCapacityFilter::UserIndexCapacityFilter(JsonView jsonValue) { *this = jsonValue; }

UserIndexCapacityFilter& UserIndexCapacityFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userNameOrEmail")) {
    m_userNameOrEmail = jsonValue.GetObject("userNameOrEmail");
    m_userNameOrEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCapacityBytes")) {
    m_totalCapacityBytes = jsonValue.GetObject("totalCapacityBytes");
    m_totalCapacityBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIndexCapacityFilter::Jsonize() const {
  JsonValue payload;

  if (m_userNameOrEmailHasBeenSet) {
    payload.WithObject("userNameOrEmail", m_userNameOrEmail.Jsonize());
  }

  if (m_totalCapacityBytesHasBeenSet) {
    payload.WithObject("totalCapacityBytes", m_totalCapacityBytes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
