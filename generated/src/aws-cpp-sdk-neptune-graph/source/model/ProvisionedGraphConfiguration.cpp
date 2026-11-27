/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptune-graph/model/ProvisionedGraphConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NeptuneGraph {
namespace Model {

ProvisionedGraphConfiguration::ProvisionedGraphConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProvisionedGraphConfiguration& ProvisionedGraphConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetInteger("memory");
    m_memoryHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisionedGraphConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_memoryHasBeenSet) {
    payload.WithInteger("memory", m_memory);
  }

  return payload;
}

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws
