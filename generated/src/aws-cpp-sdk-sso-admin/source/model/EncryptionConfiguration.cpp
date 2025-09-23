/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/EncryptionConfiguration.h>
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

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
