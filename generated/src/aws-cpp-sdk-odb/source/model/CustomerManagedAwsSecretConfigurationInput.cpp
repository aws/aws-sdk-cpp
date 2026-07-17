/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CustomerManagedAwsSecretConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

CustomerManagedAwsSecretConfigurationInput::CustomerManagedAwsSecretConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

CustomerManagedAwsSecretConfigurationInput& CustomerManagedAwsSecretConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretId")) {
    m_secretId = jsonValue.GetString("secretId");
    m_secretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamRoleArn")) {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalIdType")) {
    m_externalIdType = ExternalIdTypeMapper::GetExternalIdTypeForName(jsonValue.GetString("externalIdType"));
    m_externalIdTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerManagedAwsSecretConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_secretIdHasBeenSet) {
    payload.WithString("secretId", m_secretId);
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("iamRoleArn", m_iamRoleArn);
  }

  if (m_externalIdTypeHasBeenSet) {
    payload.WithString("externalIdType", ExternalIdTypeMapper::GetNameForExternalIdType(m_externalIdType));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
