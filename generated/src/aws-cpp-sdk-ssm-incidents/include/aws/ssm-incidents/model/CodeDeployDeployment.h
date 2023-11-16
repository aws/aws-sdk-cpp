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


    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline const Aws::String& GetDeploymentGroupArn() const{ return m_deploymentGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline bool DeploymentGroupArnHasBeenSet() const { return m_deploymentGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline void SetDeploymentGroupArn(const Aws::String& value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline void SetDeploymentGroupArn(Aws::String&& value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline void SetDeploymentGroupArn(const char* value) { m_deploymentGroupArnHasBeenSet = true; m_deploymentGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentGroupArn(const Aws::String& value) { SetDeploymentGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentGroupArn(Aws::String&& value) { SetDeploymentGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CodeDeploy deployment group associated
     * with the deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentGroupArn(const char* value) { SetDeploymentGroupArn(value); return *this;}


    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the CodeDeploy deployment.</p>
     */
    inline CodeDeployDeployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline CodeDeployDeployment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp for when the CodeDeploy deployment ended. Not reported for
     * deployments that are still in progress.</p>
     */
    inline CodeDeployDeployment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline CodeDeployDeployment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp for when the CodeDeploy deployment began.</p>
     */
    inline CodeDeployDeployment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

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
