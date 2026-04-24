/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IntegratedResourceInputItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IntegratedResourceInputItem::IntegratedResourceInputItem(JsonView jsonValue) { *this = jsonValue; }

IntegratedResourceInputItem& IntegratedResourceInputItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capabilities")) {
    m_capabilities = jsonValue.GetObject("capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegratedResourceInputItem::Jsonize() const {
  JsonValue payload;

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  if (m_capabilitiesHasBeenSet) {
    payload.WithObject("capabilities", m_capabilities.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
