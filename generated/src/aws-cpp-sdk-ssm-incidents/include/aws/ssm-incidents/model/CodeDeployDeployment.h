/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about a CodeDeploy deployment that occurred around the time of an
   * incident and could be a possible cause of the incident.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CodeDeployDeployment">AWS
   * API Reference</a></p>
   */
  class CodeDeployDeployment
  {
  public:
    AWS_SSMINCIDENTS_API CodeDeployDeployment() = default;
    AWS_SSMINCIDENTS_API CodeDeployDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API CodeDeployDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline const Aws::String& GetDeploymentGroupArn() const { return m_deploymentGroupArn; }
    inline bool DeploymentGroupArnHasBeenSet() const { return m_deploymentGroupArnHasBeenSet; }
    template<typename DeploymentGroupArnT = Aws::String>
    void SetDeploymentGroupArn(DeploymentGroupArnT&& value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn = std::forward<DeploymentGroupArnT>(value); }
    template<typename DeploymentGroupArnT = Aws::String>
    CodeDeployDeployment& WithDeploymentGroupArn(DeploymentGroupArnT&& value) { SetDeploymentGroupArn(std::forward<DeploymentGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    CodeDeployDeployment& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CodeDeployDeployment& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CodeDeployDeployment& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentGroupArn;
    bool m_deploymentGroupArnHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
