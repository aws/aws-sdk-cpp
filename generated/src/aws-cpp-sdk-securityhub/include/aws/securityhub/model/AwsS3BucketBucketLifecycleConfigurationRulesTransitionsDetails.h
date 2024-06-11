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
   * <p>A rule for when objects transition to specific storage classes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(const Aws::String& value) { SetDate(value); return *this;}
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(const char* value) { SetDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline int GetDays() const{ return m_days; }
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
    inline const Aws::String& GetStorageClass() const{ return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(const Aws::String& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline void SetStorageClass(Aws::String&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }
    inline void SetStorageClass(const char* value) { m_storageClassHasBeenSet = true; m_storageClass.assign(value); }
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(const Aws::String& value) { SetStorageClass(value); return *this;}
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(Aws::String&& value) { SetStorageClass(std::move(value)); return *this;}
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(const char* value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    int m_days;
    bool m_daysHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
