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
   * <p> The default S3 Object Lock retention mode and period that you want to apply
   * to new objects placed in the specified Amazon S3 bucket. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails();
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of days that you want to specify for the default retention
     * period. </p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p> The number of days that you want to specify for the default retention
     * period. </p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p> The number of days that you want to specify for the default retention
     * period. </p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p> The number of days that you want to specify for the default retention
     * period. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithDays(int value) { SetDays(value); return *this;}


    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithMode(const Aws::String& value) { SetMode(value); return *this;}

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithMode(const char* value) { SetMode(value); return *this;}


    /**
     * <p> The number of years that you want to specify for the default retention
     * period. </p>
     */
    inline int GetYears() const{ return m_years; }

    /**
     * <p> The number of years that you want to specify for the default retention
     * period. </p>
     */
    inline bool YearsHasBeenSet() const { return m_yearsHasBeenSet; }

    /**
     * <p> The number of years that you want to specify for the default retention
     * period. </p>
     */
    inline void SetYears(int value) { m_yearsHasBeenSet = true; m_years = value; }

    /**
     * <p> The number of years that you want to specify for the default retention
     * period. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithYears(int value) { SetYears(value); return *this;}

  private:

    int m_days;
    bool m_daysHasBeenSet = false;

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;

    int m_years;
    bool m_yearsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
