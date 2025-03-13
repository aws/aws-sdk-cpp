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
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration() = default;
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketObjectLockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether the bucket has an Object Lock configuration enabled. </p>
     */
    inline const Aws::String& GetObjectLockEnabled() const { return m_objectLockEnabled; }
    inline bool ObjectLockEnabledHasBeenSet() const { return m_objectLockEnabledHasBeenSet; }
    template<typename ObjectLockEnabledT = Aws::String>
    void SetObjectLockEnabled(ObjectLockEnabledT&& value) { m_objectLockEnabledHasBeenSet = true; m_objectLockEnabled = std::forward<ObjectLockEnabledT>(value); }
    template<typename ObjectLockEnabledT = Aws::String>
    AwsS3BucketObjectLockConfiguration& WithObjectLockEnabled(ObjectLockEnabledT&& value) { SetObjectLockEnabled(std::forward<ObjectLockEnabledT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the Object Lock rule for the specified object. </p>
     */
    inline const AwsS3BucketObjectLockConfigurationRuleDetails& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = AwsS3BucketObjectLockConfigurationRuleDetails>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = AwsS3BucketObjectLockConfigurationRuleDetails>
    AwsS3BucketObjectLockConfiguration& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectLockEnabled;
    bool m_objectLockEnabledHasBeenSet = false;

    AwsS3BucketObjectLockConfigurationRuleDetails m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
