/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/RootDirectory.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

RootDirectory::RootDirectory(JsonView jsonValue) { *this = jsonValue; }

RootDirectory& RootDirectory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationPermissions")) {
    m_creationPermissions = jsonValue.GetObject("creationPermissions");
    m_creationPermissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RootDirectory::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_creationPermissionsHasBeenSet) {
    payload.WithObject("creationPermissions", m_creationPermissions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
