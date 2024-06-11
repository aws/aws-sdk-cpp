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
    AWS_SSMINCIDENTS_API CodeDeployDeployment();
    AWS_SSMINCIDENTS_API CodeDeployDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API CodeDeployDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline const Aws::String& GetDeploymentGroupArn() const{ return m_deploymentGroupArn; }
    inline bool DeploymentGroupArnHasBeenSet() const { return m_deploymentGroupArnHasBeenSet; }
    inline void SetDeploymentGroupArn(const Aws::String& value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn = value; }
    inline void SetDeploymentGroupArn(Aws::String&& value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn = std::move(value); }
    inline void SetDeploymentGroupArn(const char* value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn.assign(value); }
    inline CodeDeployDeployment& WithDeploymentGroupArn(const Aws::String& value) { SetDeploymentGroupArn(value); return *this;}
    inline CodeDeployDeployment& WithDeploymentGroupArn(Aws::String&& value) { SetDeploymentGroupArn(std::move(value)); return *this;}
    inline CodeDeployDeployment& WithDeploymentGroupArn(const char* value) { SetDeploymentGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline CodeDeployDeployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CodeDeployDeployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CodeDeployDeployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline CodeDeployDeployment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline CodeDeployDeployment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CodeDeployDeployment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CodeDeployDeployment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentGroupArn;
    bool m_deploymentGroupArnHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
