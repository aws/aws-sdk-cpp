/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EdgeDeploymentModelConfig.h>
#include <aws/sagemaker/model/DeploymentStageStatusSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeEdgeDeploymentPlanResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult() = default;
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const { return m_edgeDeploymentPlanArn; }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    void SetEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = std::forward<EdgeDeploymentPlanArnT>(value); }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { SetEdgeDeploymentPlanArn(std::forward<EdgeDeploymentPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const { return m_edgeDeploymentPlanName; }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    void SetEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::forward<EdgeDeploymentPlanNameT>(value); }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { SetEdgeDeploymentPlanName(std::forward<EdgeDeploymentPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline const Aws::Vector<EdgeDeploymentModelConfig>& GetModelConfigs() const { return m_modelConfigs; }
    template<typename ModelConfigsT = Aws::Vector<EdgeDeploymentModelConfig>>
    void SetModelConfigs(ModelConfigsT&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs = std::forward<ModelConfigsT>(value); }
    template<typename ModelConfigsT = Aws::Vector<EdgeDeploymentModelConfig>>
    DescribeEdgeDeploymentPlanResult& WithModelConfigs(ModelConfigsT&& value) { SetModelConfigs(std::forward<ModelConfigsT>(value)); return *this;}
    template<typename ModelConfigsT = EdgeDeploymentModelConfig>
    DescribeEdgeDeploymentPlanResult& AddModelConfigs(ModelConfigsT&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs.emplace_back(std::forward<ModelConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DescribeEdgeDeploymentPlanResult& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline int GetEdgeDeploymentSuccess() const { return m_edgeDeploymentSuccess; }
    inline void SetEdgeDeploymentSuccess(int value) { m_edgeDeploymentSuccessHasBeenSet = true; m_edgeDeploymentSuccess = value; }
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentSuccess(int value) { SetEdgeDeploymentSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices yet to pick up deployment, or in progress.</p>
     */
    inline int GetEdgeDeploymentPending() const { return m_edgeDeploymentPending; }
    inline void SetEdgeDeploymentPending(int value) { m_edgeDeploymentPendingHasBeenSet = true; m_edgeDeploymentPending = value; }
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPending(int value) { SetEdgeDeploymentPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline int GetEdgeDeploymentFailed() const { return m_edgeDeploymentFailed; }
    inline void SetEdgeDeploymentFailed(int value) { m_edgeDeploymentFailedHasBeenSet = true; m_edgeDeploymentFailed = value; }
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentFailed(int value) { SetEdgeDeploymentFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline const Aws::Vector<DeploymentStageStatusSummary>& GetStages() const { return m_stages; }
    template<typename StagesT = Aws::Vector<DeploymentStageStatusSummary>>
    void SetStages(StagesT&& value) { m_stagesHasBeenSet = true; m_stages = std::forward<StagesT>(value); }
    template<typename StagesT = Aws::Vector<DeploymentStageStatusSummary>>
    DescribeEdgeDeploymentPlanResult& WithStages(StagesT&& value) { SetStages(std::forward<StagesT>(value)); return *this;}
    template<typename StagesT = DeploymentStageStatusSummary>
    DescribeEdgeDeploymentPlanResult& AddStages(StagesT&& value) { m_stagesHasBeenSet = true; m_stages.emplace_back(std::forward<StagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEdgeDeploymentPlanResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeEdgeDeploymentPlanResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeEdgeDeploymentPlanResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEdgeDeploymentPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanArn;
    bool m_edgeDeploymentPlanArnHasBeenSet = false;

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::Vector<EdgeDeploymentModelConfig> m_modelConfigs;
    bool m_modelConfigsHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    int m_edgeDeploymentSuccess{0};
    bool m_edgeDeploymentSuccessHasBeenSet = false;

    int m_edgeDeploymentPending{0};
    bool m_edgeDeploymentPendingHasBeenSet = false;

    int m_edgeDeploymentFailed{0};
    bool m_edgeDeploymentFailedHasBeenSet = false;

    Aws::Vector<DeploymentStageStatusSummary> m_stages;
    bool m_stagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
