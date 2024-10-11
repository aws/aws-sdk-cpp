/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/robomaker/model/SimulationSoftwareSuite.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Summary information for a simulation application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationApplicationSummary">AWS
   * API Reference</a></p>
   */
  class SimulationApplicationSummary
  {
  public:
    AWS_ROBOMAKER_API SimulationApplicationSummary();
    AWS_ROBOMAKER_API SimulationApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the simulation application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SimulationApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SimulationApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SimulationApplicationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SimulationApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SimulationApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SimulationApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the simulation application.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline SimulationApplicationSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline SimulationApplicationSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline SimulationApplicationSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline SimulationApplicationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline SimulationApplicationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a robot software suite.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = value; }
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::move(value); }
    inline SimulationApplicationSummary& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}
    inline SimulationApplicationSummary& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a simulation software suite.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const{ return m_simulationSoftwareSuite; }
    inline bool SimulationSoftwareSuiteHasBeenSet() const { return m_simulationSoftwareSuiteHasBeenSet; }
    inline void SetSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = value; }
    inline void SetSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = std::move(value); }
    inline SimulationApplicationSummary& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}
    inline SimulationApplicationSummary& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    RobotSoftwareSuite m_robotSoftwareSuite;
    bool m_robotSoftwareSuiteHasBeenSet = false;

    SimulationSoftwareSuite m_simulationSoftwareSuite;
    bool m_simulationSoftwareSuiteHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
