/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/StorageClassConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

StorageClassConfiguration::StorageClassConfiguration(JsonView jsonValue) { *this = jsonValue; }

StorageClassConfiguration& StorageClassConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("storageClass")) {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("storageClass"));
    m_storageClassHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageClassConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_storageClassHasBeenSet) {
    payload.WithString("storageClass", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
