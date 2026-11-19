/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/ResponderGatewayConfigParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

ResponderGatewayConfigParameters::ResponderGatewayConfigParameters(JsonView jsonValue) { *this = jsonValue; }

ResponderGatewayConfigParameters& ResponderGatewayConfigParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientRoutingPolicy")) {
    m_clientRoutingPolicy = ClientRoutingPolicyMapper::GetClientRoutingPolicyForName(jsonValue.GetString("clientRoutingPolicy"));
    m_clientRoutingPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerConfig")) {
    m_listenerConfig = jsonValue.GetObject("listenerConfig");
    m_listenerConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustStoreConfiguration")) {
    m_trustStoreConfiguration = jsonValue.GetObject("trustStoreConfiguration");
    m_trustStoreConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedEndpointConfiguration")) {
    m_managedEndpointConfiguration = jsonValue.GetObject("managedEndpointConfiguration");
    m_managedEndpointConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponderGatewayConfigParameters::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_clientRoutingPolicyHasBeenSet) {
    payload.WithString("clientRoutingPolicy", ClientRoutingPolicyMapper::GetNameForClientRoutingPolicy(m_clientRoutingPolicy));
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if (m_listenerConfigHasBeenSet) {
    payload.WithObject("listenerConfig", m_listenerConfig.Jsonize());
  }

  if (m_trustStoreConfigurationHasBeenSet) {
    payload.WithObject("trustStoreConfiguration", m_trustStoreConfiguration.Jsonize());
  }

  if (m_managedEndpointConfigurationHasBeenSet) {
    payload.WithObject("managedEndpointConfiguration", m_managedEndpointConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
