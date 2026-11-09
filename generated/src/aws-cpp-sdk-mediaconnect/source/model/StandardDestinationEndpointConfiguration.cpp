/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardDestinationEndpointConfiguration::StandardDestinationEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

StandardDestinationEndpointConfiguration& StandardDestinationEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationNetworkingConfiguration")) {
    m_destinationNetworkingConfiguration = jsonValue.GetObject("destinationNetworkingConfiguration");
    m_destinationNetworkingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolConfiguration")) {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationNetworkingType")) {
    m_destinationNetworkingType = DestinationEndpointNetworkingTypeMapper::GetDestinationEndpointNetworkingTypeForName(
        jsonValue.GetString("destinationNetworkingType"));
    m_destinationNetworkingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = DestinationEndpointProtocolMapper::GetDestinationEndpointProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardDestinationEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_destinationNetworkingConfigurationHasBeenSet) {
    payload.WithObject("destinationNetworkingConfiguration", m_destinationNetworkingConfiguration.Jsonize());
  }

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
  }

  if (m_destinationNetworkingTypeHasBeenSet) {
    payload.WithString("destinationNetworkingType",
                       DestinationEndpointNetworkingTypeMapper::GetNameForDestinationEndpointNetworkingType(m_destinationNetworkingType));
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", DestinationEndpointProtocolMapper::GetNameForDestinationEndpointProtocol(m_protocol));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
