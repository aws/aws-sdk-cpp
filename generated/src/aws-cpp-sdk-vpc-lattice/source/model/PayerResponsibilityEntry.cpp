/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/PayerResponsibilityEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

PayerResponsibilityEntry::PayerResponsibilityEntry(JsonView jsonValue) { *this = jsonValue; }

PayerResponsibilityEntry& PayerResponsibilityEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scope")) {
    m_scope = PayerResponsibilityScopeMapper::GetPayerResponsibilityScopeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payerResponsibilityType")) {
    m_payerResponsibilityType =
        PayerResponsibilityPayerMapper::GetPayerResponsibilityPayerForName(jsonValue.GetString("payerResponsibilityType"));
    m_payerResponsibilityTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PayerResponsibilityEntry::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithString("scope", PayerResponsibilityScopeMapper::GetNameForPayerResponsibilityScope(m_scope));
  }

  if (m_payerResponsibilityTypeHasBeenSet) {
    payload.WithString("payerResponsibilityType",
                       PayerResponsibilityPayerMapper::GetNameForPayerResponsibilityPayer(m_payerResponsibilityType));
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
