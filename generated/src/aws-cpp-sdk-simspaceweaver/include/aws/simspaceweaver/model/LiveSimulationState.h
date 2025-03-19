/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simspaceweaver/model/SimulationClock.h>
#include <aws/simspaceweaver/model/Domain.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>A collection of additional state information, such as domain and clock
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/LiveSimulationState">AWS
   * API Reference</a></p>
   */
  class LiveSimulationState
  {
  public:
    AWS_SIMSPACEWEAVER_API LiveSimulationState() = default;
    AWS_SIMSPACEWEAVER_API LiveSimulationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LiveSimulationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline const Aws::Vector<SimulationClock>& GetClocks() const { return m_clocks; }
    inline bool ClocksHasBeenSet() const { return m_clocksHasBeenSet; }
    template<typename ClocksT = Aws::Vector<SimulationClock>>
    void SetClocks(ClocksT&& value) { m_clocksHasBeenSet = true; m_clocks = std::forward<ClocksT>(value); }
    template<typename ClocksT = Aws::Vector<SimulationClock>>
    LiveSimulationState& WithClocks(ClocksT&& value) { SetClocks(std::forward<ClocksT>(value)); return *this;}
    template<typename ClocksT = SimulationClock>
    LiveSimulationState& AddClocks(ClocksT&& value) { m_clocksHasBeenSet = true; m_clocks.emplace_back(std::forward<ClocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html#what-is_key-concepts_domains">Key
     * concepts: Domains</a> in the <i>SimSpace Weaver User Guide</i>.</p>
     */
    inline const Aws::Vector<Domain>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<Domain>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<Domain>>
    LiveSimulationState& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = Domain>
    LiveSimulationState& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SimulationClock> m_clocks;
    bool m_clocksHasBeenSet = false;

    Aws::Vector<Domain> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
