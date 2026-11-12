/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpPushSourceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpPushSourceSettings::RtmpPushSourceSettings(JsonView jsonValue) { *this = jsonValue; }

RtmpPushSourceSettings& RtmpPushSourceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamName")) {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namingType")) {
    m_namingType = RtmpPushNamingTypeMapper::GetRtmpPushNamingTypeForName(jsonValue.GetString("namingType"));
    m_namingTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpPushSourceSettings::Jsonize() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_streamNameHasBeenSet) {
    payload.WithString("streamName", m_streamName);
  }

  if (m_namingTypeHasBeenSet) {
    payload.WithString("namingType", RtmpPushNamingTypeMapper::GetNameForRtmpPushNamingType(m_namingType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
