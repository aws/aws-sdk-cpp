/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SetRtmpPushSourceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SetRtmpPushSourceSettings::SetRtmpPushSourceSettings(JsonView jsonValue) { *this = jsonValue; }

SetRtmpPushSourceSettings& SetRtmpPushSourceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("namingConfiguration")) {
    m_namingConfiguration = jsonValue.GetObject("namingConfiguration");
    m_namingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SetRtmpPushSourceSettings::Jsonize() const {
  JsonValue payload;

  if (m_namingConfigurationHasBeenSet) {
    payload.WithObject("namingConfiguration", m_namingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
