/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationOutcome.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationOutcome::RemediationOutcome(JsonView jsonValue) { *this = jsonValue; }

RemediationOutcome& RemediationOutcome::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResolvedFindingsCount")) {
    m_resolvedFindingsCount = jsonValue.GetInteger("ResolvedFindingsCount");
    m_resolvedFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SeverityReductionFindingsCount")) {
    m_severityReductionFindingsCount = jsonValue.GetInteger("SeverityReductionFindingsCount");
    m_severityReductionFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SeverityUnchangedCount")) {
    m_severityUnchangedCount = jsonValue.GetInteger("SeverityUnchangedCount");
    m_severityUnchangedCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationOutcome::Jsonize() const {
  JsonValue payload;

  if (m_resolvedFindingsCountHasBeenSet) {
    payload.WithInteger("ResolvedFindingsCount", m_resolvedFindingsCount);
  }

  if (m_severityReductionFindingsCountHasBeenSet) {
    payload.WithInteger("SeverityReductionFindingsCount", m_severityReductionFindingsCount);
  }

  if (m_severityUnchangedCountHasBeenSet) {
    payload.WithInteger("SeverityUnchangedCount", m_severityUnchangedCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
