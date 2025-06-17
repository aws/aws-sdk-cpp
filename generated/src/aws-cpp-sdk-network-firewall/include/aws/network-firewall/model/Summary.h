/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/RuleSummary.h>
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
   * <p>A complex type containing summaries of security protections provided by a
   * rule group.</p> <p>Network Firewall extracts this information from selected
   * fields in the rule group's Suricata rules, based on your
   * <a>SummaryConfiguration</a> settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Summary">AWS
   * API Reference</a></p>
   */
  class Summary
  {
  public:
    AWS_NETWORKFIREWALL_API Summary() = default;
    AWS_NETWORKFIREWALL_API Summary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <a>RuleSummary</a> objects containing individual rule details
     * that had been configured by the rulegroup's SummaryConfiguration.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRuleSummaries() const { return m_ruleSummaries; }
    inline bool RuleSummariesHasBeenSet() const { return m_ruleSummariesHasBeenSet; }
    template<typename RuleSummariesT = Aws::Vector<RuleSummary>>
    void SetRuleSummaries(RuleSummariesT&& value) { m_ruleSummariesHasBeenSet = true; m_ruleSummaries = std::forward<RuleSummariesT>(value); }
    template<typename RuleSummariesT = Aws::Vector<RuleSummary>>
    Summary& WithRuleSummaries(RuleSummariesT&& value) { SetRuleSummaries(std::forward<RuleSummariesT>(value)); return *this;}
    template<typename RuleSummariesT = RuleSummary>
    Summary& AddRuleSummaries(RuleSummariesT&& value) { m_ruleSummariesHasBeenSet = true; m_ruleSummaries.emplace_back(std::forward<RuleSummariesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RuleSummary> m_ruleSummaries;
    bool m_ruleSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
