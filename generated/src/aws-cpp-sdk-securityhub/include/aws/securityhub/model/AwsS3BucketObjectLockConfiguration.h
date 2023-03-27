/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketObjectLockConfigurationRuleDetails.h>
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
   * <p> The container element for S3 Object Lock configuration parameters. In Amazon
   * S3, Object Lock can help prevent objects from being deleted or overwritten for a
   * fixed amount of time or indefinitely. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketObjectLockConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketObjectLockConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration();
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline const Aws::String& GetObjectLockEnabled() const{ return m_objectLockEnabled; }

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline bool ObjectLockEnabledHasBeenSet() const { return m_objectLockEnabledHasBeenSet; }

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline void SetObjectLockEnabled(const Aws::String& value) { m_objectLockEnabledHasBeenSet = true; m_objectLockEnabled = value; }

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline void SetObjectLockEnabled(Aws::String&& value) { m_objectLockEnabledHasBeenSet = true; m_objectLockEnabled = std::move(value); }

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline void SetObjectLockEnabled(const char* value) { m_objectLockEnabledHasBeenSet = true; m_objectLockEnabled.assign(value); }

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline AwsS3BucketObjectLockConfiguration& WithObjectLockEnabled(const Aws::String& value) { SetObjectLockEnabled(value); return *this;}

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline AwsS3BucketObjectLockConfiguration& WithObjectLockEnabled(Aws::String&& value) { SetObjectLockEnabled(std::move(value)); return *this;}

    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline AwsS3BucketObjectLockConfiguration& WithObjectLockEnabled(const char* value) { SetObjectLockEnabled(value); return *this;}


    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline const AwsS3BucketObjectLockConfigurationRuleDetails& GetRule() const{ return m_rule; }

    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline void SetRule(const AwsS3BucketObjectLockConfigurationRuleDetails& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline void SetRule(AwsS3BucketObjectLockConfigurationRuleDetails&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline AwsS3BucketObjectLockConfiguration& WithRule(const AwsS3BucketObjectLockConfigurationRuleDetails& value) { SetRule(value); return *this;}

    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline AwsS3BucketObjectLockConfiguration& WithRule(AwsS3BucketObjectLockConfigurationRuleDetails&& value) { SetRule(std::move(value)); return *this;}

  private:

    Aws::String m_objectLockEnabled;
    bool m_objectLockEnabledHasBeenSet = false;

    AwsS3BucketObjectLockConfigurationRuleDetails m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
