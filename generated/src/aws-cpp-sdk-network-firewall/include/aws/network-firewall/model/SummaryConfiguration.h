/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/SummaryRuleOption.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A complex type that specifies which Suricata rule metadata fields to use when
   * displaying threat information. Contains:</p> <ul> <li> <p>
   * <code>RuleOptions</code> - The Suricata rule options fields to extract and
   * display</p> </li> </ul> <p>These settings affect how threat information appears
   * in both the console and API responses. Summaries are available for rule groups
   * you manage and for active threat defense Amazon Web Services managed rule
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SummaryConfiguration">AWS
   * API Reference</a></p>
   */
  class SummaryConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API SummaryConfiguration() = default;
    AWS_NETWORKFIREWALL_API SummaryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SummaryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the selected rule options returned by
     * <a>DescribeRuleGroupSummary</a>.</p>
     */
    inline const Aws::Vector<SummaryRuleOption>& GetRuleOptions() const { return m_ruleOptions; }
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }
    template<typename RuleOptionsT = Aws::Vector<SummaryRuleOption>>
    void SetRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::forward<RuleOptionsT>(value); }
    template<typename RuleOptionsT = Aws::Vector<SummaryRuleOption>>
    SummaryConfiguration& WithRuleOptions(RuleOptionsT&& value) { SetRuleOptions(std::forward<RuleOptionsT>(value)); return *this;}
    inline SummaryConfiguration& AddRuleOptions(SummaryRuleOption value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<SummaryRuleOption> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
