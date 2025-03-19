/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DataSourceS3Configuration">AWS
   * API Reference</a></p>
   */
  class DataSourceS3Configuration
  {
  public:
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration() = default;
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataSourceS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bucket name of the customer S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    DataSourceS3Configuration& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::String& GetObjectKeyPrefix() const { return m_objectKeyPrefix; }
    inline bool ObjectKeyPrefixHasBeenSet() const { return m_objectKeyPrefixHasBeenSet; }
    template<typename ObjectKeyPrefixT = Aws::String>
    void SetObjectKeyPrefix(ObjectKeyPrefixT&& value) { m_objectKeyPrefixHasBeenSet = true; m_objectKeyPrefix = std::forward<ObjectKeyPrefixT>(value); }
    template<typename ObjectKeyPrefixT = Aws::String>
    DataSourceS3Configuration& WithObjectKeyPrefix(ObjectKeyPrefixT&& value) { SetObjectKeyPrefix(std::forward<ObjectKeyPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKeyPrefix;
    bool m_objectKeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
