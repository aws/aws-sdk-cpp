/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RtmpPushRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RtmpPushRouterInputConfiguration::RtmpPushRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

RtmpPushRouterInputConfiguration& RtmpPushRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namingType")) {
    m_namingType = RtmpPushNamingTypeMapper::GetRtmpPushNamingTypeForName(jsonValue.GetString("namingType"));
    m_namingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namingConfiguration")) {
    m_namingConfiguration = jsonValue.GetObject("namingConfiguration");
    m_namingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpPushRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_namingTypeHasBeenSet) {
    payload.WithString("namingType", RtmpPushNamingTypeMapper::GetNameForRtmpPushNamingType(m_namingType));
  }

  if (m_namingConfigurationHasBeenSet) {
    payload.WithObject("namingConfiguration", m_namingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
