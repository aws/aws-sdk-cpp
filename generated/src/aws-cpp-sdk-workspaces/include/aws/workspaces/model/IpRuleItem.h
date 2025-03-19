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
    AWS_WORKSPACES_API IpRuleItem() = default;
    AWS_WORKSPACES_API IpRuleItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API IpRuleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetIpRule() const { return m_ipRule; }
    inline bool IpRuleHasBeenSet() const { return m_ipRuleHasBeenSet; }
    template<typename IpRuleT = Aws::String>
    void SetIpRule(IpRuleT&& value) { m_ipRuleHasBeenSet = true; m_ipRule = std::forward<IpRuleT>(value); }
    template<typename IpRuleT = Aws::String>
    IpRuleItem& WithIpRule(IpRuleT&& value) { SetIpRule(std::forward<IpRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetRuleDesc() const { return m_ruleDesc; }
    inline bool RuleDescHasBeenSet() const { return m_ruleDescHasBeenSet; }
    template<typename RuleDescT = Aws::String>
    void SetRuleDesc(RuleDescT&& value) { m_ruleDescHasBeenSet = true; m_ruleDesc = std::forward<RuleDescT>(value); }
    template<typename RuleDescT = Aws::String>
    IpRuleItem& WithRuleDesc(RuleDescT&& value) { SetRuleDesc(std::forward<RuleDescT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipRule;
    bool m_ipRuleHasBeenSet = false;

    Aws::String m_ruleDesc;
    bool m_ruleDescHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
