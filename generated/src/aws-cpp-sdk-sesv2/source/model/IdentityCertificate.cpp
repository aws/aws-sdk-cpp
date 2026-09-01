/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/IdentityCertificate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

IdentityCertificate::IdentityCertificate(JsonView jsonValue) { *this = jsonValue; }

IdentityCertificate& IdentityCertificate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FromAddress")) {
    m_fromAddress = jsonValue.GetString("FromAddress");
    m_fromAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = IdentityCertificateStatusMapper::GetIdentityCertificateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateArn")) {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateExpiryTime")) {
    m_certificateExpiryTime = jsonValue.GetDouble("CertificateExpiryTime");
    m_certificateExpiryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCertificate::Jsonize() const {
  JsonValue payload;

  if (m_fromAddressHasBeenSet) {
    payload.WithString("FromAddress", m_fromAddress);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", IdentityCertificateStatusMapper::GetNameForIdentityCertificateStatus(m_status));
  }

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_certificateExpiryTimeHasBeenSet) {
    payload.WithDouble("CertificateExpiryTime", m_certificateExpiryTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
