/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafv2VisibilityConfigDetails.h>
#include <aws/securityhub/model/AwsWafv2RulesDetails.h>
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
   * <p> Details about an WAFv2 rule group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RuleGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RuleGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RuleGroupDetails();
    AWS_SECURITYHUB_API AwsWafv2RuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The web ACL capacity units (WCUs) required for this rule group. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline AwsWafv2RuleGroupDetails& WithCapacity(long long value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the rule group that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsWafv2RuleGroupDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the rule group. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AwsWafv2RuleGroupDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the rule group. You cannot change the name of a rule group after
     * you create it. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsWafv2RuleGroupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the entity. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsWafv2RuleGroupDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline const Aws::Vector<AwsWafv2RulesDetails>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<AwsWafv2RulesDetails>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<AwsWafv2RulesDetails>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline AwsWafv2RuleGroupDetails& WithRules(const Aws::Vector<AwsWafv2RulesDetails>& value) { SetRules(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithRules(Aws::Vector<AwsWafv2RulesDetails>&& value) { SetRules(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& AddRules(const AwsWafv2RulesDetails& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline AwsWafv2RuleGroupDetails& AddRules(AwsWafv2RulesDetails&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies whether the rule group is for an Amazon CloudFront distribution or
     * for a regional application. A regional application can be an Application Load
     * Balancer (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an
     * Amazon Cognito user pool. </p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline AwsWafv2RuleGroupDetails& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline AwsWafv2RuleGroupDetails& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const AwsWafv2VisibilityConfigDetails& GetVisibilityConfig() const{ return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    inline void SetVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }
    inline void SetVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }
    inline AwsWafv2RuleGroupDetails& WithVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { SetVisibilityConfig(value); return *this;}
    inline AwsWafv2RuleGroupDetails& WithVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { SetVisibilityConfig(std::move(value)); return *this;}
    ///@}
  private:

    long long m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AwsWafv2RulesDetails> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    AwsWafv2VisibilityConfigDetails m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
