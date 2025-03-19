/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/IdentifiedType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The analysis result for Network Firewall's stateless rule group analyzer.
   * Every time you call <a>CreateRuleGroup</a>, <a>UpdateRuleGroup</a>, or
   * <a>DescribeRuleGroup</a> on a stateless rule group, Network Firewall analyzes
   * the stateless rule groups in your account and identifies the rules that might
   * adversely effect your firewall's functionality. For example, if Network Firewall
   * detects a rule that's routing traffic asymmetrically, which impacts the
   * service's ability to properly process traffic, the service includes the rule in
   * a list of analysis results.</p> <p>The <code>AnalysisResult</code> data type is
   * not related to traffic analysis reports you generate using
   * <a>StartAnalysisReport</a>. For information on traffic analysis report results,
   * see <a>AnalysisTypeReportResult</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AnalysisResult">AWS
   * API Reference</a></p>
   */
  class AnalysisResult
  {
  public:
    AWS_NETWORKFIREWALL_API AnalysisResult() = default;
    AWS_NETWORKFIREWALL_API AnalysisResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AnalysisResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The priority number of the stateless rules identified in the analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifiedRuleIds() const { return m_identifiedRuleIds; }
    inline bool IdentifiedRuleIdsHasBeenSet() const { return m_identifiedRuleIdsHasBeenSet; }
    template<typename IdentifiedRuleIdsT = Aws::Vector<Aws::String>>
    void SetIdentifiedRuleIds(IdentifiedRuleIdsT&& value) { m_identifiedRuleIdsHasBeenSet = true; m_identifiedRuleIds = std::forward<IdentifiedRuleIdsT>(value); }
    template<typename IdentifiedRuleIdsT = Aws::Vector<Aws::String>>
    AnalysisResult& WithIdentifiedRuleIds(IdentifiedRuleIdsT&& value) { SetIdentifiedRuleIds(std::forward<IdentifiedRuleIdsT>(value)); return *this;}
    template<typename IdentifiedRuleIdsT = Aws::String>
    AnalysisResult& AddIdentifiedRuleIds(IdentifiedRuleIdsT&& value) { m_identifiedRuleIdsHasBeenSet = true; m_identifiedRuleIds.emplace_back(std::forward<IdentifiedRuleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of rule configurations that Network Firewall analyzes your rule
     * groups for. Network Firewall analyzes stateless rule groups for the following
     * types of rule configurations:</p> <ul> <li> <p>
     * <code>STATELESS_RULE_FORWARDING_ASYMMETRICALLY</code> </p> <p>Cause: One or more
     * stateless rules with the action <code>pass</code> or <code>forward</code> are
     * forwarding traffic asymmetrically. Specifically, the rule's set of source IP
     * addresses or their associated port numbers, don't match the set of destination
     * IP addresses or their associated port numbers.</p> <p>To mitigate: Make sure
     * that there's an existing return path. For example, if the rule allows traffic
     * from source 10.1.0.0/24 to destination 20.1.0.0/24, you should allow return
     * traffic from source 20.1.0.0/24 to destination 10.1.0.0/24.</p> </li> <li> <p>
     * <code>STATELESS_RULE_CONTAINS_TCP_FLAGS</code> </p> <p>Cause: At least one
     * stateless rule with the action <code>pass</code> or<code>forward</code> contains
     * TCP flags that are inconsistent in the forward and return directions.</p> <p>To
     * mitigate: Prevent asymmetric routing issues caused by TCP flags by following
     * these actions:</p> <ul> <li> <p>Remove unnecessary TCP flag inspections from the
     * rules.</p> </li> <li> <p>If you need to inspect TCP flags, check that the rules
     * correctly account for changes in TCP flags throughout the TCP connection cycle,
     * for example <code>SYN</code> and <code>ACK</code> flags used in a 3-way TCP
     * handshake.</p> </li> </ul> </li> </ul>
     */
    inline IdentifiedType GetIdentifiedType() const { return m_identifiedType; }
    inline bool IdentifiedTypeHasBeenSet() const { return m_identifiedTypeHasBeenSet; }
    inline void SetIdentifiedType(IdentifiedType value) { m_identifiedTypeHasBeenSet = true; m_identifiedType = value; }
    inline AnalysisResult& WithIdentifiedType(IdentifiedType value) { SetIdentifiedType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides analysis details for the identified rule.</p>
     */
    inline const Aws::String& GetAnalysisDetail() const { return m_analysisDetail; }
    inline bool AnalysisDetailHasBeenSet() const { return m_analysisDetailHasBeenSet; }
    template<typename AnalysisDetailT = Aws::String>
    void SetAnalysisDetail(AnalysisDetailT&& value) { m_analysisDetailHasBeenSet = true; m_analysisDetail = std::forward<AnalysisDetailT>(value); }
    template<typename AnalysisDetailT = Aws::String>
    AnalysisResult& WithAnalysisDetail(AnalysisDetailT&& value) { SetAnalysisDetail(std::forward<AnalysisDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_identifiedRuleIds;
    bool m_identifiedRuleIdsHasBeenSet = false;

    IdentifiedType m_identifiedType{IdentifiedType::NOT_SET};
    bool m_identifiedTypeHasBeenSet = false;

    Aws::String m_analysisDetail;
    bool m_analysisDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
