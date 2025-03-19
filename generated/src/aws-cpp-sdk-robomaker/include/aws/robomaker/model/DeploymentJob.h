/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DeploymentConfig.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentApplicationConfig.h>
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
   * <p>Information about a deployment job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentJob">AWS
   * API Reference</a></p>
   */
  class DeploymentJob
  {
  public:
    AWS_ROBOMAKER_API DeploymentJob() = default;
    AWS_ROBOMAKER_API DeploymentJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeploymentJob& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const { return m_fleet; }
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }
    template<typename FleetT = Aws::String>
    void SetFleet(FleetT&& value) { m_fleetHasBeenSet = true; m_fleet = std::forward<FleetT>(value); }
    template<typename FleetT = Aws::String>
    DeploymentJob& WithFleet(FleetT&& value) { SetFleet(std::forward<FleetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment job.</p>
     */
    inline DeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeploymentJob& WithStatus(DeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment application configuration.</p>
     */
    inline const Aws::Vector<DeploymentApplicationConfig>& GetDeploymentApplicationConfigs() const { return m_deploymentApplicationConfigs; }
    inline bool DeploymentApplicationConfigsHasBeenSet() const { return m_deploymentApplicationConfigsHasBeenSet; }
    template<typename DeploymentApplicationConfigsT = Aws::Vector<DeploymentApplicationConfig>>
    void SetDeploymentApplicationConfigs(DeploymentApplicationConfigsT&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs = std::forward<DeploymentApplicationConfigsT>(value); }
    template<typename DeploymentApplicationConfigsT = Aws::Vector<DeploymentApplicationConfig>>
    DeploymentJob& WithDeploymentApplicationConfigs(DeploymentApplicationConfigsT&& value) { SetDeploymentApplicationConfigs(std::forward<DeploymentApplicationConfigsT>(value)); return *this;}
    template<typename DeploymentApplicationConfigsT = DeploymentApplicationConfig>
    DeploymentJob& AddDeploymentApplicationConfigs(DeploymentApplicationConfigsT&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs.emplace_back(std::forward<DeploymentApplicationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The deployment configuration.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const { return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    template<typename DeploymentConfigT = DeploymentConfig>
    void SetDeploymentConfig(DeploymentConfigT&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::forward<DeploymentConfigT>(value); }
    template<typename DeploymentConfigT = DeploymentConfig>
    DeploymentJob& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DeploymentJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment job failure code.</p>
     */
    inline DeploymentJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(DeploymentJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline DeploymentJob& WithFailureCode(DeploymentJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DeploymentJob& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet = false;

    DeploymentStatus m_status{DeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;
    bool m_deploymentApplicationConfigsHasBeenSet = false;

    DeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    DeploymentJobErrorCode m_failureCode{DeploymentJobErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
