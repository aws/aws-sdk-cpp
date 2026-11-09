/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

SubsidiaryAuthorizationFilters::SubsidiaryAuthorizationFilters(JsonView jsonValue) { *this = jsonValue; }

SubsidiaryAuthorizationFilters& SubsidiaryAuthorizationFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetObject("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetObject("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceName")) {
    m_resourceName = jsonValue.GetObject("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetObject("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubsidiaryAccountId")) {
    m_subsidiaryAccountId = jsonValue.GetObject("SubsidiaryAccountId");
    m_subsidiaryAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetObject("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetObject("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SubsidiaryAuthorizationFilters::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithObject("EntityId", m_entityId.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("Status", m_status.Jsonize());
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithObject("ResourceId", m_resourceId.Jsonize());
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithObject("ResourceName", m_resourceName.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithObject("Name", m_name.Jsonize());
  }

  if (m_subsidiaryAccountIdHasBeenSet) {
    payload.WithObject("SubsidiaryAccountId", m_subsidiaryAccountId.Jsonize());
  }

  if (m_createdDateHasBeenSet) {
    payload.WithObject("CreatedDate", m_createdDate.Jsonize());
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithObject("LastModifiedDate", m_lastModifiedDate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
