/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/Architecture.h>
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
   * <p>Information about a robot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Robot">AWS API
   * Reference</a></p>
   */
  class Robot
  {
  public:
    AWS_ROBOMAKER_API Robot() = default;
    AWS_ROBOMAKER_API Robot(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Robot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Robot& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the robot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Robot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    Robot& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the robot.</p>
     */
    inline RobotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RobotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Robot& WithStatus(RobotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline const Aws::String& GetGreenGrassGroupId() const { return m_greenGrassGroupId; }
    inline bool GreenGrassGroupIdHasBeenSet() const { return m_greenGrassGroupIdHasBeenSet; }
    template<typename GreenGrassGroupIdT = Aws::String>
    void SetGreenGrassGroupId(GreenGrassGroupIdT&& value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId = std::forward<GreenGrassGroupIdT>(value); }
    template<typename GreenGrassGroupIdT = Aws::String>
    Robot& WithGreenGrassGroupId(GreenGrassGroupIdT&& value) { SetGreenGrassGroupId(std::forward<GreenGrassGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Robot& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the robot.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Robot& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const { return m_lastDeploymentJob; }
    inline bool LastDeploymentJobHasBeenSet() const { return m_lastDeploymentJobHasBeenSet; }
    template<typename LastDeploymentJobT = Aws::String>
    void SetLastDeploymentJob(LastDeploymentJobT&& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = std::forward<LastDeploymentJobT>(value); }
    template<typename LastDeploymentJobT = Aws::String>
    Robot& WithLastDeploymentJob(LastDeploymentJobT&& value) { SetLastDeploymentJob(std::forward<LastDeploymentJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const { return m_lastDeploymentTime; }
    inline bool LastDeploymentTimeHasBeenSet() const { return m_lastDeploymentTimeHasBeenSet; }
    template<typename LastDeploymentTimeT = Aws::Utils::DateTime>
    void SetLastDeploymentTime(LastDeploymentTimeT&& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = std::forward<LastDeploymentTimeT>(value); }
    template<typename LastDeploymentTimeT = Aws::Utils::DateTime>
    Robot& WithLastDeploymentTime(LastDeploymentTimeT&& value) { SetLastDeploymentTime(std::forward<LastDeploymentTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    RobotStatus m_status{RobotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_greenGrassGroupId;
    bool m_greenGrassGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    Aws::String m_lastDeploymentJob;
    bool m_lastDeploymentJobHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentTime{};
    bool m_lastDeploymentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
