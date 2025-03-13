/**
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
   * <p>A rule for when objects transition to specific storage classes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::String>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    template<typename StorageClassT = Aws::String>
    void SetStorageClass(StorageClassT&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::forward<StorageClassT>(value); }
    template<typename StorageClassT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(StorageClassT&& value) { SetStorageClass(std::forward<StorageClassT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    int m_days{0};
    bool m_daysHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
