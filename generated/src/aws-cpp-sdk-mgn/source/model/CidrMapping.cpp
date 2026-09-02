/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/CidrMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

CidrMapping::CidrMapping(JsonView jsonValue) { *this = jsonValue; }

CidrMapping& CidrMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("originalCidr")) {
    m_originalCidr = jsonValue.GetString("originalCidr");
    m_originalCidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedCidr")) {
    m_updatedCidr = jsonValue.GetString("updatedCidr");
    m_updatedCidrHasBeenSet = true;
  }
  return *this;
}

JsonValue CidrMapping::Jsonize() const {
  JsonValue payload;

  if (m_originalCidrHasBeenSet) {
    payload.WithString("originalCidr", m_originalCidr);
  }

  if (m_updatedCidrHasBeenSet) {
    payload.WithString("updatedCidr", m_updatedCidr);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
