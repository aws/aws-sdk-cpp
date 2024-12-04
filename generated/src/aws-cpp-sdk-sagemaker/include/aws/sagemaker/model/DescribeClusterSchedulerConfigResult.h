/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/sagemaker/model/SchedulerConfig.h>
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
  class DescribeClusterSchedulerConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult();
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const{ return m_clusterSchedulerConfigArn; }
    inline void SetClusterSchedulerConfigArn(const Aws::String& value) { m_clusterSchedulerConfigArn = value; }
    inline void SetClusterSchedulerConfigArn(Aws::String&& value) { m_clusterSchedulerConfigArn = std::move(value); }
    inline void SetClusterSchedulerConfigArn(const char* value) { m_clusterSchedulerConfigArn.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const Aws::String& value) { SetClusterSchedulerConfigArn(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(Aws::String&& value) { SetClusterSchedulerConfigArn(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(const char* value) { SetClusterSchedulerConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const{ return m_clusterSchedulerConfigId; }
    inline void SetClusterSchedulerConfigId(const Aws::String& value) { m_clusterSchedulerConfigId = value; }
    inline void SetClusterSchedulerConfigId(Aws::String&& value) { m_clusterSchedulerConfigId = std::move(value); }
    inline void SetClusterSchedulerConfigId(const char* value) { m_clusterSchedulerConfigId.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigId(const Aws::String& value) { SetClusterSchedulerConfigId(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigId(Aws::String&& value) { SetClusterSchedulerConfigId(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigId(const char* value) { SetClusterSchedulerConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the cluster policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const{ return m_clusterSchedulerConfigVersion; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersion = value; }
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the cluster policy.</p>
     */
    inline const SchedulerResourceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchedulerResourceStatus& value) { m_status = value; }
    inline void SetStatus(SchedulerResourceStatus&& value) { m_status = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithStatus(const SchedulerResourceStatus& value) { SetStatus(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithStatus(SchedulerResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure reason of the cluster policy.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster where the cluster policy is applied.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cluster policy configuration. This policy is used for task prioritization and
     * fair-share allocation. This helps prioritize critical workloads and distributes
     * idle compute across entities.</p>
     */
    inline const SchedulerConfig& GetSchedulerConfig() const{ return m_schedulerConfig; }
    inline void SetSchedulerConfig(const SchedulerConfig& value) { m_schedulerConfig = value; }
    inline void SetSchedulerConfig(SchedulerConfig&& value) { m_schedulerConfig = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithSchedulerConfig(const SchedulerConfig& value) { SetSchedulerConfig(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithSchedulerConfig(SchedulerConfig&& value) { SetSchedulerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the cluster policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeClusterSchedulerConfigResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClusterSchedulerConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClusterSchedulerConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;

    Aws::String m_clusterSchedulerConfigId;

    Aws::String m_name;

    int m_clusterSchedulerConfigVersion;

    SchedulerResourceStatus m_status;

    Aws::String m_failureReason;

    Aws::String m_clusterArn;

    SchedulerConfig m_schedulerConfig;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
