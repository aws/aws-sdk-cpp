/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/FileSystemConfigurationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

FileSystemConfigurationDetails::FileSystemConfigurationDetails(JsonView jsonValue) { *this = jsonValue; }

FileSystemConfigurationDetails& FileSystemConfigurationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mountPoint")) {
    m_mountPoint = jsonValue.GetString("mountPoint");
    m_mountPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemSizeInGBs")) {
    m_fileSystemSizeInGBs = jsonValue.GetInteger("fileSystemSizeInGBs");
    m_fileSystemSizeInGBsHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSystemConfigurationDetails::Jsonize() const {
  JsonValue payload;

  if (m_mountPointHasBeenSet) {
    payload.WithString("mountPoint", m_mountPoint);
  }

  if (m_fileSystemSizeInGBsHasBeenSet) {
    payload.WithInteger("fileSystemSizeInGBs", m_fileSystemSizeInGBs);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
