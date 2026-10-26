/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/StandardSourceEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

StandardSourceEndpointConfiguration::StandardSourceEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

StandardSourceEndpointConfiguration& StandardSourceEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceNetworkingConfiguration")) {
    m_sourceNetworkingConfiguration = jsonValue.GetObject("sourceNetworkingConfiguration");
    m_sourceNetworkingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolConfiguration")) {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceNetworkingType")) {
    m_sourceNetworkingType =
        SourceEndpointNetworkingTypeMapper::GetSourceEndpointNetworkingTypeForName(jsonValue.GetString("sourceNetworkingType"));
    m_sourceNetworkingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = SourceEndpointProtocolMapper::GetSourceEndpointProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue StandardSourceEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sourceNetworkingConfigurationHasBeenSet) {
    payload.WithObject("sourceNetworkingConfiguration", m_sourceNetworkingConfiguration.Jsonize());
  }

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
  }

  if (m_sourceNetworkingTypeHasBeenSet) {
    payload.WithString("sourceNetworkingType",
                       SourceEndpointNetworkingTypeMapper::GetNameForSourceEndpointNetworkingType(m_sourceNetworkingType));
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", SourceEndpointProtocolMapper::GetNameForSourceEndpointProtocol(m_protocol));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
