/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ManagedConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ManagedConfiguration::ManagedConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedConfiguration& ManagedConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagedStorageType")) {
    m_managedStorageType = ManagedStorageTypeMapper::GetManagedStorageTypeForName(jsonValue.GetString("ManagedStorageType"));
    m_managedStorageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_managedStorageTypeHasBeenSet) {
    payload.WithString("ManagedStorageType", ManagedStorageTypeMapper::GetNameForManagedStorageType(m_managedStorageType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
