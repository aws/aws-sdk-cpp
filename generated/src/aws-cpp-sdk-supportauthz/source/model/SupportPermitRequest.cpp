/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/SupportPermitRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

SupportPermitRequest::SupportPermitRequest(JsonView jsonValue) { *this = jsonValue; }

SupportPermitRequest& SupportPermitRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requestArn")) {
    m_requestArn = jsonValue.GetString("requestArn");
    m_requestArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permit")) {
    m_permit = jsonValue.GetObject("permit");
    m_permitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportCaseDisplayId")) {
    m_supportCaseDisplayId = jsonValue.GetString("supportCaseDisplayId");
    m_supportCaseDisplayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SupportPermitRequestStatusMapper::GetSupportPermitRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportPermitRequest::Jsonize() const {
  JsonValue payload;

  if (m_requestArnHasBeenSet) {
    payload.WithString("requestArn", m_requestArn);
  }

  if (m_permitHasBeenSet) {
    payload.WithObject("permit", m_permit.Jsonize());
  }

  if (m_supportCaseDisplayIdHasBeenSet) {
    payload.WithString("supportCaseDisplayId", m_supportCaseDisplayId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SupportPermitRequestStatusMapper::GetNameForSupportPermitRequestStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
