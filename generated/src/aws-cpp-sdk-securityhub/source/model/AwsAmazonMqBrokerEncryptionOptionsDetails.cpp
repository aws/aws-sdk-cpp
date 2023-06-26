/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerEncryptionOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAmazonMqBrokerEncryptionOptionsDetails::AwsAmazonMqBrokerEncryptionOptionsDetails() : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
}

AwsAmazonMqBrokerEncryptionOptionsDetails::AwsAmazonMqBrokerEncryptionOptionsDetails(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerEncryptionOptionsDetails& AwsAmazonMqBrokerEncryptionOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseAwsOwnedKey"))
  {
    m_useAwsOwnedKey = jsonValue.GetBool("UseAwsOwnedKey");

    m_useAwsOwnedKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerEncryptionOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_useAwsOwnedKeyHasBeenSet)
  {
   payload.WithBool("UseAwsOwnedKey", m_useAwsOwnedKey);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
