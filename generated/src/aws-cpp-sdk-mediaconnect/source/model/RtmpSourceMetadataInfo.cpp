/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpSourceMetadataInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpSourceMetadataInfo::RtmpSourceMetadataInfo(JsonView jsonValue) { *this = jsonValue; }

RtmpSourceMetadataInfo& RtmpSourceMetadataInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamName")) {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaInfo")) {
    m_mediaInfo = jsonValue.GetObject("mediaInfo");
    m_mediaInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpSourceMetadataInfo::Jsonize() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_streamNameHasBeenSet) {
    payload.WithString("streamName", m_streamName);
  }

  if (m_mediaInfoHasBeenSet) {
    payload.WithObject("mediaInfo", m_mediaInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
