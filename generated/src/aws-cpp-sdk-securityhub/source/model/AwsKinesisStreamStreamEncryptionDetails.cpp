/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsKinesisStreamStreamEncryptionDetails.h>
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

AwsKinesisStreamStreamEncryptionDetails::AwsKinesisStreamStreamEncryptionDetails() : 
    m_encryptionTypeHasBeenSet(false),
    m_keyIdHasBeenSet(false)
{
}

AwsKinesisStreamStreamEncryptionDetails::AwsKinesisStreamStreamEncryptionDetails(JsonView jsonValue) : 
    m_encryptionTypeHasBeenSet(false),
    m_keyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsKinesisStreamStreamEncryptionDetails& AwsKinesisStreamStreamEncryptionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionType"))
  {
    m_encryptionType = jsonValue.GetString("EncryptionType");

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsKinesisStreamStreamEncryptionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("EncryptionType", m_encryptionType);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
