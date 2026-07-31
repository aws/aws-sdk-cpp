/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Topic reference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicReference">AWS
 * API Reference</a></p>
 */
class TopicReference {
 public:
  AWS_QUICKSIGHT_API TopicReference() = default;
  AWS_QUICKSIGHT_API TopicReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Topic placeholder.</p>
   */
  inline const Aws::String& GetTopicPlaceholder() const { return m_topicPlaceholder; }
  inline bool TopicPlaceholderHasBeenSet() const { return m_topicPlaceholderHasBeenSet; }
  template <typename TopicPlaceholderT = Aws::String>
  void SetTopicPlaceholder(TopicPlaceholderT&& value) {
    m_topicPlaceholderHasBeenSet = true;
    m_topicPlaceholder = std::forward<TopicPlaceholderT>(value);
  }
  template <typename TopicPlaceholderT = Aws::String>
  TopicReference& WithTopicPlaceholder(TopicPlaceholderT&& value) {
    SetTopicPlaceholder(std::forward<TopicPlaceholderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Topic Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  TopicReference& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicPlaceholder;

  Aws::String m_topicArn;
  bool m_topicPlaceholderHasBeenSet = false;
  bool m_topicArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
