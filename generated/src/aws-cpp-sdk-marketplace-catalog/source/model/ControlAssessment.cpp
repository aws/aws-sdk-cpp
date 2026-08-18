/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ControlAssessment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ControlAssessment::ControlAssessment(JsonView jsonValue) { *this = jsonValue; }

ControlAssessment& ControlAssessment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ControlId")) {
    m_controlId = jsonValue.GetString("ControlId");
    m_controlIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlAssessmentResult")) {
    m_controlAssessmentResult =
        ControlAssessmentResultMapper::GetControlAssessmentResultForName(jsonValue.GetString("ControlAssessmentResult"));
    m_controlAssessmentResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlAssessment::Jsonize() const {
  JsonValue payload;

  if (m_controlIdHasBeenSet) {
    payload.WithString("ControlId", m_controlId);
  }

  if (m_controlAssessmentResultHasBeenSet) {
    payload.WithString("ControlAssessmentResult",
                       ControlAssessmentResultMapper::GetNameForControlAssessmentResult(m_controlAssessmentResult));
  }

  if (m_errorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
    }
    payload.WithArray("Errors", std::move(errorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
