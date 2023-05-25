/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class DeleteSamplingRuleRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API DeleteSamplingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSamplingRule"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleARN() const{ return m_ruleARN; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline bool RuleARNHasBeenSet() const { return m_ruleARNHasBeenSet; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(const Aws::String& value) { m_ruleARNHasBeenSet = true; m_ruleARN = value; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(Aws::String&& value) { m_ruleARNHasBeenSet = true; m_ruleARN = std::move(value); }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(const char* value) { m_ruleARNHasBeenSet = true; m_ruleARN.assign(value); }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleARN(const Aws::String& value) { SetRuleARN(value); return *this;}

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleARN(Aws::String&& value) { SetRuleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline DeleteSamplingRuleRequest& WithRuleARN(const char* value) { SetRuleARN(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleARN;
    bool m_ruleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
