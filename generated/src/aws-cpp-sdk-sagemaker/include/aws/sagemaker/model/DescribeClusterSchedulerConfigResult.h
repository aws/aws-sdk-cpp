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
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult() = default;
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const { return m_clusterSchedulerConfigArn; }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    void SetClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = std::forward<ClusterSchedulerConfigArnT>(value); }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { SetClusterSchedulerConfigArn(std::forward<ClusterSchedulerConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const { return m_clusterSchedulerConfigId; }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    void SetClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::forward<ClusterSchedulerConfigIdT>(value); }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { SetClusterSchedulerConfigId(std::forward<ClusterSchedulerConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the cluster policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const { return m_clusterSchedulerConfigVersion; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersionHasBeenSet = true; m_clusterSchedulerConfigVersion = value; }
    inline DescribeClusterSchedulerConfigResult& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the cluster policy.</p>
     */
    inline SchedulerResourceStatus GetStatus() const { return m_status; }
    inline void SetStatus(SchedulerResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeClusterSchedulerConfigResult& WithStatus(SchedulerResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure reason of the cluster policy.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster where the cluster policy is applied.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cluster policy configuration. This policy is used for task prioritization and
     * fair-share allocation. This helps prioritize critical workloads and distributes
     * idle compute across entities.</p>
     */
    inline const SchedulerConfig& GetSchedulerConfig() const { return m_schedulerConfig; }
    template<typename SchedulerConfigT = SchedulerConfig>
    void SetSchedulerConfig(SchedulerConfigT&& value) { m_schedulerConfigHasBeenSet = true; m_schedulerConfig = std::forward<SchedulerConfigT>(value); }
    template<typename SchedulerConfigT = SchedulerConfig>
    DescribeClusterSchedulerConfigResult& WithSchedulerConfig(SchedulerConfigT&& value) { SetSchedulerConfig(std::forward<SchedulerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the cluster policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeClusterSchedulerConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeClusterSchedulerConfigResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeClusterSchedulerConfigResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribeClusterSchedulerConfigResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterSchedulerConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;
    bool m_clusterSchedulerConfigArnHasBeenSet = false;

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_clusterSchedulerConfigVersion{0};
    bool m_clusterSchedulerConfigVersionHasBeenSet = false;

    SchedulerResourceStatus m_status{SchedulerResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    SchedulerConfig m_schedulerConfig;
    bool m_schedulerConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
