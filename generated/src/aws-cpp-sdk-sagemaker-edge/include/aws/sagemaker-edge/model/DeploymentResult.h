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
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult() = default;
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API DeploymentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
    template<typename DeploymentNameT = Aws::String>
    void SetDeploymentName(DeploymentNameT&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::forward<DeploymentNameT>(value); }
    template<typename DeploymentNameT = Aws::String>
    DeploymentResult& WithDeploymentName(DeploymentNameT&& value) { SetDeploymentName(std::forward<DeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the bucket error code.</p>
     */
    inline const Aws::String& GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    template<typename DeploymentStatusT = Aws::String>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = Aws::String>
    DeploymentResult& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the detailed error message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const { return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    template<typename DeploymentStatusMessageT = Aws::String>
    void SetDeploymentStatusMessage(DeploymentStatusMessageT&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::forward<DeploymentStatusMessageT>(value); }
    template<typename DeploymentStatusMessageT = Aws::String>
    DeploymentResult& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the deployment was started on the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const { return m_deploymentStartTime; }
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    void SetDeploymentStartTime(DeploymentStartTimeT&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::forward<DeploymentStartTimeT>(value); }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    DeploymentResult& WithDeploymentStartTime(DeploymentStartTimeT&& value) { SetDeploymentStartTime(std::forward<DeploymentStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the deployment was ended, and the agent got the
     * deployment results.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentEndTime() const { return m_deploymentEndTime; }
    inline bool DeploymentEndTimeHasBeenSet() const { return m_deploymentEndTimeHasBeenSet; }
    template<typename DeploymentEndTimeT = Aws::Utils::DateTime>
    void SetDeploymentEndTime(DeploymentEndTimeT&& value) { m_deploymentEndTimeHasBeenSet = true; m_deploymentEndTime = std::forward<DeploymentEndTimeT>(value); }
    template<typename DeploymentEndTimeT = Aws::Utils::DateTime>
    DeploymentResult& WithDeploymentEndTime(DeploymentEndTimeT&& value) { SetDeploymentEndTime(std::forward<DeploymentEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of models deployed on the agent.</p>
     */
    inline const Aws::Vector<DeploymentModel>& GetDeploymentModels() const { return m_deploymentModels; }
    inline bool DeploymentModelsHasBeenSet() const { return m_deploymentModelsHasBeenSet; }
    template<typename DeploymentModelsT = Aws::Vector<DeploymentModel>>
    void SetDeploymentModels(DeploymentModelsT&& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels = std::forward<DeploymentModelsT>(value); }
    template<typename DeploymentModelsT = Aws::Vector<DeploymentModel>>
    DeploymentResult& WithDeploymentModels(DeploymentModelsT&& value) { SetDeploymentModels(std::forward<DeploymentModelsT>(value)); return *this;}
    template<typename DeploymentModelsT = DeploymentModel>
    DeploymentResult& AddDeploymentModels(DeploymentModelsT&& value) { m_deploymentModelsHasBeenSet = true; m_deploymentModels.emplace_back(std::forward<DeploymentModelsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime{};
    bool m_deploymentStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentEndTime{};
    bool m_deploymentEndTimeHasBeenSet = false;

    Aws::Vector<DeploymentModel> m_deploymentModels;
    bool m_deploymentModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
