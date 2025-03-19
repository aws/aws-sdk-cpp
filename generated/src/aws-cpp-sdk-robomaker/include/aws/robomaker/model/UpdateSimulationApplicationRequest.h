/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/SimulationSoftwareSuite.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/robomaker/model/RenderingEngine.h>
#include <aws/robomaker/model/Environment.h>
#include <aws/robomaker/model/SourceConfig.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class UpdateSimulationApplicationRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API UpdateSimulationApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSimulationApplication"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application information for the simulation application.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    UpdateSimulationApplicationRequest& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the simulation application.</p>
     */
    inline const Aws::Vector<SourceConfig>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<SourceConfig>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<SourceConfig>>
    UpdateSimulationApplicationRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = SourceConfig>
    UpdateSimulationApplicationRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const { return m_simulationSoftwareSuite; }
    inline bool SimulationSoftwareSuiteHasBeenSet() const { return m_simulationSoftwareSuiteHasBeenSet; }
    template<typename SimulationSoftwareSuiteT = SimulationSoftwareSuite>
    void SetSimulationSoftwareSuite(SimulationSoftwareSuiteT&& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = std::forward<SimulationSoftwareSuiteT>(value); }
    template<typename SimulationSoftwareSuiteT = SimulationSoftwareSuite>
    UpdateSimulationApplicationRequest& WithSimulationSoftwareSuite(SimulationSoftwareSuiteT&& value) { SetSimulationSoftwareSuite(std::forward<SimulationSoftwareSuiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the robot software suite.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const { return m_robotSoftwareSuite; }
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }
    template<typename RobotSoftwareSuiteT = RobotSoftwareSuite>
    void SetRobotSoftwareSuite(RobotSoftwareSuiteT&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::forward<RobotSoftwareSuiteT>(value); }
    template<typename RobotSoftwareSuiteT = RobotSoftwareSuite>
    UpdateSimulationApplicationRequest& WithRobotSoftwareSuite(RobotSoftwareSuiteT&& value) { SetRobotSoftwareSuite(std::forward<RobotSoftwareSuiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline const RenderingEngine& GetRenderingEngine() const { return m_renderingEngine; }
    inline bool RenderingEngineHasBeenSet() const { return m_renderingEngineHasBeenSet; }
    template<typename RenderingEngineT = RenderingEngine>
    void SetRenderingEngine(RenderingEngineT&& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = std::forward<RenderingEngineT>(value); }
    template<typename RenderingEngineT = RenderingEngine>
    UpdateSimulationApplicationRequest& WithRenderingEngine(RenderingEngineT&& value) { SetRenderingEngine(std::forward<RenderingEngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision id for the robot application.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const { return m_currentRevisionId; }
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }
    template<typename CurrentRevisionIdT = Aws::String>
    void SetCurrentRevisionId(CurrentRevisionIdT&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::forward<CurrentRevisionIdT>(value); }
    template<typename CurrentRevisionIdT = Aws::String>
    UpdateSimulationApplicationRequest& WithCurrentRevisionId(CurrentRevisionIdT&& value) { SetCurrentRevisionId(std::forward<CurrentRevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains the Docker image URI for your simulation
     * application.</p>
     */
    inline const Environment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Environment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Environment>
    UpdateSimulationApplicationRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::Vector<SourceConfig> m_sources;
    bool m_sourcesHasBeenSet = false;

    SimulationSoftwareSuite m_simulationSoftwareSuite;
    bool m_simulationSoftwareSuiteHasBeenSet = false;

    RobotSoftwareSuite m_robotSoftwareSuite;
    bool m_robotSoftwareSuiteHasBeenSet = false;

    RenderingEngine m_renderingEngine;
    bool m_renderingEngineHasBeenSet = false;

    Aws::String m_currentRevisionId;
    bool m_currentRevisionIdHasBeenSet = false;

    Environment m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
