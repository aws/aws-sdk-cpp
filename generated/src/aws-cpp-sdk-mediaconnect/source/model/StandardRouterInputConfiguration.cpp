/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardRouterInputConfiguration::StandardRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

StandardRouterInputConfiguration& StandardRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkInterfaceArn")) {
    m_networkInterfaceArn = jsonValue.GetString("networkInterfaceArn");
    m_networkInterfaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolConfiguration")) {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = RouterInputProtocolMapper::GetRouterInputProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_networkInterfaceArnHasBeenSet) {
    payload.WithString("networkInterfaceArn", m_networkInterfaceArn);
  }

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", RouterInputProtocolMapper::GetNameForRouterInputProtocol(m_protocol));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
