/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-entitlement/model/Entitlement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceEntitlementService {
namespace Model {

Entitlement::Entitlement(JsonView jsonValue) { *this = jsonValue; }

Entitlement& Entitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProductCode")) {
    m_productCode = jsonValue.GetString("ProductCode");
    m_productCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dimension")) {
    m_dimension = jsonValue.GetString("Dimension");
    m_dimensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerIdentifier")) {
    m_customerIdentifier = jsonValue.GetString("CustomerIdentifier");
    m_customerIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerAWSAccountId")) {
    m_customerAWSAccountId = jsonValue.GetString("CustomerAWSAccountId");
    m_customerAWSAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpirationDate")) {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseArn")) {
    m_licenseArn = jsonValue.GetString("LicenseArn");
    m_licenseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Entitlement::Jsonize() const {
  JsonValue payload;

  if (m_productCodeHasBeenSet) {
    payload.WithString("ProductCode", m_productCode);
  }

  if (m_dimensionHasBeenSet) {
    payload.WithString("Dimension", m_dimension);
  }

  if (m_customerIdentifierHasBeenSet) {
    payload.WithString("CustomerIdentifier", m_customerIdentifier);
  }

  if (m_customerAWSAccountIdHasBeenSet) {
    payload.WithString("CustomerAWSAccountId", m_customerAWSAccountId);
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  if (m_expirationDateHasBeenSet) {
    payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if (m_licenseArnHasBeenSet) {
    payload.WithString("LicenseArn", m_licenseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
