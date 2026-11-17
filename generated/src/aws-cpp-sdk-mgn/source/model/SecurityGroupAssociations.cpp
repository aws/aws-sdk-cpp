/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SecurityGroupAssociations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SecurityGroupAssociations::SecurityGroupAssociations(JsonView jsonValue) { *this = jsonValue; }

SecurityGroupAssociations& SecurityGroupAssociations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cidrs")) {
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for (unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex) {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmUUIDs")) {
    Aws::Utils::Array<JsonView> vmUUIDsJsonList = jsonValue.GetArray("vmUUIDs");
    for (unsigned vmUUIDsIndex = 0; vmUUIDsIndex < vmUUIDsJsonList.GetLength(); ++vmUUIDsIndex) {
      m_vmUUIDs.push_back(vmUUIDsJsonList[vmUUIDsIndex].AsString());
    }
    m_vmUUIDsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userProvidedIDs")) {
    Aws::Utils::Array<JsonView> userProvidedIDsJsonList = jsonValue.GetArray("userProvidedIDs");
    for (unsigned userProvidedIDsIndex = 0; userProvidedIDsIndex < userProvidedIDsJsonList.GetLength(); ++userProvidedIDsIndex) {
      m_userProvidedIDs.push_back(userProvidedIDsJsonList[userProvidedIDsIndex].AsString());
    }
    m_userProvidedIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityGroupAssociations::Jsonize() const {
  JsonValue payload;

  if (m_cidrsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
    for (unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex) {
      cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
    }
    payload.WithArray("cidrs", std::move(cidrsJsonList));
  }

  if (m_vmUUIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vmUUIDsJsonList(m_vmUUIDs.size());
    for (unsigned vmUUIDsIndex = 0; vmUUIDsIndex < vmUUIDsJsonList.GetLength(); ++vmUUIDsIndex) {
      vmUUIDsJsonList[vmUUIDsIndex].AsString(m_vmUUIDs[vmUUIDsIndex]);
    }
    payload.WithArray("vmUUIDs", std::move(vmUUIDsJsonList));
  }

  if (m_userProvidedIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> userProvidedIDsJsonList(m_userProvidedIDs.size());
    for (unsigned userProvidedIDsIndex = 0; userProvidedIDsIndex < userProvidedIDsJsonList.GetLength(); ++userProvidedIDsIndex) {
      userProvidedIDsJsonList[userProvidedIDsIndex].AsString(m_userProvidedIDs[userProvidedIDsIndex]);
    }
    payload.WithArray("userProvidedIDs", std::move(userProvidedIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
