/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/CertificateAssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

CertificateAssociationSummary::CertificateAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

CertificateAssociationSummary& CertificateAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("acmCertificateArn")) {
    m_acmCertificateArn = jsonValue.GetString("acmCertificateArn");
    m_acmCertificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CertificateAssociationStatusMapper::GetCertificateAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedAt")) {
    m_associatedAt = jsonValue.GetDouble("associatedAt");
    m_associatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_acmCertificateArnHasBeenSet) {
    payload.WithString("acmCertificateArn", m_acmCertificateArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CertificateAssociationStatusMapper::GetNameForCertificateAssociationStatus(m_status));
  }

  if (m_associatedAtHasBeenSet) {
    payload.WithDouble("associatedAt", m_associatedAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
