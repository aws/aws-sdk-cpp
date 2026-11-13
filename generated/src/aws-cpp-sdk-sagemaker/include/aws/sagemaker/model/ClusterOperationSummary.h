/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOperationStatus.h>
#include <aws/sagemaker/model/ClusterOperationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>A summary of an operation performed on a HyperPod cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOperationSummary">AWS
 * API Reference</a></p>
 */
class ClusterOperationSummary {
 public:
  AWS_SAGEMAKER_API ClusterOperationSummary() = default;
  AWS_SAGEMAKER_API ClusterOperationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier (UUID) of the operation.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  ClusterOperationSummary& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the HyperPod cluster associated with the
   * operation.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ClusterOperationSummary& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the operation. Valid values are <code>Scaling</code> or
   * <code>DeepHealthCheck</code>.</p>
   */
  inline ClusterOperationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ClusterOperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ClusterOperationSummary& WithType(ClusterOperationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the operation. Valid values are
   * <code>InProgress</code>, <code>Superseded</code>, or <code>Done</code>.</p>
   */
  inline ClusterOperationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ClusterOperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ClusterOperationSummary& WithStatus(ClusterOperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ClusterOperationSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_operationId;

  Aws::String m_clusterArn;

  ClusterOperationType m_type{ClusterOperationType::NOT_SET};

  ClusterOperationStatus m_status{ClusterOperationStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};
  bool m_operationIdHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
