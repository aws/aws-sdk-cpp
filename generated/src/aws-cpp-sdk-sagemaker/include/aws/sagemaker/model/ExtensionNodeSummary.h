/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>A summary of an extension's installation across the nodes of a SageMaker
 * HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionNodeSummary">AWS
 * API Reference</a></p>
 */
class ExtensionNodeSummary {
 public:
  AWS_SAGEMAKER_API ExtensionNodeSummary() = default;
  AWS_SAGEMAKER_API ExtensionNodeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of nodes in your cluster that the extension targets. SageMaker
   * HyperPod targets every running node in your cluster, including nodes that you
   * add after you create the extension.</p>
   */
  inline int GetTotalCount() const { return m_totalCount; }
  inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
  inline void SetTotalCount(int value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline ExtensionNodeSummary& WithTotalCount(int value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes that are running the extension's current version and
   * configuration. While SageMaker HyperPod creates or updates the extension,
   * <code>ActiveCount</code> is lower than <code>TotalCount</code>.</p>
   */
  inline int GetActiveCount() const { return m_activeCount; }
  inline bool ActiveCountHasBeenSet() const { return m_activeCountHasBeenSet; }
  inline void SetActiveCount(int value) {
    m_activeCountHasBeenSet = true;
    m_activeCount = value;
  }
  inline ExtensionNodeSummary& WithActiveCount(int value) {
    SetActiveCount(value);
    return *this;
  }
  ///@}
 private:
  int m_totalCount{0};

  int m_activeCount{0};
  bool m_totalCountHasBeenSet = false;
  bool m_activeCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
