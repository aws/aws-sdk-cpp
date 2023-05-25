/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails.h>
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
   * <p> Specifies the S3 Object Lock rule for the specified object. In Amazon S3,
   * Object Lock can help prevent objects from being deleted or overwritten for a
   * fixed amount of time or indefinitely. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketObjectLockConfigurationRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketObjectLockConfigurationRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDetails();
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfigurationRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline const AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& GetDefaultRetention() const{ return m_defaultRetention; }

    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline bool DefaultRetentionHasBeenSet() const { return m_defaultRetentionHasBeenSet; }

    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline void SetDefaultRetention(const AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& value) { m_defaultRetentionHasBeenSet = true; m_defaultRetention = value; }

    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline void SetDefaultRetention(AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails&& value) { m_defaultRetentionHasBeenSet = true; m_defaultRetention = std::move(value); }

    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDetails& WithDefaultRetention(const AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& value) { SetDefaultRetention(value); return *this;}

    /**
     * <p> The default Object Lock retention mode and period that you want to apply to
     * new objects placed in the specified bucket. </p>
     */
    inline AwsS3BucketObjectLockConfigurationRuleDetails& WithDefaultRetention(AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails&& value) { SetDefaultRetention(std::move(value)); return *this;}

  private:

    AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails m_defaultRetention;
    bool m_defaultRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
