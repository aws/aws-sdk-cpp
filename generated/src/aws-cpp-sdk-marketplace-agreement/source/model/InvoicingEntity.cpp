/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/InvoicingEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

InvoicingEntity::InvoicingEntity(JsonView jsonValue) { *this = jsonValue; }

InvoicingEntity& InvoicingEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("legalName")) {
    m_legalName = jsonValue.GetString("legalName");
    m_legalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("branchName")) {
    m_branchName = jsonValue.GetString("branchName");
    m_branchNameHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoicingEntity::Jsonize() const {
  JsonValue payload;

  if (m_legalNameHasBeenSet) {
    payload.WithString("legalName", m_legalName);
  }

  if (m_branchNameHasBeenSet) {
    payload.WithString("branchName", m_branchName);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
