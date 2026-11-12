/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpPushStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpPushStreamDetails::RtmpPushStreamDetails(JsonView jsonValue) { *this = jsonValue; }

RtmpPushStreamDetails& RtmpPushStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamName")) {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpPushStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_streamNameHasBeenSet) {
    payload.WithString("streamName", m_streamName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
