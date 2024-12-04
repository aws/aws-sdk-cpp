/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/sagemaker/model/ComputeQuotaConfig.h>
#include <aws/sagemaker/model/ComputeQuotaTarget.h>
#include <aws/sagemaker/model/ActivationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
  class DescribeComputeQuotaResult
  {
  public:
    AWS_SAGEMAKER_API DescribeComputeQuotaResult();
    AWS_SAGEMAKER_API DescribeComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const{ return m_computeQuotaArn; }
    inline void SetComputeQuotaArn(const Aws::String& value) { m_computeQuotaArn = value; }
    inline void SetComputeQuotaArn(Aws::String&& value) { m_computeQuotaArn = std::move(value); }
    inline void SetComputeQuotaArn(const char* value) { m_computeQuotaArn.assign(value); }
    inline DescribeComputeQuotaResult& WithComputeQuotaArn(const Aws::String& value) { SetComputeQuotaArn(value); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaArn(Aws::String&& value) { SetComputeQuotaArn(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaArn(const char* value) { SetComputeQuotaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const{ return m_computeQuotaId; }
    inline void SetComputeQuotaId(const Aws::String& value) { m_computeQuotaId = value; }
    inline void SetComputeQuotaId(Aws::String&& value) { m_computeQuotaId = std::move(value); }
    inline void SetComputeQuotaId(const char* value) { m_computeQuotaId.assign(value); }
    inline DescribeComputeQuotaResult& WithComputeQuotaId(const Aws::String& value) { SetComputeQuotaId(value); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaId(Aws::String&& value) { SetComputeQuotaId(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaId(const char* value) { SetComputeQuotaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the compute allocation definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeComputeQuotaResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeComputeQuotaResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the compute allocation definition.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeComputeQuotaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeComputeQuotaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the compute allocation definition.</p>
     */
    inline int GetComputeQuotaVersion() const{ return m_computeQuotaVersion; }
    inline void SetComputeQuotaVersion(int value) { m_computeQuotaVersion = value; }
    inline DescribeComputeQuotaResult& WithComputeQuotaVersion(int value) { SetComputeQuotaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the compute allocation definition.</p>
     */
    inline const SchedulerResourceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchedulerResourceStatus& value) { m_status = value; }
    inline void SetStatus(SchedulerResourceStatus&& value) { m_status = std::move(value); }
    inline DescribeComputeQuotaResult& WithStatus(const SchedulerResourceStatus& value) { SetStatus(value); return *this;}
    inline DescribeComputeQuotaResult& WithStatus(SchedulerResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure reason of the compute allocation definition.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeComputeQuotaResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeComputeQuotaResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline DescribeComputeQuotaResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline DescribeComputeQuotaResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the compute allocation definition. This includes the
     * resource sharing option, and the setting to preempt low priority tasks.</p>
     */
    inline const ComputeQuotaConfig& GetComputeQuotaConfig() const{ return m_computeQuotaConfig; }
    inline void SetComputeQuotaConfig(const ComputeQuotaConfig& value) { m_computeQuotaConfig = value; }
    inline void SetComputeQuotaConfig(ComputeQuotaConfig&& value) { m_computeQuotaConfig = std::move(value); }
    inline DescribeComputeQuotaResult& WithComputeQuotaConfig(const ComputeQuotaConfig& value) { SetComputeQuotaConfig(value); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaConfig(ComputeQuotaConfig&& value) { SetComputeQuotaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target entity to allocate compute resources to.</p>
     */
    inline const ComputeQuotaTarget& GetComputeQuotaTarget() const{ return m_computeQuotaTarget; }
    inline void SetComputeQuotaTarget(const ComputeQuotaTarget& value) { m_computeQuotaTarget = value; }
    inline void SetComputeQuotaTarget(ComputeQuotaTarget&& value) { m_computeQuotaTarget = std::move(value); }
    inline DescribeComputeQuotaResult& WithComputeQuotaTarget(const ComputeQuotaTarget& value) { SetComputeQuotaTarget(value); return *this;}
    inline DescribeComputeQuotaResult& WithComputeQuotaTarget(ComputeQuotaTarget&& value) { SetComputeQuotaTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute allocation being described. Use to enable or disable
     * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
     */
    inline const ActivationState& GetActivationState() const{ return m_activationState; }
    inline void SetActivationState(const ActivationState& value) { m_activationState = value; }
    inline void SetActivationState(ActivationState&& value) { m_activationState = std::move(value); }
    inline DescribeComputeQuotaResult& WithActivationState(const ActivationState& value) { SetActivationState(value); return *this;}
    inline DescribeComputeQuotaResult& WithActivationState(ActivationState&& value) { SetActivationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the compute allocation configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeComputeQuotaResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeComputeQuotaResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeComputeQuotaResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeComputeQuotaResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the compute allocation configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeComputeQuotaResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeComputeQuotaResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeComputeQuotaResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeComputeQuotaResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeComputeQuotaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeComputeQuotaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeComputeQuotaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;

    Aws::String m_computeQuotaId;

    Aws::String m_name;

    Aws::String m_description;

    int m_computeQuotaVersion;

    SchedulerResourceStatus m_status;

    Aws::String m_failureReason;

    Aws::String m_clusterArn;

    ComputeQuotaConfig m_computeQuotaConfig;

    ComputeQuotaTarget m_computeQuotaTarget;

    ActivationState m_activationState;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
