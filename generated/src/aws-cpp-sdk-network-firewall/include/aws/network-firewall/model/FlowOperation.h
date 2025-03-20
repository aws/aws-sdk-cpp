/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/FlowFilter.h>
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
   * <p>Contains information about a flow operation, such as related statuses, unique
   * identifiers, and all filters defined in the operation.</p> <p>Flow operations
   * let you manage the flows tracked in the flow table, also known as the firewall
   * table.</p> <p>A flow is network traffic that is monitored by a firewall, either
   * by stateful or stateless rules. For traffic to be considered part of a flow, it
   * must share Destination, DestinationPort, Direction, Protocol, Source, and
   * SourcePort. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FlowOperation">AWS
   * API Reference</a></p>
   */
  class FlowOperation
  {
  public:
    AWS_NETWORKFIREWALL_API FlowOperation() = default;
    AWS_NETWORKFIREWALL_API FlowOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FlowOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reqested <code>FlowOperation</code> ignores flows with an age (in
     * seconds) lower than <code>MinimumFlowAgeInSeconds</code>. You provide this for
     * start commands.</p>
     */
    inline int GetMinimumFlowAgeInSeconds() const { return m_minimumFlowAgeInSeconds; }
    inline bool MinimumFlowAgeInSecondsHasBeenSet() const { return m_minimumFlowAgeInSecondsHasBeenSet; }
    inline void SetMinimumFlowAgeInSeconds(int value) { m_minimumFlowAgeInSecondsHasBeenSet = true; m_minimumFlowAgeInSeconds = value; }
    inline FlowOperation& WithMinimumFlowAgeInSeconds(int value) { SetMinimumFlowAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the scope a flow operation. You can use up to 20 filters to configure
     * a single flow operation.</p>
     */
    inline const Aws::Vector<FlowFilter>& GetFlowFilters() const { return m_flowFilters; }
    inline bool FlowFiltersHasBeenSet() const { return m_flowFiltersHasBeenSet; }
    template<typename FlowFiltersT = Aws::Vector<FlowFilter>>
    void SetFlowFilters(FlowFiltersT&& value) { m_flowFiltersHasBeenSet = true; m_flowFilters = std::forward<FlowFiltersT>(value); }
    template<typename FlowFiltersT = Aws::Vector<FlowFilter>>
    FlowOperation& WithFlowFilters(FlowFiltersT&& value) { SetFlowFilters(std::forward<FlowFiltersT>(value)); return *this;}
    template<typename FlowFiltersT = FlowFilter>
    FlowOperation& AddFlowFilters(FlowFiltersT&& value) { m_flowFiltersHasBeenSet = true; m_flowFilters.emplace_back(std::forward<FlowFiltersT>(value)); return *this; }
    ///@}
  private:

    int m_minimumFlowAgeInSeconds{0};
    bool m_minimumFlowAgeInSecondsHasBeenSet = false;

    Aws::Vector<FlowFilter> m_flowFilters;
    bool m_flowFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
