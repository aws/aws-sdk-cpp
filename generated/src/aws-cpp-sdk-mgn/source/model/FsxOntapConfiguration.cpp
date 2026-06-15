/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/FsxOntapConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

FsxOntapConfiguration::FsxOntapConfiguration(JsonView jsonValue) { *this = jsonValue; }

FsxOntapConfiguration& FsxOntapConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("storageVirtualMachineId")) {
    m_storageVirtualMachineId = jsonValue.GetString("storageVirtualMachineId");
    m_storageVirtualMachineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialsSecretArn")) {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");
    m_credentialsSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue FsxOntapConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_storageVirtualMachineIdHasBeenSet) {
    payload.WithString("storageVirtualMachineId", m_storageVirtualMachineId);
  }

  if (m_credentialsSecretArnHasBeenSet) {
    payload.WithString("credentialsSecretArn", m_credentialsSecretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
