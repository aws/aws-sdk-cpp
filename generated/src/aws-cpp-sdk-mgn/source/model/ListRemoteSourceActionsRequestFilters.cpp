/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListRemoteSourceActionsRequestFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListRemoteSourceActionsRequestFilters::ListRemoteSourceActionsRequestFilters(JsonView jsonValue) { *this = jsonValue; }

ListRemoteSourceActionsRequestFilters& ListRemoteSourceActionsRequestFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteSourceActionIDs")) {
    Aws::Utils::Array<JsonView> remoteSourceActionIDsJsonList = jsonValue.GetArray("remoteSourceActionIDs");
    for (unsigned remoteSourceActionIDsIndex = 0; remoteSourceActionIDsIndex < remoteSourceActionIDsJsonList.GetLength();
         ++remoteSourceActionIDsIndex) {
      m_remoteSourceActionIDs.push_back(remoteSourceActionIDsJsonList[remoteSourceActionIDsIndex].AsString());
    }
    m_remoteSourceActionIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListRemoteSourceActionsRequestFilters::Jsonize() const {
  JsonValue payload;

  if (m_remoteSourceActionIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> remoteSourceActionIDsJsonList(m_remoteSourceActionIDs.size());
    for (unsigned remoteSourceActionIDsIndex = 0; remoteSourceActionIDsIndex < remoteSourceActionIDsJsonList.GetLength();
         ++remoteSourceActionIDsIndex) {
      remoteSourceActionIDsJsonList[remoteSourceActionIDsIndex].AsString(m_remoteSourceActionIDs[remoteSourceActionIDsIndex]);
    }
    payload.WithArray("remoteSourceActionIDs", std::move(remoteSourceActionIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
