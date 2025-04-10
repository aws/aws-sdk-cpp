﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A transition rule that describes when noncurrent objects transition to a
   * specified storage class.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage to change the object to after the object is noncurrent
     * for the specified number of days.</p>
     */
    inline const Aws::String& GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    template<typename StorageClassT = Aws::String>
    void SetStorageClass(StorageClassT&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::forward<StorageClassT>(value); }
    template<typename StorageClassT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails& WithStorageClass(StorageClassT&& value) { SetStorageClass(std::forward<StorageClassT>(value)); return *this;}
    ///@}
  private:

    int m_days{0};
    bool m_daysHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
