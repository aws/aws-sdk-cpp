/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/InboundConnectorConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

InboundConnectorConfig::InboundConnectorConfig(JsonView jsonValue) { *this = jsonValue; }

InboundConnectorConfig& InboundConnectorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InboundConnectorType")) {
    m_inboundConnectorType = InboundConnectorTypeMapper::GetInboundConnectorTypeForName(jsonValue.GetString("InboundConnectorType"));
    m_inboundConnectorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundConnectorConfig::Jsonize() const {
  JsonValue payload;

  if (m_inboundConnectorTypeHasBeenSet) {
    payload.WithString("InboundConnectorType", InboundConnectorTypeMapper::GetNameForInboundConnectorType(m_inboundConnectorType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
