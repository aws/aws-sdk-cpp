/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/FirewallDomainListMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

FirewallDomainListMetadata::FirewallDomainListMetadata(JsonView jsonValue) { *this = jsonValue; }

FirewallDomainListMetadata& FirewallDomainListMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatorRequestId")) {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");
    m_creatorRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedOwnerName")) {
    m_managedOwnerName = jsonValue.GetString("ManagedOwnerName");
    m_managedOwnerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedListType")) {
    m_managedListType = DomainListTypeMapper::GetDomainListTypeForName(jsonValue.GetString("ManagedListType"));
    m_managedListTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallDomainListMetadata::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_creatorRequestIdHasBeenSet) {
    payload.WithString("CreatorRequestId", m_creatorRequestId);
  }

  if (m_managedOwnerNameHasBeenSet) {
    payload.WithString("ManagedOwnerName", m_managedOwnerName);
  }

  if (m_managedListTypeHasBeenSet) {
    payload.WithString("ManagedListType", DomainListTypeMapper::GetNameForDomainListType(m_managedListType));
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
