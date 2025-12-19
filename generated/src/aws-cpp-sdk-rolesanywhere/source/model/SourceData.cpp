/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/SourceData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {

SourceData::SourceData(JsonView jsonValue) { *this = jsonValue; }

SourceData& SourceData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("x509CertificateData")) {
    m_x509CertificateData = jsonValue.GetString("x509CertificateData");
    m_x509CertificateDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acmPcaArn")) {
    m_acmPcaArn = jsonValue.GetString("acmPcaArn");
    m_acmPcaArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceData::Jsonize() const {
  JsonValue payload;

  if (m_x509CertificateDataHasBeenSet) {
    payload.WithString("x509CertificateData", m_x509CertificateData);
  }

  if (m_acmPcaArnHasBeenSet) {
    payload.WithString("acmPcaArn", m_acmPcaArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
