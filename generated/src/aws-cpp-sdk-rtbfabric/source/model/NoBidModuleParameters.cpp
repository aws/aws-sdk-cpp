/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/NoBidModuleParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

NoBidModuleParameters::NoBidModuleParameters(JsonView jsonValue) { *this = jsonValue; }

NoBidModuleParameters& NoBidModuleParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode = jsonValue.GetInteger("reasonCode");
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passThroughPercentage")) {
    m_passThroughPercentage = jsonValue.GetDouble("passThroughPercentage");
    m_passThroughPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue NoBidModuleParameters::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithInteger("reasonCode", m_reasonCode);
  }

  if (m_passThroughPercentageHasBeenSet) {
    payload.WithDouble("passThroughPercentage", m_passThroughPercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
