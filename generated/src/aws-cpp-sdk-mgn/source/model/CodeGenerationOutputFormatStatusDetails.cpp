/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/CodeGenerationOutputFormatStatusDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

CodeGenerationOutputFormatStatusDetails::CodeGenerationOutputFormatStatusDetails(JsonView jsonValue) { *this = jsonValue; }

CodeGenerationOutputFormatStatusDetails& CodeGenerationOutputFormatStatusDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = CodeGenerationOutputFormatStatusMapper::GetCodeGenerationOutputFormatStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusDetailList")) {
    m_statusDetailList = jsonValue.GetString("statusDetailList");
    m_statusDetailListHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeGenerationOutputFormatStatusDetails::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", CodeGenerationOutputFormatStatusMapper::GetNameForCodeGenerationOutputFormatStatus(m_status));
  }

  if (m_statusDetailListHasBeenSet) {
    payload.WithString("statusDetailList", m_statusDetailList);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
