/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/ReportS3Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

ReportS3Configuration::ReportS3Configuration() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_encryptionOption(S3EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

ReportS3Configuration::ReportS3Configuration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_encryptionOption(S3EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ReportS3Configuration& ReportS3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKeyPrefix"))
  {
    m_objectKeyPrefix = jsonValue.GetString("ObjectKeyPrefix");

    m_objectKeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = S3EncryptionOptionMapper::GetS3EncryptionOptionForName(jsonValue.GetString("EncryptionOption"));

    m_encryptionOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportS3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyPrefixHasBeenSet)
  {
   payload.WithString("ObjectKeyPrefix", m_objectKeyPrefix);

  }

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", S3EncryptionOptionMapper::GetNameForS3EncryptionOption(m_encryptionOption));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
