/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ListenerPropertyRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ListenerPropertyRequest::ListenerPropertyRequest(JsonView jsonValue) { *this = jsonValue; }

ListenerPropertyRequest& ListenerPropertyRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Port")) {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ListenerPropertyTypeMapper::GetListenerPropertyTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ListenerPropertyRequest::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("Port", m_port);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ListenerPropertyTypeMapper::GetNameForListenerPropertyType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
