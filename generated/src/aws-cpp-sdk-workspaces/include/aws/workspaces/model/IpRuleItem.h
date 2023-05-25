/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a rule for an IP access control group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/IpRuleItem">AWS
   * API Reference</a></p>
   */
  class IpRuleItem
  {
  public:
    AWS_WORKSPACES_API IpRuleItem();
    AWS_WORKSPACES_API IpRuleItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API IpRuleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetIpRule() const{ return m_ipRule; }

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline bool IpRuleHasBeenSet() const { return m_ipRuleHasBeenSet; }

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline void SetIpRule(const Aws::String& value) { m_ipRuleHasBeenSet = true; m_ipRule = value; }

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline void SetIpRule(Aws::String&& value) { m_ipRuleHasBeenSet = true; m_ipRule = std::move(value); }

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline void SetIpRule(const char* value) { m_ipRuleHasBeenSet = true; m_ipRule.assign(value); }

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline IpRuleItem& WithIpRule(const Aws::String& value) { SetIpRule(value); return *this;}

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline IpRuleItem& WithIpRule(Aws::String&& value) { SetIpRule(std::move(value)); return *this;}

    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline IpRuleItem& WithIpRule(const char* value) { SetIpRule(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetRuleDesc() const{ return m_ruleDesc; }

    /**
     * <p>The description.</p>
     */
    inline bool RuleDescHasBeenSet() const { return m_ruleDescHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetRuleDesc(const Aws::String& value) { m_ruleDescHasBeenSet = true; m_ruleDesc = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetRuleDesc(Aws::String&& value) { m_ruleDescHasBeenSet = true; m_ruleDesc = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetRuleDesc(const char* value) { m_ruleDescHasBeenSet = true; m_ruleDesc.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline IpRuleItem& WithRuleDesc(const Aws::String& value) { SetRuleDesc(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline IpRuleItem& WithRuleDesc(Aws::String&& value) { SetRuleDesc(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline IpRuleItem& WithRuleDesc(const char* value) { SetRuleDesc(value); return *this;}

  private:

    Aws::String m_ipRule;
    bool m_ipRuleHasBeenSet = false;

    Aws::String m_ruleDesc;
    bool m_ruleDescHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
