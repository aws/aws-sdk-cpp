/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ExportOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ExportOutput::ExportOutput(JsonView jsonValue) { *this = jsonValue; }

ExportOutput& ExportOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Findings")) {
    m_findings = jsonValue.GetObject("Findings");
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportOutput::Jsonize() const {
  JsonValue payload;

  if (m_findingsHasBeenSet) {
    payload.WithObject("Findings", m_findings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
