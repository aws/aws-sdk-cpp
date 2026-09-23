/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ScopeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ScopeSummary::ScopeSummary(JsonView jsonValue) { *this = jsonValue; }

ScopeSummary& ScopeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeId")) {
    m_scopeId = jsonValue.GetString("scopeId");
    m_scopeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeArn")) {
    m_scopeArn = jsonValue.GetString("scopeArn");
    m_scopeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeName")) {
    m_scopeName = jsonValue.GetString("scopeName");
    m_scopeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeSummary::Jsonize() const {
  JsonValue payload;

  if (m_scopeIdHasBeenSet) {
    payload.WithString("scopeId", m_scopeId);
  }

  if (m_scopeArnHasBeenSet) {
    payload.WithString("scopeArn", m_scopeArn);
  }

  if (m_scopeNameHasBeenSet) {
    payload.WithString("scopeName", m_scopeName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_hasPublishedVersionHasBeenSet) {
    payload.WithBool("hasPublishedVersion", m_hasPublishedVersion);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
