/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/FailedOrganizationalUnit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

FailedOrganizationalUnit::FailedOrganizationalUnit(JsonView jsonValue) { *this = jsonValue; }

FailedOrganizationalUnit& FailedOrganizationalUnit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationalUnitId")) {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedOrganizationalUnit::Jsonize() const {
  JsonValue payload;

  if (m_organizationalUnitIdHasBeenSet) {
    payload.WithString("organizationalUnitId", m_organizationalUnitId);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
