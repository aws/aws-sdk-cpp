/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaLiveChannelRouterInputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaLiveChannelRouterInputStreamDetails::MediaLiveChannelRouterInputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

MediaLiveChannelRouterInputStreamDetails& MediaLiveChannelRouterInputStreamDetails::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue MediaLiveChannelRouterInputStreamDetails::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
