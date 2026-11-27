/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptune-graph/model/GraphSessionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NeptuneGraph {
namespace Model {

GraphSessionConfiguration::GraphSessionConfiguration(JsonView jsonValue) { *this = jsonValue; }

GraphSessionConfiguration& GraphSessionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minMemory")) {
    m_minMemory = jsonValue.GetInteger("minMemory");
    m_minMemoryHasBeenSet = true;
  }
  return *this;
}

JsonValue GraphSessionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_minMemoryHasBeenSet) {
    payload.WithInteger("minMemory", m_minMemory);
  }

  return payload;
}

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws
