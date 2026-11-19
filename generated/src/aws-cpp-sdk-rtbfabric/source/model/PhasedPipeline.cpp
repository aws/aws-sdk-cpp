/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/PhasedPipeline.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

PhasedPipeline::PhasedPipeline(JsonView jsonValue) { *this = jsonValue; }

PhasedPipeline& PhasedPipeline::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("phases")) {
    Aws::Utils::Array<JsonView> phasesJsonList = jsonValue.GetArray("phases");
    for (unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex) {
      m_phases.push_back(phasesJsonList[phasesIndex].AsObject());
    }
    m_phasesHasBeenSet = true;
  }
  return *this;
}

JsonValue PhasedPipeline::Jsonize() const {
  JsonValue payload;

  if (m_phasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> phasesJsonList(m_phases.size());
    for (unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex) {
      phasesJsonList[phasesIndex].AsObject(m_phases[phasesIndex].Jsonize());
    }
    payload.WithArray("phases", std::move(phasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
