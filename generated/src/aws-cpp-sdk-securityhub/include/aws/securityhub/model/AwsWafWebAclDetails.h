/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafWebAclRule.h>
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
   * <p>Provides information about an WAF web access control list (web
   * ACL).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafWebAclDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafWebAclDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafWebAclDetails();
    AWS_SECURITYHUB_API AwsWafWebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafWebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline AwsWafWebAclDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline AwsWafWebAclDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the web ACL. You can't change the name of a
     * web ACL after you create it.</p>
     */
    inline AwsWafWebAclDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline const Aws::String& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline void SetDefaultAction(const Aws::String& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline void SetDefaultAction(Aws::String&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline void SetDefaultAction(const char* value) { m_defaultActionHasBeenSet = true; m_defaultAction.assign(value); }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline AwsWafWebAclDetails& WithDefaultAction(const Aws::String& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline AwsWafWebAclDetails& WithDefaultAction(Aws::String&& value) { SetDefaultAction(std::move(value)); return *this;}

    /**
     * <p>The action to perform if none of the rules contained in the web ACL
     * match.</p>
     */
    inline AwsWafWebAclDetails& WithDefaultAction(const char* value) { SetDefaultAction(value); return *this;}


    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline const Aws::Vector<AwsWafWebAclRule>& GetRules() const{ return m_rules; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline void SetRules(const Aws::Vector<AwsWafWebAclRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline void SetRules(Aws::Vector<AwsWafWebAclRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline AwsWafWebAclDetails& WithRules(const Aws::Vector<AwsWafWebAclRule>& value) { SetRules(value); return *this;}

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline AwsWafWebAclDetails& WithRules(Aws::Vector<AwsWafWebAclRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline AwsWafWebAclDetails& AddRules(const AwsWafWebAclRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule.</p>
     */
    inline AwsWafWebAclDetails& AddRules(AwsWafWebAclRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline AwsWafWebAclDetails& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline AwsWafWebAclDetails& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a web ACL.</p>
     */
    inline AwsWafWebAclDetails& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::Vector<AwsWafWebAclRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
