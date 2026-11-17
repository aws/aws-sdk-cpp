/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>The content of a network migration insight.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/InsightMessage">AWS
 * API Reference</a></p>
 */
class InsightMessage {
 public:
  AWS_MGN_API InsightMessage() = default;
  AWS_MGN_API InsightMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API InsightMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A stable identifier for the kind of insight.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  InsightMessage& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable insight message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InsightMessage& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The topic that the insight relates to.</p>
   */
  inline const Aws::String& GetTopic() const { return m_topic; }
  inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
  template <typename TopicT = Aws::String>
  void SetTopic(TopicT&& value) {
    m_topicHasBeenSet = true;
    m_topic = std::forward<TopicT>(value);
  }
  template <typename TopicT = Aws::String>
  InsightMessage& WithTopic(TopicT&& value) {
    SetTopic(std::forward<TopicT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;

  Aws::String m_message;

  Aws::String m_topic;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_topicHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
