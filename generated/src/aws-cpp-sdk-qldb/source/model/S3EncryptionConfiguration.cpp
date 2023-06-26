/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/S3EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

S3EncryptionConfiguration::S3EncryptionConfiguration() : 
    m_objectEncryptionType(S3ObjectEncryptionType::NOT_SET),
    m_objectEncryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3EncryptionConfiguration::S3EncryptionConfiguration(JsonView jsonValue) : 
    m_objectEncryptionType(S3ObjectEncryptionType::NOT_SET),
    m_objectEncryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3EncryptionConfiguration& S3EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectEncryptionType"))
  {
    m_objectEncryptionType = S3ObjectEncryptionTypeMapper::GetS3ObjectEncryptionTypeForName(jsonValue.GetString("ObjectEncryptionType"));

    m_objectEncryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_objectEncryptionTypeHasBeenSet)
  {
   payload.WithString("ObjectEncryptionType", S3ObjectEncryptionTypeMapper::GetNameForS3ObjectEncryptionType(m_objectEncryptionType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
