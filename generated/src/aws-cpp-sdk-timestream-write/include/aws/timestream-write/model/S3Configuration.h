﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/S3EncryptionOption.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>The configuration that specifies an S3 location.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_TIMESTREAMWRITE_API S3Configuration();
    AWS_TIMESTREAMWRITE_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline S3Configuration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline S3Configuration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline S3Configuration& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key preview for the customer S3 location.</p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }
    inline void SetObjectKeyPrefix(Aws::String&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::move(value); }
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }
    inline S3Configuration& WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}
    inline S3Configuration& WithObjectKeyPrefix(Aws::String&& value) { SetObjectKeyPrefix(std::move(value)); return *this;}
    inline S3Configuration& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption option for the customer S3 location. Options are S3
     * server-side encryption with an S3 managed key or Amazon Web Services managed
     * key.</p>
     */
    inline const S3EncryptionOption& GetEncryptionOption() const{ return m_encryptionOption; }
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }
    inline void SetEncryptionOption(const S3EncryptionOption& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }
    inline void SetEncryptionOption(S3EncryptionOption&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }
    inline S3Configuration& WithEncryptionOption(const S3EncryptionOption& value) { SetEncryptionOption(value); return *this;}
    inline S3Configuration& WithEncryptionOption(S3EncryptionOption&& value) { SetEncryptionOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ID for the customer S3 location when encrypting with an Amazon
     * Web Services managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline S3Configuration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline S3Configuration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline S3Configuration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;

    S3EncryptionOption m_encryptionOption;
    bool m_encryptionOptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
