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
    AWS_SIMSPACEWEAVER_API LiveSimulationState();
    AWS_SIMSPACEWEAVER_API LiveSimulationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LiveSimulationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline const Aws::Vector<SimulationClock>& GetClocks() const{ return m_clocks; }

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline bool ClocksHasBeenSet() const { return m_clocksHasBeenSet; }

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline void SetClocks(const Aws::Vector<SimulationClock>& value) { m_clocksHasBeenSet = true; m_clocks = value; }

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline void SetClocks(Aws::Vector<SimulationClock>&& value) { m_clocksHasBeenSet = true; m_clocks = std::move(value); }

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline LiveSimulationState& WithClocks(const Aws::Vector<SimulationClock>& value) { SetClocks(value); return *this;}

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline LiveSimulationState& WithClocks(Aws::Vector<SimulationClock>&& value) { SetClocks(std::move(value)); return *this;}

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline LiveSimulationState& AddClocks(const SimulationClock& value) { m_clocksHasBeenSet = true; m_clocks.push_back(value); return *this; }

    /**
     * <p>A list of simulation clocks.</p>  <p>At this time, a simulation has
     * only one clock.</p> 
     */
    inline LiveSimulationState& AddClocks(SimulationClock&& value) { m_clocksHasBeenSet = true; m_clocks.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline const Aws::Vector<Domain>& GetDomains() const{ return m_domains; }

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline void SetDomains(const Aws::Vector<Domain>& value) { m_domainsHasBeenSet = true; m_domains = value; }

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline void SetDomains(Aws::Vector<Domain>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline LiveSimulationState& WithDomains(const Aws::Vector<Domain>& value) { SetDomains(value); return *this;}

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline LiveSimulationState& WithDomains(Aws::Vector<Domain>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline LiveSimulationState& AddDomains(const Domain& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    /**
     * <p>A list of domains for the simulation. For more information about domains, see
     * <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline LiveSimulationState& AddDomains(Domain&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SimulationClock> m_clocks;
    bool m_clocksHasBeenSet = false;

    Aws::Vector<Domain> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
