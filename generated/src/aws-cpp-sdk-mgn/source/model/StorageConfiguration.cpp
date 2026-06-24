/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StorageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

StorageConfiguration::StorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

StorageConfiguration& StorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("storageType")) {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fsxOntapConfiguration")) {
    m_fsxOntapConfiguration = jsonValue.GetObject("fsxOntapConfiguration");
    m_fsxOntapConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_storageTypeHasBeenSet) {
    payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if (m_fsxOntapConfigurationHasBeenSet) {
    payload.WithObject("fsxOntapConfiguration", m_fsxOntapConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
