/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/OrganizationalUnitReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

OrganizationalUnitReference::OrganizationalUnitReference(JsonView jsonValue) { *this = jsonValue; }

OrganizationalUnitReference& OrganizationalUnitReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ouId")) {
    m_ouId = jsonValue.GetString("ouId");
    m_ouIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationalUnitReference::Jsonize() const {
  JsonValue payload;

  if (m_ouIdHasBeenSet) {
    payload.WithString("ouId", m_ouId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
