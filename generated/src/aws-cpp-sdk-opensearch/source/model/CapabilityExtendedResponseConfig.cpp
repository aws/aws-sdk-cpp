/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CapabilityExtendedResponseConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CapabilityExtendedResponseConfig::CapabilityExtendedResponseConfig(JsonView jsonValue) { *this = jsonValue; }

CapabilityExtendedResponseConfig& CapabilityExtendedResponseConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aiConfig")) {
    m_aiConfig = jsonValue.GetObject("aiConfig");
    m_aiConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityExtendedResponseConfig::Jsonize() const {
  JsonValue payload;

  if (m_aiConfigHasBeenSet) {
    payload.WithObject("aiConfig", m_aiConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
