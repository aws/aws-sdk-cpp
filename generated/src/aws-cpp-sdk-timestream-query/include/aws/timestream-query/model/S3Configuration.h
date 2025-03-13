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
    AWS_TIMESTREAMQUERY_API S3Configuration() = default;
    AWS_TIMESTREAMQUERY_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the S3 bucket under which error reports will be created.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3Configuration& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Prefix for the error report key. Timestream by default adds the following
     * prefix to the error report path. </p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const { return m_objectKeyPrefix; }
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }
    template<typename ObjectKeyPrefixT = Aws::String>
    void SetObjectKeyPrefix(ObjectKeyPrefixT&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::forward<ObjectKeyPrefixT>(value); }
    template<typename ObjectKeyPrefixT = Aws::String>
    S3Configuration& WithObjectKeyPrefix(ObjectKeyPrefixT&& value) { SetObjectKeyPrefix(std::forward<ObjectKeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Encryption at rest options for the error reports. If no encryption option is
     * specified, Timestream will choose SSE_S3 as default. </p>
     */
    inline S3EncryptionOption GetEncryptionOption() const { return m_encryptionOption; }
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }
    inline void SetEncryptionOption(S3EncryptionOption value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }
    inline S3Configuration& WithEncryptionOption(S3EncryptionOption value) { SetEncryptionOption(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;

    S3EncryptionOption m_encryptionOption{S3EncryptionOption::NOT_SET};
    bool m_encryptionOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
