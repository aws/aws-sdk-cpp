/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-edge/model/DeploymentModel.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p>Information about the result of a deployment on an edge device that is
   * registered with SageMaker Edge Manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/DeploymentResult">AWS
   * API Reference</a></p>
   */
  class DeploymentResult
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult();
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline DeploymentResult& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline DeploymentResult& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline DeploymentResult& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}


    /**
     * <p>Returns the bucket error code.</p>
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus.assign(value); }

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline DeploymentResult& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline DeploymentResult& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>Returns the bucket error code.</p>
     */
    inline DeploymentResult& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}


    /**
     * <p>Returns the detailed error message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = value; }

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::move(value); }

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage.assign(value); }

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline DeploymentResult& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline DeploymentResult& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns the detailed error message.</p>
     */
    inline DeploymentResult& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}


    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const{ return m_deploymentStartTime; }

    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline void SetDeploymentStartTime(const Aws::Utils::DateTime& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = value; }

    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline void SetDeploymentStartTime(Aws::Utils::DateTime&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::move(value); }

    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline DeploymentResult& WithDeploymentStartTime(const Aws::Utils::DateTime& value) { SetDeploymentStartTime(value); return *this;}

    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline DeploymentResult& WithDeploymentStartTime(Aws::Utils::DateTime&& value) { SetDeploymentStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentEndTime() const{ return m_deploymentEndTime; }

    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline bool DeploymentEndTimeHasBeenSet() const { return m_deploymentEndTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline void SetDeploymentEndTime(const Aws::Utils::DateTime& value) { m_deploymentEndTimeHasBeenSet = true; m_deploymentEndTime = value; }

    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline void SetDeploymentEndTime(Aws::Utils::DateTime&& value) { m_deploymentEndTimeHasBeenSet = true; m_deploymentEndTime = std::move(value); }

    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline DeploymentResult& WithDeploymentEndTime(const Aws::Utils::DateTime& value) { SetDeploymentEndTime(value); return *this;}

    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline DeploymentResult& WithDeploymentEndTime(Aws::Utils::DateTime&& value) { SetDeploymentEndTime(std::move(value)); return *this;}


    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline const Aws::Vector<DeploymentModel>& GetDeploymentModels() const{ return m_deploymentModels; }

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline bool DeploymentModelsHasBeenSet() const { return m_deploymentModelsHasBeenSet; }

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline void SetDeploymentModels(const Aws::Vector<DeploymentModel>& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels = value; }

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline void SetDeploymentModels(Aws::Vector<DeploymentModel>&& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels = std::move(value); }

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline DeploymentResult& WithDeploymentModels(const Aws::Vector<DeploymentModel>& value) { SetDeploymentModels(value); return *this;}

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline DeploymentResult& WithDeploymentModels(Aws::Vector<DeploymentModel>&& value) { SetDeploymentModels(std::move(value)); return *this;}

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline DeploymentResult& AddDeploymentModels(const DeploymentModel& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels.push_back(value); return *this; }

    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline DeploymentResult& AddDeploymentModels(DeploymentModel&& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime;
    bool m_deploymentStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentEndTime;
    bool m_deploymentEndTimeHasBeenSet = false;

    Aws::Vector<DeploymentModel> m_deploymentModels;
    bool m_deploymentModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
