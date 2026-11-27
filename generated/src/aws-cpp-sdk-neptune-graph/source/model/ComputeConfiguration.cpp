/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptune-graph/model/ComputeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NeptuneGraph {
namespace Model {

ComputeConfiguration::ComputeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ComputeConfiguration& ComputeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("provisionedGraph")) {
    m_provisionedGraph = jsonValue.GetObject("provisionedGraph");
    m_provisionedGraphHasBeenSet = true;
  }
  if (jsonValue.ValueExists("graphSession")) {
    m_graphSession = jsonValue.GetObject("graphSession");
    m_graphSessionHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_provisionedGraphHasBeenSet) {
    payload.WithObject("provisionedGraph", m_provisionedGraph.Jsonize());
  }

  if (m_graphSessionHasBeenSet) {
    payload.WithObject("graphSession", m_graphSession.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws
