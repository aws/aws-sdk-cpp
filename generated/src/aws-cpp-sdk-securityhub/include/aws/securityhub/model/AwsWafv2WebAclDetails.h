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
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails();
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the web ACL. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the web ACL. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the web ACL. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the web ACL. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the web ACL. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline AwsWafv2WebAclDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline AwsWafv2WebAclDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the web ACL that you want to associate
     * with the resource. </p>
     */
    inline AwsWafv2WebAclDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> Indicates whether this web ACL is managed by Firewall Manager. </p>
     */
    inline bool GetManagedbyFirewallManager() const{ return m_managedbyFirewallManager; }

    /**
     * <p> Indicates whether this web ACL is managed by Firewall Manager. </p>
     */
    inline bool ManagedbyFirewallManagerHasBeenSet() const { return m_managedbyFirewallManagerHasBeenSet; }

    /**
     * <p> Indicates whether this web ACL is managed by Firewall Manager. </p>
     */
    inline void SetManagedbyFirewallManager(bool value) { m_managedbyFirewallManagerHasBeenSet = true; m_managedbyFirewallManager = value; }

    /**
     * <p> Indicates whether this web ACL is managed by Firewall Manager. </p>
     */
    inline AwsWafv2WebAclDetails& WithManagedbyFirewallManager(bool value) { SetManagedbyFirewallManager(value); return *this;}


    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p> The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p> The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     */
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p> The web ACL capacity units (WCUs) currently being used by this web ACL. </p>
     */
    inline AwsWafv2WebAclDetails& WithCapacity(long long value) { SetCapacity(value); return *this;}


    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline const AwsWafv2WebAclCaptchaConfigDetails& GetCaptchaConfig() const{ return m_captchaConfig; }

    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }

    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline void SetCaptchaConfig(const AwsWafv2WebAclCaptchaConfigDetails& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = value; }

    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline void SetCaptchaConfig(AwsWafv2WebAclCaptchaConfigDetails&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::move(value); }

    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline AwsWafv2WebAclDetails& WithCaptchaConfig(const AwsWafv2WebAclCaptchaConfigDetails& value) { SetCaptchaConfig(value); return *this;}

    /**
     * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
     * have their own <code>CaptchaConfig</code> settings. </p>
     */
    inline AwsWafv2WebAclDetails& WithCaptchaConfig(AwsWafv2WebAclCaptchaConfigDetails&& value) { SetCaptchaConfig(std::move(value)); return *this;}


    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline const AwsWafv2WebAclActionDetails& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline void SetDefaultAction(const AwsWafv2WebAclActionDetails& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline void SetDefaultAction(AwsWafv2WebAclActionDetails&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline AwsWafv2WebAclDetails& WithDefaultAction(const AwsWafv2WebAclActionDetails& value) { SetDefaultAction(value); return *this;}

    /**
     * <p> The action to perform if none of the Rules contained in the web ACL match.
     * </p>
     */
    inline AwsWafv2WebAclDetails& WithDefaultAction(AwsWafv2WebAclActionDetails&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline AwsWafv2WebAclDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline AwsWafv2WebAclDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the web ACL that helps with identification. </p>
     */
    inline AwsWafv2WebAclDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline const Aws::Vector<AwsWafv2RulesDetails>& GetRules() const{ return m_rules; }

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(const Aws::Vector<AwsWafv2RulesDetails>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(Aws::Vector<AwsWafv2RulesDetails>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline AwsWafv2WebAclDetails& WithRules(const Aws::Vector<AwsWafv2RulesDetails>& value) { SetRules(value); return *this;}

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline AwsWafv2WebAclDetails& WithRules(Aws::Vector<AwsWafv2RulesDetails>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline AwsWafv2WebAclDetails& AddRules(const AwsWafv2RulesDetails& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p> The Rule statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline AwsWafv2WebAclDetails& AddRules(AwsWafv2RulesDetails&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const AwsWafv2VisibilityConfigDetails& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline AwsWafv2WebAclDetails& WithVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline AwsWafv2WebAclDetails& WithVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { SetVisibilityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_managedbyFirewallManager;
    bool m_managedbyFirewallManagerHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_capacity;
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
