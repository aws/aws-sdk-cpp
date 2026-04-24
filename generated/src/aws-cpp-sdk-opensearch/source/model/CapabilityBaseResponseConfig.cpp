/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CapabilityBaseResponseConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CapabilityBaseResponseConfig::CapabilityBaseResponseConfig(JsonView jsonValue) { *this = jsonValue; }

CapabilityBaseResponseConfig& CapabilityBaseResponseConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aiConfig")) {
    m_aiConfig = jsonValue.GetObject("aiConfig");
    m_aiConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityBaseResponseConfig::Jsonize() const {
  JsonValue payload;

  if (m_aiConfigHasBeenSet) {
    payload.WithObject("aiConfig", m_aiConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
