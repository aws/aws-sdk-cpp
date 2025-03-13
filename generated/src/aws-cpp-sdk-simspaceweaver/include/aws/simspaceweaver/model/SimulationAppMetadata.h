/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/SimulationAppStatus.h>
#include <aws/simspaceweaver/model/SimulationAppTargetStatus.h>
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
   * <p>A collection of metadata about the app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/SimulationAppMetadata">AWS
   * API Reference</a></p>
   */
  class SimulationAppMetadata
  {
  public:
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata() = default;
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html#what-is_key-concepts_domains">Key
     * concepts: Domains</a> in the <i>SimSpace Weaver User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    SimulationAppMetadata& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SimulationAppMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const { return m_simulation; }
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }
    template<typename SimulationT = Aws::String>
    void SetSimulation(SimulationT&& value) { m_simulationHasBeenSet = true; m_simulation = std::forward<SimulationT>(value); }
    template<typename SimulationT = Aws::String>
    SimulationAppMetadata& WithSimulation(SimulationT&& value) { SetSimulation(std::forward<SimulationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the app.</p>
     */
    inline SimulationAppStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SimulationAppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SimulationAppMetadata& WithStatus(SimulationAppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired status of the app.</p>
     */
    inline SimulationAppTargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(SimulationAppTargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline SimulationAppMetadata& WithTargetStatus(SimulationAppTargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;

    SimulationAppStatus m_status{SimulationAppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SimulationAppTargetStatus m_targetStatus{SimulationAppTargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
