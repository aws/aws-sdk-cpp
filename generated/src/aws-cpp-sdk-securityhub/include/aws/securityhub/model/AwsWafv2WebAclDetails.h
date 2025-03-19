/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsWafv2WebAclCaptchaConfigDetails.h>
#include <aws/securityhub/model/AwsWafv2WebAclActionDetails.h>
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
   * <p> Details about an WAFv2 web Access Control List (ACL). </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2WebAclDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2WebAclDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the web ACL. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsWafv2WebAclDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsWafv2WebAclDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether this web ACL is managed by Firewall Manager. </p>
     */
    inline bool GetManagedbyFirewallManager() const { return m_managedbyFirewallManager; }
    inline bool ManagedbyFirewallManagerHasBeenSet() const { return m_managedbyFirewallManagerHasBeenSet; }
    inline void SetManagedbyFirewallManager(bool value) { m_managedbyFirewallManagerHasBeenSet = true; m_managedbyFirewallManager = value; }
    inline AwsWafv2WebAclDetails& WithManagedbyFirewallManager(bool value) { SetManagedbyFirewallManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsWafv2WebAclDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     */
    inline long long GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline AwsWafv2WebAclDetails& WithCapacity(long long value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline const AwsWafv2WebAclCaptchaConfigDetails& GetCaptchaConfig() const { return m_captchaConfig; }
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }
    template<typename CaptchaConfigT = AwsWafv2WebAclCaptchaConfigDetails>
    void SetCaptchaConfig(CaptchaConfigT&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::forward<CaptchaConfigT>(value); }
    template<typename CaptchaConfigT = AwsWafv2WebAclCaptchaConfigDetails>
    AwsWafv2WebAclDetails& WithCaptchaConfig(CaptchaConfigT&& value) { SetCaptchaConfig(std::forward<CaptchaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline const AwsWafv2WebAclActionDetails& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = AwsWafv2WebAclActionDetails>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = AwsWafv2WebAclActionDetails>
    AwsWafv2WebAclDetails& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsWafv2WebAclDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline const Aws::Vector<AwsWafv2RulesDetails>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<AwsWafv2RulesDetails>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<AwsWafv2RulesDetails>>
    AwsWafv2WebAclDetails& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = AwsWafv2RulesDetails>
    AwsWafv2WebAclDetails& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const AwsWafv2VisibilityConfigDetails& GetVisibilityConfig() const { return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    template<typename VisibilityConfigT = AwsWafv2VisibilityConfigDetails>
    void SetVisibilityConfig(VisibilityConfigT&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::forward<VisibilityConfigT>(value); }
    template<typename VisibilityConfigT = AwsWafv2VisibilityConfigDetails>
    AwsWafv2WebAclDetails& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_managedbyFirewallManager{false};
    bool m_managedbyFirewallManagerHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_capacity{0};
    bool m_capacityHasBeenSet = false;

    AwsWafv2WebAclCaptchaConfigDetails m_captchaConfig;
    bool m_captchaConfigHasBeenSet = false;

    AwsWafv2WebAclActionDetails m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AwsWafv2RulesDetails> m_rules;
    bool m_rulesHasBeenSet = false;

    AwsWafv2VisibilityConfigDetails m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
