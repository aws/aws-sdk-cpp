/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/RelationshipDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

RelationshipDetail::RelationshipDetail(JsonView jsonValue) { *this = jsonValue; }

RelationshipDetail& RelationshipDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetString("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationType")) {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("associationType"));
    m_associationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programManagementAccountId")) {
    m_programManagementAccountId = jsonValue.GetString("programManagementAccountId");
    m_programManagementAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedAccountId")) {
    m_associatedAccountId = jsonValue.GetString("associatedAccountId");
    m_associatedAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resaleAccountModel")) {
    m_resaleAccountModel = ResaleAccountModelMapper::GetResaleAccountModelForName(jsonValue.GetString("resaleAccountModel"));
    m_resaleAccountModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sector")) {
    m_sector = SectorMapper::GetSectorForName(jsonValue.GetString("sector"));
    m_sectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetString("startDate");
    m_startDateHasBeenSet = true;
  }
  return *this;
}

JsonValue RelationshipDetail::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("revision", m_revision);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_associationTypeHasBeenSet) {
    payload.WithString("associationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if (m_programManagementAccountIdHasBeenSet) {
    payload.WithString("programManagementAccountId", m_programManagementAccountId);
  }

  if (m_associatedAccountIdHasBeenSet) {
    payload.WithString("associatedAccountId", m_associatedAccountId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_resaleAccountModelHasBeenSet) {
    payload.WithString("resaleAccountModel", ResaleAccountModelMapper::GetNameForResaleAccountModel(m_resaleAccountModel));
  }

  if (m_sectorHasBeenSet) {
    payload.WithString("sector", SectorMapper::GetNameForSector(m_sector));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startDateHasBeenSet) {
    payload.WithString("startDate", m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
