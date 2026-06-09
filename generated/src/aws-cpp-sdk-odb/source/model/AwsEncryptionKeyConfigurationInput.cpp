/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AwsEncryptionKeyConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AwsEncryptionKeyConfigurationInput::AwsEncryptionKeyConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

AwsEncryptionKeyConfigurationInput& AwsEncryptionKeyConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("iamRoleArn")) {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalIdType")) {
    m_externalIdType = ExternalIdTypeMapper::GetExternalIdTypeForName(jsonValue.GetString("externalIdType"));
    m_externalIdTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEncryptionKeyConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("iamRoleArn", m_iamRoleArn);
  }

  if (m_externalIdTypeHasBeenSet) {
    payload.WithString("externalIdType", ExternalIdTypeMapper::GetNameForExternalIdType(m_externalIdType));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
