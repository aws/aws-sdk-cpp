/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/NdiMediaInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

NdiMediaInfo::NdiMediaInfo(JsonView jsonValue) { *this = jsonValue; }

NdiMediaInfo& NdiMediaInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("streams")) {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("streams");
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiMediaInfo::Jsonize() const {
  JsonValue payload;

  if (m_streamsHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
    }
    payload.WithArray("streams", std::move(streamsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
