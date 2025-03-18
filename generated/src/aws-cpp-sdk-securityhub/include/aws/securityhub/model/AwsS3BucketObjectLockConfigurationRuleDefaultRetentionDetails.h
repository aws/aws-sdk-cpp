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
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of days that you want to specify for the default retention
     * period. </p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. </p>
     */
    inline const Aws::String& GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    template<typename ModeT = Aws::String>
    void SetMode(ModeT&& value) { m_modeHasBeenSet = true; m_mode = std::forward<ModeT>(value); }
    template<typename ModeT = Aws::String>
    AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithMode(ModeT&& value) { SetMode(std::forward<ModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of years that you want to specify for the default retention
     * period. </p>
     */
    inline int GetYears() const { return m_years; }
    inline bool YearsHasBeenSet() const { return m_yearsHasBeenSet; }
    inline void SetYears(int value) { m_yearsHasBeenSet = true; m_years = value; }
    inline AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& WithYears(int value) { SetYears(value); return *this;}
    ///@}
  private:

    int m_days{0};
    bool m_daysHasBeenSet = false;

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;

    int m_years{0};
    bool m_yearsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
