/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/S3EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

S3EncryptionConfig::S3EncryptionConfig() : 
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3EncryptionConfig::S3EncryptionConfig(JsonView jsonValue) : 
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3EncryptionConfig& S3EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionMode"))
  {
    m_encryptionMode = EncryptionModeMapper::GetEncryptionModeForName(jsonValue.GetString("EncryptionMode"));

    m_encryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("EncryptionMode", EncryptionModeMapper::GetNameForEncryptionMode(m_encryptionMode));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
