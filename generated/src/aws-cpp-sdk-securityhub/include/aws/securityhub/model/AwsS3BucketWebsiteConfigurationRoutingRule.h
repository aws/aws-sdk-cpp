/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRuleCondition.h>
#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRuleRedirect.h>
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
   * <p>A rule for redirecting requests to the website.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfigurationRoutingRule">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfigurationRoutingRule
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRule() = default;
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the condition that must be met in order to apply the routing
     * rule.</p>
     */
    inline const AwsS3BucketWebsiteConfigurationRoutingRuleCondition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = AwsS3BucketWebsiteConfigurationRoutingRuleCondition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = AwsS3BucketWebsiteConfigurationRoutingRuleCondition>
    AwsS3BucketWebsiteConfigurationRoutingRule& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the rules to redirect the request if the condition in
     * <code>Condition</code> is met.</p>
     */
    inline const AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& GetRedirect() const { return m_redirect; }
    inline bool RedirectHasBeenSet() const { return m_redirectHasBeenSet; }
    template<typename RedirectT = AwsS3BucketWebsiteConfigurationRoutingRuleRedirect>
    void SetRedirect(RedirectT&& value) { m_redirectHasBeenSet = true; m_redirect = std::forward<RedirectT>(value); }
    template<typename RedirectT = AwsS3BucketWebsiteConfigurationRoutingRuleRedirect>
    AwsS3BucketWebsiteConfigurationRoutingRule& WithRedirect(RedirectT&& value) { SetRedirect(std::forward<RedirectT>(value)); return *this;}
    ///@}
  private:

    AwsS3BucketWebsiteConfigurationRoutingRuleCondition m_condition;
    bool m_conditionHasBeenSet = false;

    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect m_redirect;
    bool m_redirectHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
