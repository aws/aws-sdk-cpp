/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/MultiAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

MultiAgentConfiguration::MultiAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

MultiAgentConfiguration& MultiAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("delegateAgentConfiguration")) {
    m_delegateAgentConfiguration = jsonValue.GetObject("delegateAgentConfiguration");
    m_delegateAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("handoffAgentConfiguration")) {
    m_handoffAgentConfiguration = jsonValue.GetObject("handoffAgentConfiguration");
    m_handoffAgentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_delegateAgentConfigurationHasBeenSet) {
    payload.WithObject("delegateAgentConfiguration", m_delegateAgentConfiguration.Jsonize());
  }

  if (m_handoffAgentConfigurationHasBeenSet) {
    payload.WithObject("handoffAgentConfiguration", m_handoffAgentConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
