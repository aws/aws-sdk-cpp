/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/EncryptionConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

EncryptionConfigurationDetails::EncryptionConfigurationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfigurationDetails& EncryptionConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyType"))
  {
    m_keyType = KmsKeyTypeMapper::GetKmsKeyTypeForName(jsonValue.GetString("KeyType"));
    m_keyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionStatus"))
  {
    m_encryptionStatus = KmsKeyStatusMapper::GetKmsKeyStatusForName(jsonValue.GetString("EncryptionStatus"));
    m_encryptionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionStatusReason"))
  {
    m_encryptionStatusReason = jsonValue.GetString("EncryptionStatusReason");
    m_encryptionStatusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("KeyType", KmsKeyTypeMapper::GetNameForKmsKeyType(m_keyType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_encryptionStatusHasBeenSet)
  {
   payload.WithString("EncryptionStatus", KmsKeyStatusMapper::GetNameForKmsKeyStatus(m_encryptionStatus));
  }

  if(m_encryptionStatusReasonHasBeenSet)
  {
   payload.WithString("EncryptionStatusReason", m_encryptionStatusReason);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
