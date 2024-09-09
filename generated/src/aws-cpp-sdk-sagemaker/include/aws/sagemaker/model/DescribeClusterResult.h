/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ClusterOrchestrator.h>
#include <aws/sagemaker/model/ClusterNodeRecovery.h>
#include <aws/sagemaker/model/ClusterInstanceGroupDetails.h>
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
  class DescribeClusterResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterResult();
    AWS_SAGEMAKER_API DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline DescribeClusterResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline DescribeClusterResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline DescribeClusterResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }
    inline DescribeClusterResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline DescribeClusterResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline DescribeClusterResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline const ClusterStatus& GetClusterStatus() const{ return m_clusterStatus; }
    inline void SetClusterStatus(const ClusterStatus& value) { m_clusterStatus = value; }
    inline void SetClusterStatus(ClusterStatus&& value) { m_clusterStatus = std::move(value); }
    inline DescribeClusterResult& WithClusterStatus(const ClusterStatus& value) { SetClusterStatus(value); return *this;}
    inline DescribeClusterResult& WithClusterStatus(ClusterStatus&& value) { SetClusterStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the SageMaker Cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeClusterResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeClusterResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline DescribeClusterResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline DescribeClusterResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline DescribeClusterResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance groups of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupDetails>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline void SetInstanceGroups(const Aws::Vector<ClusterInstanceGroupDetails>& value) { m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<ClusterInstanceGroupDetails>&& value) { m_instanceGroups = std::move(value); }
    inline DescribeClusterResult& WithInstanceGroups(const Aws::Vector<ClusterInstanceGroupDetails>& value) { SetInstanceGroups(value); return *this;}
    inline DescribeClusterResult& WithInstanceGroups(Aws::Vector<ClusterInstanceGroupDetails>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline DescribeClusterResult& AddInstanceGroups(const ClusterInstanceGroupDetails& value) { m_instanceGroups.push_back(value); return *this; }
    inline DescribeClusterResult& AddInstanceGroups(ClusterInstanceGroupDetails&& value) { m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }
    inline DescribeClusterResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline DescribeClusterResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of orchestrator used for the SageMaker HyperPod cluster. </p>
     */
    inline const ClusterOrchestrator& GetOrchestrator() const{ return m_orchestrator; }
    inline void SetOrchestrator(const ClusterOrchestrator& value) { m_orchestrator = value; }
    inline void SetOrchestrator(ClusterOrchestrator&& value) { m_orchestrator = std::move(value); }
    inline DescribeClusterResult& WithOrchestrator(const ClusterOrchestrator& value) { SetOrchestrator(value); return *this;}
    inline DescribeClusterResult& WithOrchestrator(ClusterOrchestrator&& value) { SetOrchestrator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node recovery mode configured for the SageMaker HyperPod cluster.</p>
     */
    inline const ClusterNodeRecovery& GetNodeRecovery() const{ return m_nodeRecovery; }
    inline void SetNodeRecovery(const ClusterNodeRecovery& value) { m_nodeRecovery = value; }
    inline void SetNodeRecovery(ClusterNodeRecovery&& value) { m_nodeRecovery = std::move(value); }
    inline DescribeClusterResult& WithNodeRecovery(const ClusterNodeRecovery& value) { SetNodeRecovery(value); return *this;}
    inline DescribeClusterResult& WithNodeRecovery(ClusterNodeRecovery&& value) { SetNodeRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;

    Aws::String m_clusterName;

    ClusterStatus m_clusterStatus;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureMessage;

    Aws::Vector<ClusterInstanceGroupDetails> m_instanceGroups;

    VpcConfig m_vpcConfig;

    ClusterOrchestrator m_orchestrator;

    ClusterNodeRecovery m_nodeRecovery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
