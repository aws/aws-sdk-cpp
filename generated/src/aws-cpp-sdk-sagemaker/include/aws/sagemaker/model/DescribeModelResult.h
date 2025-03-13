/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExecutionConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DeploymentRecommendation.h>
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
  class DescribeModelResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelResult() = default;
    AWS_SAGEMAKER_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeModelResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline const ContainerDefinition& GetPrimaryContainer() const { return m_primaryContainer; }
    template<typename PrimaryContainerT = ContainerDefinition>
    void SetPrimaryContainer(PrimaryContainerT&& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = std::forward<PrimaryContainerT>(value); }
    template<typename PrimaryContainerT = ContainerDefinition>
    DescribeModelResult& WithPrimaryContainer(PrimaryContainerT&& value) { SetPrimaryContainer(std::forward<PrimaryContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const { return m_containers; }
    template<typename ContainersT = Aws::Vector<ContainerDefinition>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<ContainerDefinition>>
    DescribeModelResult& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = ContainerDefinition>
    DescribeModelResult& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline const InferenceExecutionConfig& GetInferenceExecutionConfig() const { return m_inferenceExecutionConfig; }
    template<typename InferenceExecutionConfigT = InferenceExecutionConfig>
    void SetInferenceExecutionConfig(InferenceExecutionConfigT&& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = std::forward<InferenceExecutionConfigT>(value); }
    template<typename InferenceExecutionConfigT = InferenceExecutionConfig>
    DescribeModelResult& WithInferenceExecutionConfig(InferenceExecutionConfigT&& value) { SetInferenceExecutionConfig(std::forward<InferenceExecutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    DescribeModelResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that this model has access to. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    DescribeModelResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeModelResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, no inbound or outbound network calls can be made to or
     * from the model container.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline DescribeModelResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of recommended deployment configurations for the model.</p>
     */
    inline const DeploymentRecommendation& GetDeploymentRecommendation() const { return m_deploymentRecommendation; }
    template<typename DeploymentRecommendationT = DeploymentRecommendation>
    void SetDeploymentRecommendation(DeploymentRecommendationT&& value) { m_deploymentRecommendationHasBeenSet = true; m_deploymentRecommendation = std::forward<DeploymentRecommendationT>(value); }
    template<typename DeploymentRecommendationT = DeploymentRecommendation>
    DescribeModelResult& WithDeploymentRecommendation(DeploymentRecommendationT&& value) { SetDeploymentRecommendation(std::forward<DeploymentRecommendationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    ContainerDefinition m_primaryContainer;
    bool m_primaryContainerHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containers;
    bool m_containersHasBeenSet = false;

    InferenceExecutionConfig m_inferenceExecutionConfig;
    bool m_inferenceExecutionConfigHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    DeploymentRecommendation m_deploymentRecommendation;
    bool m_deploymentRecommendationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
