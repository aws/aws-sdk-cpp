/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/SimulationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/ComputeType.h>
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
   * <p>Summary information for a simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJobSummary">AWS
   * API Reference</a></p>
   */
  class SimulationJobSummary
  {
  public:
    AWS_ROBOMAKER_API SimulationJobSummary() = default;
    AWS_ROBOMAKER_API SimulationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SimulationJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    SimulationJobSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SimulationJobSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the simulation job.</p>
     */
    inline SimulationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SimulationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SimulationJobSummary& WithStatus(SimulationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of simulation job simulation application names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSimulationApplicationNames() const { return m_simulationApplicationNames; }
    inline bool SimulationApplicationNamesHasBeenSet() const { return m_simulationApplicationNamesHasBeenSet; }
    template<typename SimulationApplicationNamesT = Aws::Vector<Aws::String>>
    void SetSimulationApplicationNames(SimulationApplicationNamesT&& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames = std::forward<SimulationApplicationNamesT>(value); }
    template<typename SimulationApplicationNamesT = Aws::Vector<Aws::String>>
    SimulationJobSummary& WithSimulationApplicationNames(SimulationApplicationNamesT&& value) { SetSimulationApplicationNames(std::forward<SimulationApplicationNamesT>(value)); return *this;}
    template<typename SimulationApplicationNamesT = Aws::String>
    SimulationJobSummary& AddSimulationApplicationNames(SimulationApplicationNamesT&& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames.emplace_back(std::forward<SimulationApplicationNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of simulation job robot application names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRobotApplicationNames() const { return m_robotApplicationNames; }
    inline bool RobotApplicationNamesHasBeenSet() const { return m_robotApplicationNamesHasBeenSet; }
    template<typename RobotApplicationNamesT = Aws::Vector<Aws::String>>
    void SetRobotApplicationNames(RobotApplicationNamesT&& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames = std::forward<RobotApplicationNamesT>(value); }
    template<typename RobotApplicationNamesT = Aws::Vector<Aws::String>>
    SimulationJobSummary& WithRobotApplicationNames(RobotApplicationNamesT&& value) { SetRobotApplicationNames(std::forward<RobotApplicationNamesT>(value)); return *this;}
    template<typename RobotApplicationNamesT = Aws::String>
    SimulationJobSummary& AddRobotApplicationNames(RobotApplicationNamesT&& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames.emplace_back(std::forward<RobotApplicationNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the data sources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceNames() const { return m_dataSourceNames; }
    inline bool DataSourceNamesHasBeenSet() const { return m_dataSourceNamesHasBeenSet; }
    template<typename DataSourceNamesT = Aws::Vector<Aws::String>>
    void SetDataSourceNames(DataSourceNamesT&& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames = std::forward<DataSourceNamesT>(value); }
    template<typename DataSourceNamesT = Aws::Vector<Aws::String>>
    SimulationJobSummary& WithDataSourceNames(DataSourceNamesT&& value) { SetDataSourceNames(std::forward<DataSourceNamesT>(value)); return *this;}
    template<typename DataSourceNamesT = Aws::String>
    SimulationJobSummary& AddDataSourceNames(DataSourceNamesT&& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames.emplace_back(std::forward<DataSourceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compute type for the simulation job summary.</p>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline SimulationJobSummary& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SimulationJobStatus m_status{SimulationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_simulationApplicationNames;
    bool m_simulationApplicationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_robotApplicationNames;
    bool m_robotApplicationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSourceNames;
    bool m_dataSourceNamesHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
