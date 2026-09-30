/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ValidationFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ValidationFailure::ValidationFailure(JsonView jsonValue) { *this = jsonValue; }

ValidationFailure& ValidationFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Severity")) {
    m_severity = ValidationFailureSeverityMapper::GetValidationFailureSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationFailure::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", ValidationFailureSeverityMapper::GetNameForValidationFailureSeverity(m_severity));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
