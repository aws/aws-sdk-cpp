/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TargetDomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TargetDomain::TargetDomain(JsonView jsonValue) { *this = jsonValue; }

TargetDomain& TargetDomain::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("verificationDetails")) {
    m_verificationDetails = jsonValue.GetObject("verificationDetails");
    m_verificationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verifiedAt")) {
    m_verifiedAt = jsonValue.GetString("verifiedAt");
    m_verifiedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetDomain::Jsonize() const {
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

  if (m_verificationDetailsHasBeenSet) {
    payload.WithObject("verificationDetails", m_verificationDetails.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_verifiedAtHasBeenSet) {
    payload.WithString("verifiedAt", m_verifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
