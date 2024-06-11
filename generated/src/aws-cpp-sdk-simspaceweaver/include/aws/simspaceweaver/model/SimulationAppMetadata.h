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
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata();
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationAppMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html#what-is_key-concepts_domains">Key
     * concepts: Domains</a> in the <i>SimSpace Weaver User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline SimulationAppMetadata& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline SimulationAppMetadata& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline SimulationAppMetadata& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SimulationAppMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SimulationAppMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SimulationAppMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }
    inline SimulationAppMetadata& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}
    inline SimulationAppMetadata& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}
    inline SimulationAppMetadata& WithSimulation(const char* value) { SetSimulation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the app.</p>
     */
    inline const SimulationAppStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SimulationAppStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SimulationAppStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SimulationAppMetadata& WithStatus(const SimulationAppStatus& value) { SetStatus(value); return *this;}
    inline SimulationAppMetadata& WithStatus(SimulationAppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired status of the app.</p>
     */
    inline const SimulationAppTargetStatus& GetTargetStatus() const{ return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(const SimulationAppTargetStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline void SetTargetStatus(SimulationAppTargetStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }
    inline SimulationAppMetadata& WithTargetStatus(const SimulationAppTargetStatus& value) { SetTargetStatus(value); return *this;}
    inline SimulationAppMetadata& WithTargetStatus(SimulationAppTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;

    SimulationAppStatus m_status;
    bool m_statusHasBeenSet = false;

    SimulationAppTargetStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
