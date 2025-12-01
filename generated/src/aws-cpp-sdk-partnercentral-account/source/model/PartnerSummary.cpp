/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/PartnerSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

PartnerSummary::PartnerSummary(JsonView jsonValue) { *this = jsonValue; }

PartnerSummary& PartnerSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LegalName")) {
    m_legalName = jsonValue.GetString("LegalName");
    m_legalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerSummary::Jsonize() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_legalNameHasBeenSet) {
    payload.WithString("LegalName", m_legalName);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
