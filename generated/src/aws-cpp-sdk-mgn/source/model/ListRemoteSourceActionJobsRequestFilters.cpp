/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListRemoteSourceActionJobsRequestFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListRemoteSourceActionJobsRequestFilters::ListRemoteSourceActionJobsRequestFilters(JsonView jsonValue) { *this = jsonValue; }

ListRemoteSourceActionJobsRequestFilters& ListRemoteSourceActionJobsRequestFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteSourceActionJobIDs")) {
    Aws::Utils::Array<JsonView> remoteSourceActionJobIDsJsonList = jsonValue.GetArray("remoteSourceActionJobIDs");
    for (unsigned remoteSourceActionJobIDsIndex = 0; remoteSourceActionJobIDsIndex < remoteSourceActionJobIDsJsonList.GetLength();
         ++remoteSourceActionJobIDsIndex) {
      m_remoteSourceActionJobIDs.push_back(remoteSourceActionJobIDsJsonList[remoteSourceActionJobIDsIndex].AsString());
    }
    m_remoteSourceActionJobIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListRemoteSourceActionJobsRequestFilters::Jsonize() const {
  JsonValue payload;

  if (m_remoteSourceActionJobIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> remoteSourceActionJobIDsJsonList(m_remoteSourceActionJobIDs.size());
    for (unsigned remoteSourceActionJobIDsIndex = 0; remoteSourceActionJobIDsIndex < remoteSourceActionJobIDsJsonList.GetLength();
         ++remoteSourceActionJobIDsIndex) {
      remoteSourceActionJobIDsJsonList[remoteSourceActionJobIDsIndex].AsString(m_remoteSourceActionJobIDs[remoteSourceActionJobIDsIndex]);
    }
    payload.WithArray("remoteSourceActionJobIDs", std::move(remoteSourceActionJobIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
