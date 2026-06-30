/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/SupportPermitSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

SupportPermitSummary::SupportPermitSummary(JsonView jsonValue) { *this = jsonValue; }

SupportPermitSummary& SupportPermitSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permit")) {
    m_permit = jsonValue.GetObject("permit");
    m_permitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SupportPermitStatusMapper::GetSupportPermitStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingKeyInfo")) {
    m_signingKeyInfo = jsonValue.GetObject("signingKeyInfo");
    m_signingKeyInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportCaseDisplayId")) {
    m_supportCaseDisplayId = jsonValue.GetString("supportCaseDisplayId");
    m_supportCaseDisplayIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportPermitSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_permitHasBeenSet) {
    payload.WithObject("permit", m_permit.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SupportPermitStatusMapper::GetNameForSupportPermitStatus(m_status));
  }

  if (m_signingKeyInfoHasBeenSet) {
    payload.WithObject("signingKeyInfo", m_signingKeyInfo.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_supportCaseDisplayIdHasBeenSet) {
    payload.WithString("supportCaseDisplayId", m_supportCaseDisplayId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
