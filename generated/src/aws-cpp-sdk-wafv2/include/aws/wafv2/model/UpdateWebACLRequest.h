/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/DefaultAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/wafv2/model/DataProtectionConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/CaptchaConfig.h>
#include <aws/wafv2/model/ChallengeConfig.h>
#include <aws/wafv2/model/AssociationConfig.h>
#include <aws/wafv2/model/OnSourceDDoSProtectionConfig.h>
#include <aws/wafv2/model/ApplicationConfig.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class UpdateWebACLRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API UpdateWebACLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebACL"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateWebACLRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. For an Amplify application, use
     * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline UpdateWebACLRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateWebACLRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline const DefaultAction& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = DefaultAction>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = DefaultAction>
    UpdateWebACLRequest& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWebACLRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * manage. Each rule includes one top-level statement that WAF uses to identify
     * matching web requests, and parameters that govern how WAF handles them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    UpdateWebACLRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    UpdateWebACLRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const { return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    template<typename VisibilityConfigT = VisibilityConfig>
    void SetVisibilityConfig(VisibilityConfigT&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::forward<VisibilityConfigT>(value); }
    template<typename VisibilityConfigT = VisibilityConfig>
    UpdateWebACLRequest& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data protection to apply to the web request data for the web ACL.
     * This is a web ACL level data protection option. </p> <p>The data protection that
     * you configure for the web ACL alters the data that's available for any other
     * data collection activity, including your WAF logging destinations, web ACL
     * request sampling, and Amazon Security Lake data collection and management. Your
     * other option for data protection is in the logging configuration, which only
     * affects logging. </p>
     */
    inline const DataProtectionConfig& GetDataProtectionConfig() const { return m_dataProtectionConfig; }
    inline bool DataProtectionConfigHasBeenSet() const { return m_dataProtectionConfigHasBeenSet; }
    template<typename DataProtectionConfigT = DataProtectionConfig>
    void SetDataProtectionConfig(DataProtectionConfigT&& value) { m_dataProtectionConfigHasBeenSet = true; m_dataProtectionConfig = std::forward<DataProtectionConfigT>(value); }
    template<typename DataProtectionConfigT = DataProtectionConfig>
    UpdateWebACLRequest& WithDataProtectionConfig(DataProtectionConfigT&& value) { SetDataProtectionConfig(std::forward<DataProtectionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const { return m_lockToken; }
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
    template<typename LockTokenT = Aws::String>
    void SetLockToken(LockTokenT&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::forward<LockTokenT>(value); }
    template<typename LockTokenT = Aws::String>
    UpdateWebACLRequest& WithLockToken(LockTokenT&& value) { SetLockToken(std::forward<LockTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>. </p>
     * <p>For information about the limits on count and size for custom request and
     * response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const { return m_customResponseBodies; }
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }
    template<typename CustomResponseBodiesT = Aws::Map<Aws::String, CustomResponseBody>>
    void SetCustomResponseBodies(CustomResponseBodiesT&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::forward<CustomResponseBodiesT>(value); }
    template<typename CustomResponseBodiesT = Aws::Map<Aws::String, CustomResponseBody>>
    UpdateWebACLRequest& WithCustomResponseBodies(CustomResponseBodiesT&& value) { SetCustomResponseBodies(std::forward<CustomResponseBodiesT>(value)); return *this;}
    template<typename CustomResponseBodiesKeyT = Aws::String, typename CustomResponseBodiesValueT = CustomResponseBody>
    UpdateWebACLRequest& AddCustomResponseBodies(CustomResponseBodiesKeyT&& key, CustomResponseBodiesValueT&& value) {
      m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::forward<CustomResponseBodiesKeyT>(key), std::forward<CustomResponseBodiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const { return m_captchaConfig; }
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }
    template<typename CaptchaConfigT = CaptchaConfig>
    void SetCaptchaConfig(CaptchaConfigT&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::forward<CaptchaConfigT>(value); }
    template<typename CaptchaConfigT = CaptchaConfig>
    UpdateWebACLRequest& WithCaptchaConfig(CaptchaConfigT&& value) { SetCaptchaConfig(std::forward<CaptchaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline const ChallengeConfig& GetChallengeConfig() const { return m_challengeConfig; }
    inline bool ChallengeConfigHasBeenSet() const { return m_challengeConfigHasBeenSet; }
    template<typename ChallengeConfigT = ChallengeConfig>
    void SetChallengeConfig(ChallengeConfigT&& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = std::forward<ChallengeConfigT>(value); }
    template<typename ChallengeConfigT = ChallengeConfig>
    UpdateWebACLRequest& WithChallengeConfig(ChallengeConfigT&& value) { SetChallengeConfig(std::forward<ChallengeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p> <p>Example JSON: <code>"TokenDomains":
     * { "mywebsite.com", "myotherwebsite.com" }</code> </p> <p>Public suffixes aren't
     * allowed. For example, you can't use <code>gov.au</code> or <code>co.uk</code> as
     * token domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const { return m_tokenDomains; }
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    void SetTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::forward<TokenDomainsT>(value); }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    UpdateWebACLRequest& WithTokenDomains(TokenDomainsT&& value) { SetTokenDomains(std::forward<TokenDomainsT>(value)); return *this;}
    template<typename TokenDomainsT = Aws::String>
    UpdateWebACLRequest& AddTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.emplace_back(std::forward<TokenDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies custom configurations for the associations between the web ACL and
     * protected resources. </p> <p>Use this to customize the maximum size of the
     * request body that your protected resources forward to WAF for inspection. You
     * can customize this setting for CloudFront, API Gateway, Amazon Cognito, App
     * Runner, or Verified Access resources. The default setting is 16 KB (16,384
     * bytes). </p>  <p>You are charged additional fees when your protected
     * resources forward body sizes that are larger than the default. For more
     * information, see <a href="http://aws.amazon.com/waf/pricing/">WAF
     * Pricing</a>.</p>  <p>For Application Load Balancer and AppSync, the limit
     * is fixed at 8 KB (8,192 bytes).</p>
     */
    inline const AssociationConfig& GetAssociationConfig() const { return m_associationConfig; }
    inline bool AssociationConfigHasBeenSet() const { return m_associationConfigHasBeenSet; }
    template<typename AssociationConfigT = AssociationConfig>
    void SetAssociationConfig(AssociationConfigT&& value) { m_associationConfigHasBeenSet = true; m_associationConfig = std::forward<AssociationConfigT>(value); }
    template<typename AssociationConfigT = AssociationConfig>
    UpdateWebACLRequest& WithAssociationConfig(AssociationConfigT&& value) { SetAssociationConfig(std::forward<AssociationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of DDoS protection to apply to web request data for a web
     * ACL. For most scenarios, it is recommended to use the default protection level,
     * <code>ACTIVE_UNDER_DDOS</code>. If a web ACL is associated with multiple
     * Application Load Balancers, the changes you make to DDoS protection in that web
     * ACL will apply to all associated Application Load Balancers.</p>
     */
    inline const OnSourceDDoSProtectionConfig& GetOnSourceDDoSProtectionConfig() const { return m_onSourceDDoSProtectionConfig; }
    inline bool OnSourceDDoSProtectionConfigHasBeenSet() const { return m_onSourceDDoSProtectionConfigHasBeenSet; }
    template<typename OnSourceDDoSProtectionConfigT = OnSourceDDoSProtectionConfig>
    void SetOnSourceDDoSProtectionConfig(OnSourceDDoSProtectionConfigT&& value) { m_onSourceDDoSProtectionConfigHasBeenSet = true; m_onSourceDDoSProtectionConfig = std::forward<OnSourceDDoSProtectionConfigT>(value); }
    template<typename OnSourceDDoSProtectionConfigT = OnSourceDDoSProtectionConfig>
    UpdateWebACLRequest& WithOnSourceDDoSProtectionConfig(OnSourceDDoSProtectionConfigT&& value) { SetOnSourceDDoSProtectionConfig(std::forward<OnSourceDDoSProtectionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the ability for the WAF console to store and retrieve application
     * attributes. Application attributes help WAF give recommendations for protection
     * packs.</p> <p>When using <code>UpdateWebACL</code>,
     * <code>ApplicationConfig</code> follows these rules:</p> <ul> <li> <p>If you omit
     * <code>ApplicationConfig</code> from the request, all existing entries in the web
     * ACL are retained.</p> </li> <li> <p>If you include
     * <code>ApplicationConfig</code>, entries must match the existing values exactly.
     * Any attempt to modify existing entries will result in an error.</p> </li> </ul>
     */
    inline const ApplicationConfig& GetApplicationConfig() const { return m_applicationConfig; }
    inline bool ApplicationConfigHasBeenSet() const { return m_applicationConfigHasBeenSet; }
    template<typename ApplicationConfigT = ApplicationConfig>
    void SetApplicationConfig(ApplicationConfigT&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::forward<ApplicationConfigT>(value); }
    template<typename ApplicationConfigT = ApplicationConfig>
    UpdateWebACLRequest& WithApplicationConfig(ApplicationConfigT&& value) { SetApplicationConfig(std::forward<ApplicationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    DataProtectionConfig m_dataProtectionConfig;
    bool m_dataProtectionConfigHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;

    CaptchaConfig m_captchaConfig;
    bool m_captchaConfigHasBeenSet = false;

    ChallengeConfig m_challengeConfig;
    bool m_challengeConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;

    AssociationConfig m_associationConfig;
    bool m_associationConfigHasBeenSet = false;

    OnSourceDDoSProtectionConfig m_onSourceDDoSProtectionConfig;
    bool m_onSourceDDoSProtectionConfigHasBeenSet = false;

    ApplicationConfig m_applicationConfig;
    bool m_applicationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
