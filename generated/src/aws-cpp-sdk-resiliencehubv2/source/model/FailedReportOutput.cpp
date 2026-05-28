/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/FailedReportOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

FailedReportOutput::FailedReportOutput(JsonView jsonValue) { *this = jsonValue; }

FailedReportOutput& FailedReportOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = ReportGenerationErrorCodeMapper::GetReportGenerationErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedReportOutput::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", ReportGenerationErrorCodeMapper::GetNameForReportGenerationErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
