/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class DescribeClusterOperationRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeClusterOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterOperation"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the HyperPod cluster associated
   * with the operation.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  DescribeClusterOperationRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (UUID) of the operation to describe. This ID can be
   * obtained from the <code>ListClusterOperations</code> operation.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  DescribeClusterOperationRequest& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_operationId;
  bool m_clusterNameHasBeenSet = false;
  bool m_operationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
