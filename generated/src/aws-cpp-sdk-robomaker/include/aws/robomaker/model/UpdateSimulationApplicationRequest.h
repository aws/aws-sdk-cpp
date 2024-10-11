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
    AWS_ROBOMAKER_API UpdateSimulationApplicationRequest();

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
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline UpdateSimulationApplicationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline UpdateSimulationApplicationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the simulation application.</p>
     */
    inline const Aws::Vector<SourceConfig>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<SourceConfig>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<SourceConfig>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline UpdateSimulationApplicationRequest& WithSources(const Aws::Vector<SourceConfig>& value) { SetSources(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithSources(Aws::Vector<SourceConfig>&& value) { SetSources(std::move(value)); return *this;}
    inline UpdateSimulationApplicationRequest& AddSources(const SourceConfig& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline UpdateSimulationApplicationRequest& AddSources(SourceConfig&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const{ return m_simulationSoftwareSuite; }
    inline bool SimulationSoftwareSuiteHasBeenSet() const { return m_simulationSoftwareSuiteHasBeenSet; }
    inline void SetSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = value; }
    inline void SetSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = std::move(value); }
    inline UpdateSimulationApplicationRequest& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the robot software suite.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = value; }
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::move(value); }
    inline UpdateSimulationApplicationRequest& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline const RenderingEngine& GetRenderingEngine() const{ return m_renderingEngine; }
    inline bool RenderingEngineHasBeenSet() const { return m_renderingEngineHasBeenSet; }
    inline void SetRenderingEngine(const RenderingEngine& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = value; }
    inline void SetRenderingEngine(RenderingEngine&& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = std::move(value); }
    inline UpdateSimulationApplicationRequest& WithRenderingEngine(const RenderingEngine& value) { SetRenderingEngine(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithRenderingEngine(RenderingEngine&& value) { SetRenderingEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision id for the robot application.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const{ return m_currentRevisionId; }
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }
    inline void SetCurrentRevisionId(const Aws::String& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = value; }
    inline void SetCurrentRevisionId(Aws::String&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::move(value); }
    inline void SetCurrentRevisionId(const char* value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId.assign(value); }
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(const Aws::String& value) { SetCurrentRevisionId(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(Aws::String&& value) { SetCurrentRevisionId(std::move(value)); return *this;}
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(const char* value) { SetCurrentRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains the Docker image URI for your simulation
     * application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline UpdateSimulationApplicationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}
    inline UpdateSimulationApplicationRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}
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
