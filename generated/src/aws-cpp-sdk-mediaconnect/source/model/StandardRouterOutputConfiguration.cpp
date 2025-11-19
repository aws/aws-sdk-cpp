/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardRouterOutputConfiguration::StandardRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

StandardRouterOutputConfiguration& StandardRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkInterfaceArn")) {
    m_networkInterfaceArn = jsonValue.GetString("networkInterfaceArn");
    m_networkInterfaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolConfiguration")) {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = RouterOutputProtocolMapper::GetRouterOutputProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_networkInterfaceArnHasBeenSet) {
    payload.WithString("networkInterfaceArn", m_networkInterfaceArn);
  }

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", RouterOutputProtocolMapper::GetNameForRouterOutputProtocol(m_protocol));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
