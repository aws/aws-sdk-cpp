/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/EncryptionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

EncryptionOptions::EncryptionOptions() : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
}

EncryptionOptions::EncryptionOptions(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionOptions& EncryptionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useAwsOwnedKey"))
  {
    m_useAwsOwnedKey = jsonValue.GetBool("useAwsOwnedKey");

    m_useAwsOwnedKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_useAwsOwnedKeyHasBeenSet)
  {
   payload.WithBool("useAwsOwnedKey", m_useAwsOwnedKey);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
