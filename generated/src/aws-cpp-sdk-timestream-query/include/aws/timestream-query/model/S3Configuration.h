/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/S3EncryptionOption.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Details on S3 location for error reports that result from running a query.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_TIMESTREAMQUERY_API S3Configuration();
    AWS_TIMESTREAMQUERY_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline S3Configuration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline S3Configuration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline S3Configuration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const{ return m_objectKeyPrefix; }

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline void SetObjectKeyPrefix(const Aws::String& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = value; }

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline void SetObjectKeyPrefix(Aws::String&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::move(value); }

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline void SetObjectKeyPrefix(const char* value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix.assign(value); }

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline S3Configuration& WithObjectKeyPrefix(const Aws::String& value) { SetObjectKeyPrefix(value); return *this;}

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline S3Configuration& WithObjectKeyPrefix(Aws::String&& value) { SetObjectKeyPrefix(std::move(value)); return *this;}

    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline S3Configuration& WithObjectKeyPrefix(const char* value) { SetObjectKeyPrefix(value); return *this;}


    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline const S3EncryptionOption& GetEncryptionOption() const{ return m_encryptionOption; }

    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }

    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline void SetEncryptionOption(const S3EncryptionOption& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }

    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline void SetEncryptionOption(S3EncryptionOption&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }

    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline S3Configuration& WithEncryptionOption(const S3EncryptionOption& value) { SetEncryptionOption(value); return *this;}

    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline S3Configuration& WithEncryptionOption(S3EncryptionOption&& value) { SetEncryptionOption(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;

    S3EncryptionOption m_encryptionOption;
    bool m_encryptionOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
