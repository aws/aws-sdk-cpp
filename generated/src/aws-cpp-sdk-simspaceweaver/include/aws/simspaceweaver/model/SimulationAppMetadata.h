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
   * <p>A collection of metadata about an app.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline SimulationAppMetadata& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline SimulationAppMetadata& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain of the app. For more information about domains, see <a
     * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html">Key
     * concepts</a> in the <i>Amazon Web Services SimSpace Weaver User Guide</i>.</p>
     */
    inline SimulationAppMetadata& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline SimulationAppMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline SimulationAppMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline SimulationAppMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline SimulationAppMetadata& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline SimulationAppMetadata& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline SimulationAppMetadata& WithSimulation(const char* value) { SetSimulation(value); return *this;}


    /**
     * <p>The current status of the app.</p>
     */
    inline const SimulationAppStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the app.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the app.</p>
     */
    inline void SetStatus(const SimulationAppStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the app.</p>
     */
    inline void SetStatus(SimulationAppStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the app.</p>
     */
    inline SimulationAppMetadata& WithStatus(const SimulationAppStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the app.</p>
     */
    inline SimulationAppMetadata& WithStatus(SimulationAppStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The desired status of the app.</p>
     */
    inline const SimulationAppTargetStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p>The desired status of the app.</p>
     */
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }

    /**
     * <p>The desired status of the app.</p>
     */
    inline void SetTargetStatus(const SimulationAppTargetStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }

    /**
     * <p>The desired status of the app.</p>
     */
    inline void SetTargetStatus(SimulationAppTargetStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }

    /**
     * <p>The desired status of the app.</p>
     */
    inline SimulationAppMetadata& WithTargetStatus(const SimulationAppTargetStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p>The desired status of the app.</p>
     */
    inline SimulationAppMetadata& WithTargetStatus(SimulationAppTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}

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
