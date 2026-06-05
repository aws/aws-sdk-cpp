/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UserIndexCapacity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UserIndexCapacity::UserIndexCapacity(JsonView jsonValue) { *this = jsonValue; }

UserIndexCapacity& UserIndexCapacity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userArn")) {
    m_userArn = jsonValue.GetString("userArn");
    m_userArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCapacityBytes")) {
    m_totalCapacityBytes = jsonValue.GetInt64("totalCapacityBytes");
    m_totalCapacityBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalKBCapacityBytes")) {
    m_totalKBCapacityBytes = jsonValue.GetInt64("totalKBCapacityBytes");
    m_totalKBCapacityBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSpaceCapacityBytes")) {
    m_totalSpaceCapacityBytes = jsonValue.GetInt64("totalSpaceCapacityBytes");
    m_totalSpaceCapacityBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kbCount")) {
    m_kbCount = jsonValue.GetInteger("kbCount");
    m_kbCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceCount")) {
    m_spaceCount = jsonValue.GetInteger("spaceCount");
    m_spaceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIndexCapacity::Jsonize() const {
  JsonValue payload;

  if (m_userArnHasBeenSet) {
    payload.WithString("userArn", m_userArn);
  }

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", m_role);
  }

  if (m_totalCapacityBytesHasBeenSet) {
    payload.WithInt64("totalCapacityBytes", m_totalCapacityBytes);
  }

  if (m_totalKBCapacityBytesHasBeenSet) {
    payload.WithInt64("totalKBCapacityBytes", m_totalKBCapacityBytes);
  }

  if (m_totalSpaceCapacityBytesHasBeenSet) {
    payload.WithInt64("totalSpaceCapacityBytes", m_totalSpaceCapacityBytes);
  }

  if (m_kbCountHasBeenSet) {
    payload.WithInteger("kbCount", m_kbCount);
  }

  if (m_spaceCountHasBeenSet) {
    payload.WithInteger("spaceCount", m_spaceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
