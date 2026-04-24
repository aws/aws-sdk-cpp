/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TargetDomainSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TargetDomainSummary::TargetDomainSummary(JsonView jsonValue) { *this = jsonValue; }

TargetDomainSummary& TargetDomainSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetDomainId")) {
    m_targetDomainId = jsonValue.GetString("targetDomainId");
    m_targetDomainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verificationStatus")) {
    m_verificationStatus = TargetDomainStatusMapper::GetTargetDomainStatusForName(jsonValue.GetString("verificationStatus"));
    m_verificationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetDomainSummary::Jsonize() const {
  JsonValue payload;

  if (m_targetDomainIdHasBeenSet) {
    payload.WithString("targetDomainId", m_targetDomainId);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_verificationStatusHasBeenSet) {
    payload.WithString("verificationStatus", TargetDomainStatusMapper::GetNameForTargetDomainStatus(m_verificationStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
