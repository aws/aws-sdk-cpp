/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UserLimits.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UserLimits::UserLimits(JsonView jsonValue) { *this = jsonValue; }

UserLimits& UserLimits::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effectiveLimits")) {
    Aws::Utils::Array<JsonView> effectiveLimitsJsonList = jsonValue.GetArray("effectiveLimits");
    for (unsigned effectiveLimitsIndex = 0; effectiveLimitsIndex < effectiveLimitsJsonList.GetLength(); ++effectiveLimitsIndex) {
      m_effectiveLimits.push_back(effectiveLimitsJsonList[effectiveLimitsIndex].AsObject());
    }
    m_effectiveLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue UserLimits::Jsonize() const {
  JsonValue payload;

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_effectiveLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> effectiveLimitsJsonList(m_effectiveLimits.size());
    for (unsigned effectiveLimitsIndex = 0; effectiveLimitsIndex < effectiveLimitsJsonList.GetLength(); ++effectiveLimitsIndex) {
      effectiveLimitsJsonList[effectiveLimitsIndex].AsObject(m_effectiveLimits[effectiveLimitsIndex].Jsonize());
    }
    payload.WithArray("effectiveLimits", std::move(effectiveLimitsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
