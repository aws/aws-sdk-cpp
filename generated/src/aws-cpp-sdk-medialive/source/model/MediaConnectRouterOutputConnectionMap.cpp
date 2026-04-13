/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaConnectRouterOutputConnectionMap.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaConnectRouterOutputConnectionMap::MediaConnectRouterOutputConnectionMap(JsonView jsonValue) { *this = jsonValue; }

MediaConnectRouterOutputConnectionMap& MediaConnectRouterOutputConnectionMap::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pipeline0")) {
    m_pipeline0 = jsonValue.GetString("pipeline0");
    m_pipeline0HasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipeline1")) {
    m_pipeline1 = jsonValue.GetString("pipeline1");
    m_pipeline1HasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectRouterOutputConnectionMap::Jsonize() const {
  JsonValue payload;

  if (m_pipeline0HasBeenSet) {
    payload.WithString("pipeline0", m_pipeline0);
  }

  if (m_pipeline1HasBeenSet) {
    payload.WithString("pipeline1", m_pipeline1);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
