/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/CreationPermissions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

CreationPermissions::CreationPermissions(JsonView jsonValue) { *this = jsonValue; }

CreationPermissions& CreationPermissions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ownerUid")) {
    m_ownerUid = jsonValue.GetInt64("ownerUid");
    m_ownerUidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerGid")) {
    m_ownerGid = jsonValue.GetInt64("ownerGid");
    m_ownerGidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissions")) {
    m_permissions = jsonValue.GetString("permissions");
    m_permissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreationPermissions::Jsonize() const {
  JsonValue payload;

  if (m_ownerUidHasBeenSet) {
    payload.WithInt64("ownerUid", m_ownerUid);
  }

  if (m_ownerGidHasBeenSet) {
    payload.WithInt64("ownerGid", m_ownerGid);
  }

  if (m_permissionsHasBeenSet) {
    payload.WithString("permissions", m_permissions);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
