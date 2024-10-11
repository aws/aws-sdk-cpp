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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateSimulationApplicationRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateSimulationApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSimulationApplication"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the simulation application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSimulationApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSimulationApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSimulationApplicationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the simulation application.</p>
     */
    inline const Aws::Vector<SourceConfig>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<SourceConfig>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<SourceConfig>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline CreateSimulationApplicationRequest& WithSources(const Aws::Vector<SourceConfig>& value) { SetSources(value); return *this;}
    inline CreateSimulationApplicationRequest& WithSources(Aws::Vector<SourceConfig>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateSimulationApplicationRequest& AddSources(const SourceConfig& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline CreateSimulationApplicationRequest& AddSources(SourceConfig&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const{ return m_simulationSoftwareSuite; }
    inline bool SimulationSoftwareSuiteHasBeenSet() const { return m_simulationSoftwareSuiteHasBeenSet; }
    inline void SetSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = value; }
    inline void SetSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = std::move(value); }
    inline CreateSimulationApplicationRequest& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}
    inline CreateSimulationApplicationRequest& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The robot software suite used by the simulation application.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = value; }
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::move(value); }
    inline CreateSimulationApplicationRequest& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}
    inline CreateSimulationApplicationRequest& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline const RenderingEngine& GetRenderingEngine() const{ return m_renderingEngine; }
    inline bool RenderingEngineHasBeenSet() const { return m_renderingEngineHasBeenSet; }
    inline void SetRenderingEngine(const RenderingEngine& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = value; }
    inline void SetRenderingEngine(RenderingEngine&& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = std::move(value); }
    inline CreateSimulationApplicationRequest& WithRenderingEngine(const RenderingEngine& value) { SetRenderingEngine(value); return *this;}
    inline CreateSimulationApplicationRequest& WithRenderingEngine(RenderingEngine&& value) { SetRenderingEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSimulationApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSimulationApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSimulationApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSimulationApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The object that contains the Docker image URI used to create your simulation
     * application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline CreateSimulationApplicationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}
    inline CreateSimulationApplicationRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SourceConfig> m_sources;
    bool m_sourcesHasBeenSet = false;

    SimulationSoftwareSuite m_simulationSoftwareSuite;
    bool m_simulationSoftwareSuiteHasBeenSet = false;

    RobotSoftwareSuite m_robotSoftwareSuite;
    bool m_robotSoftwareSuiteHasBeenSet = false;

    RenderingEngine m_renderingEngine;
    bool m_renderingEngineHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Environment m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
