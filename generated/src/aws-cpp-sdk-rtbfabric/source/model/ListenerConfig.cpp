/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/ListenerConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

ListenerConfig::ListenerConfig(JsonView jsonValue) { *this = jsonValue; }

ListenerConfig& ListenerConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocols")) {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("protocols");
    for (unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex) {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListenerConfig::Jsonize() const {
  JsonValue payload;

  if (m_protocolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
    for (unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex) {
      protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
    }
    payload.WithArray("protocols", std::move(protocolsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
