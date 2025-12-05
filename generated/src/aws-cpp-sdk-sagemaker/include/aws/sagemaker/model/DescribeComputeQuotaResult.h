/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ActivationState.h>
#include <aws/sagemaker/model/ComputeQuotaConfig.h>
#include <aws/sagemaker/model/ComputeQuotaTarget.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/sagemaker/model/UserContext.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeComputeQuotaResult {
 public:
  AWS_SAGEMAKER_API DescribeComputeQuotaResult() = default;
  AWS_SAGEMAKER_API DescribeComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ARN of the compute allocation definition.</p>
   */
  inline const Aws::String& GetComputeQuotaArn() const { return m_computeQuotaArn; }
  template <typename ComputeQuotaArnT = Aws::String>
  void SetComputeQuotaArn(ComputeQuotaArnT&& value) {
    m_computeQuotaArnHasBeenSet = true;
    m_computeQuotaArn = std::forward<ComputeQuotaArnT>(value);
  }
  template <typename ComputeQuotaArnT = Aws::String>
  DescribeComputeQuotaResult& WithComputeQuotaArn(ComputeQuotaArnT&& value) {
    SetComputeQuotaArn(std::forward<ComputeQuotaArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the compute allocation definition.</p>
   */
  inline const Aws::String& GetComputeQuotaId() const { return m_computeQuotaId; }
  template <typename ComputeQuotaIdT = Aws::String>
  void SetComputeQuotaId(ComputeQuotaIdT&& value) {
    m_computeQuotaIdHasBeenSet = true;
    m_computeQuotaId = std::forward<ComputeQuotaIdT>(value);
  }
  template <typename ComputeQuotaIdT = Aws::String>
  DescribeComputeQuotaResult& WithComputeQuotaId(ComputeQuotaIdT&& value) {
    SetComputeQuotaId(std::forward<ComputeQuotaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the compute allocation definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeComputeQuotaResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the compute allocation definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeComputeQuotaResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version of the compute allocation definition.</p>
   */
  inline int GetComputeQuotaVersion() const { return m_computeQuotaVersion; }
  inline void SetComputeQuotaVersion(int value) {
    m_computeQuotaVersionHasBeenSet = true;
    m_computeQuotaVersion = value;
  }
  inline DescribeComputeQuotaResult& WithComputeQuotaVersion(int value) {
    SetComputeQuotaVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of the compute allocation definition.</p>
   */
  inline SchedulerResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(SchedulerResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeComputeQuotaResult& WithStatus(SchedulerResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure reason of the compute allocation definition.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  DescribeComputeQuotaResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DescribeComputeQuotaResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration of the compute allocation definition. This includes the
   * resource sharing option, and the setting to preempt low priority tasks.</p>
   */
  inline const ComputeQuotaConfig& GetComputeQuotaConfig() const { return m_computeQuotaConfig; }
  template <typename ComputeQuotaConfigT = ComputeQuotaConfig>
  void SetComputeQuotaConfig(ComputeQuotaConfigT&& value) {
    m_computeQuotaConfigHasBeenSet = true;
    m_computeQuotaConfig = std::forward<ComputeQuotaConfigT>(value);
  }
  template <typename ComputeQuotaConfigT = ComputeQuotaConfig>
  DescribeComputeQuotaResult& WithComputeQuotaConfig(ComputeQuotaConfigT&& value) {
    SetComputeQuotaConfig(std::forward<ComputeQuotaConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target entity to allocate compute resources to.</p>
   */
  inline const ComputeQuotaTarget& GetComputeQuotaTarget() const { return m_computeQuotaTarget; }
  template <typename ComputeQuotaTargetT = ComputeQuotaTarget>
  void SetComputeQuotaTarget(ComputeQuotaTargetT&& value) {
    m_computeQuotaTargetHasBeenSet = true;
    m_computeQuotaTarget = std::forward<ComputeQuotaTargetT>(value);
  }
  template <typename ComputeQuotaTargetT = ComputeQuotaTarget>
  DescribeComputeQuotaResult& WithComputeQuotaTarget(ComputeQuotaTargetT&& value) {
    SetComputeQuotaTarget(std::forward<ComputeQuotaTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the compute allocation being described. Use to enable or disable
   * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
   */
  inline ActivationState GetActivationState() const { return m_activationState; }
  inline void SetActivationState(ActivationState value) {
    m_activationStateHasBeenSet = true;
    m_activationState = value;
  }
  inline DescribeComputeQuotaResult& WithActivationState(ActivationState value) {
    SetActivationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creation time of the compute allocation configuration.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeComputeQuotaResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UserContext& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = UserContext>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = UserContext>
  DescribeComputeQuotaResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last modified time of the compute allocation configuration.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeComputeQuotaResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
  template <typename LastModifiedByT = UserContext>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = UserContext>
  DescribeComputeQuotaResult& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeComputeQuotaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_computeQuotaArn;

  Aws::String m_computeQuotaId;

  Aws::String m_name;

  Aws::String m_description;

  int m_computeQuotaVersion{0};

  SchedulerResourceStatus m_status{SchedulerResourceStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::String m_clusterArn;

  ComputeQuotaConfig m_computeQuotaConfig;

  ComputeQuotaTarget m_computeQuotaTarget;

  ActivationState m_activationState{ActivationState::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  UserContext m_createdBy;

  Aws::Utils::DateTime m_lastModifiedTime{};

  UserContext m_lastModifiedBy;

  Aws::String m_requestId;
  bool m_computeQuotaArnHasBeenSet = false;
  bool m_computeQuotaIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_computeQuotaVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_computeQuotaConfigHasBeenSet = false;
  bool m_computeQuotaTargetHasBeenSet = false;
  bool m_activationStateHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
