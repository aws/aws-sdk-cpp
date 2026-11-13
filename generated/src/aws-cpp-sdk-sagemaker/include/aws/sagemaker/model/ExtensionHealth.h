/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionHealthIssue.h>

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
 * <p>Contains information about the problems that affect an extension on the nodes
 * of a SageMaker HyperPod cluster, including how many nodes each problem affects.
 * <code>DescribeClusterExtension</code> returns <code>ExtensionHealth</code> only
 * when at least one node has a problem.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionHealth">AWS
 * API Reference</a></p>
 */
class ExtensionHealth {
 public:
  AWS_SAGEMAKER_API ExtensionHealth() = default;
  AWS_SAGEMAKER_API ExtensionHealth(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The problems that affect the extension, grouped by cause, from the problem
   * that affects the most nodes to the one that affects the fewest. SageMaker
   * HyperPod counts each node in at most one issue. The list contains at most 20
   * issues. If more than 20 different problems exist, the list shows the 19 that
   * affect the most nodes, and the 20th issue has the code <code>Other</code> and
   * counts the nodes that the remaining problems affect.</p>
   */
  inline const Aws::Vector<ExtensionHealthIssue>& GetIssues() const { return m_issues; }
  inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
  template <typename IssuesT = Aws::Vector<ExtensionHealthIssue>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Vector<ExtensionHealthIssue>>
  ExtensionHealth& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  template <typename IssuesT = ExtensionHealthIssue>
  ExtensionHealth& AddIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace_back(std::forward<IssuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExtensionHealthIssue> m_issues;
  bool m_issuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
