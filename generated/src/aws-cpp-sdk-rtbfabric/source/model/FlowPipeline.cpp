/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/FlowPipeline.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

FlowPipeline::FlowPipeline(JsonView jsonValue) { *this = jsonValue; }

FlowPipeline& FlowPipeline::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sequential")) {
    m_sequential = jsonValue.GetObject("sequential");
    m_sequentialHasBeenSet = true;
  }
  if (jsonValue.ValueExists("phased")) {
    m_phased = jsonValue.GetObject("phased");
    m_phasedHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowPipeline::Jsonize() const {
  JsonValue payload;

  if (m_sequentialHasBeenSet) {
    payload.WithObject("sequential", m_sequential.Jsonize());
  }

  if (m_phasedHasBeenSet) {
    payload.WithObject("phased", m_phased.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
