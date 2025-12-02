/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/PipelineOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

PipelineOutput::PipelineOutput(JsonView jsonValue) { *this = jsonValue; }

PipelineOutput& PipelineOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Record")) {
    m_record = jsonValue.GetObject("Record");
    m_recordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineOutput::Jsonize() const {
  JsonValue payload;

  if (m_recordHasBeenSet) {
    payload.WithObject("Record", m_record.Jsonize());
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
