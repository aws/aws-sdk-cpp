/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AwsOrganizationScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AwsOrganizationScope::AwsOrganizationScope(JsonView jsonValue) { *this = jsonValue; }

AwsOrganizationScope& AwsOrganizationScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrganizationId")) {
    m_organizationId = jsonValue.GetString("OrganizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OrganizationalUnitId")) {
    m_organizationalUnitId = jsonValue.GetString("OrganizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOrganizationScope::Jsonize() const {
  JsonValue payload;

  if (m_organizationIdHasBeenSet) {
    payload.WithString("OrganizationId", m_organizationId);
  }

  if (m_organizationalUnitIdHasBeenSet) {
    payload.WithString("OrganizationalUnitId", m_organizationalUnitId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
