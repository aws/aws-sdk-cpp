/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/DomainVerificationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

DomainVerificationSummary::DomainVerificationSummary(JsonView jsonValue) { *this = jsonValue; }

DomainVerificationSummary& DomainVerificationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("txtMethodConfig")) {
    m_txtMethodConfig = jsonValue.GetObject("txtMethodConfig");
    m_txtMethodConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastVerifiedTime")) {
    m_lastVerifiedTime = jsonValue.GetString("lastVerifiedTime");
    m_lastVerifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainVerificationSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", VerificationStatusMapper::GetNameForVerificationStatus(m_status));
  }

  if (m_txtMethodConfigHasBeenSet) {
    payload.WithObject("txtMethodConfig", m_txtMethodConfig.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastVerifiedTimeHasBeenSet) {
    payload.WithString("lastVerifiedTime", m_lastVerifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
