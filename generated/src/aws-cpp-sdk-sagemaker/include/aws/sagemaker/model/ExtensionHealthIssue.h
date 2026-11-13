/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionHealthIssueCode.h>

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
 * <p>Information about a problem that affects an extension on one or more nodes of
 * a SageMaker HyperPod cluster, including the number of nodes that it
 * affects.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExtensionHealthIssue">AWS
 * API Reference</a></p>
 */
class ExtensionHealthIssue {
 public:
  AWS_SAGEMAKER_API ExtensionHealthIssue() = default;
  AWS_SAGEMAKER_API ExtensionHealthIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ExtensionHealthIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code that describes the type of issue.</p>
   */
  inline ExtensionHealthIssueCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(ExtensionHealthIssueCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline ExtensionHealthIssue& WithCode(ExtensionHealthIssueCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the problem, for example the setting or component to check.
   * Every node with the same problem has the same message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ExtensionHealthIssue& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes that have this problem.</p>
   */
  inline int GetNodeCount() const { return m_nodeCount; }
  inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
  inline void SetNodeCount(int value) {
    m_nodeCountHasBeenSet = true;
    m_nodeCount = value;
  }
  inline ExtensionHealthIssue& WithNodeCount(int value) {
    SetNodeCount(value);
    return *this;
  }
  ///@}
 private:
  ExtensionHealthIssueCode m_code{ExtensionHealthIssueCode::NOT_SET};

  Aws::String m_message;

  int m_nodeCount{0};
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_nodeCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
