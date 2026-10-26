/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

SubsidiaryAuthorizationSummary::SubsidiaryAuthorizationSummary(JsonView jsonValue) { *this = jsonValue; }

SubsidiaryAuthorizationSummary& SubsidiaryAuthorizationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceName")) {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubsidiaryAccountId")) {
    m_subsidiaryAccountId = jsonValue.GetString("SubsidiaryAccountId");
    m_subsidiaryAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SubsidiaryAuthorizationSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", m_status);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("ResourceName", m_resourceName);
  }

  if (m_subsidiaryAccountIdHasBeenSet) {
    payload.WithString("SubsidiaryAccountId", m_subsidiaryAccountId);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithString("CreatedDate", m_createdDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
