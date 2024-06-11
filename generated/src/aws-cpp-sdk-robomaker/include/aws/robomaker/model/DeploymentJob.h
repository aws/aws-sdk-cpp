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
    AWS_ROBOMAKER_API DeploymentJob();
    AWS_ROBOMAKER_API DeploymentJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DeploymentJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DeploymentJob& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeploymentJob& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeploymentJob& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }
    inline DeploymentJob& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}
    inline DeploymentJob& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}
    inline DeploymentJob& WithFleet(const char* value) { SetFleet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment job.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DeploymentJob& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}
    inline DeploymentJob& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment application configuration.</p>
     */
    inline const Aws::Vector<DeploymentApplicationConfig>& GetDeploymentApplicationConfigs() const{ return m_deploymentApplicationConfigs; }
    inline bool DeploymentApplicationConfigsHasBeenSet() const { return m_deploymentApplicationConfigsHasBeenSet; }
    inline void SetDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs = value; }
    inline void SetDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs = std::move(value); }
    inline DeploymentJob& WithDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { SetDeploymentApplicationConfigs(value); return *this;}
    inline DeploymentJob& WithDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { SetDeploymentApplicationConfigs(std::move(value)); return *this;}
    inline DeploymentJob& AddDeploymentApplicationConfigs(const DeploymentApplicationConfig& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs.push_back(value); return *this; }
    inline DeploymentJob& AddDeploymentApplicationConfigs(DeploymentApplicationConfig&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The deployment configuration.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    inline void SetDeploymentConfig(const DeploymentConfig& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = value; }
    inline void SetDeploymentConfig(DeploymentConfig&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::move(value); }
    inline DeploymentJob& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}
    inline DeploymentJob& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline DeploymentJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DeploymentJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DeploymentJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment job failure code.</p>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline DeploymentJob& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}
    inline DeploymentJob& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DeploymentJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DeploymentJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet = false;

    DeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;
    bool m_deploymentApplicationConfigsHasBeenSet = false;

    DeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    DeploymentJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
