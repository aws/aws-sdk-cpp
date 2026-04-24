/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Details about suggested message data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SuggestedMessageDataDetails">AWS
 * API Reference</a></p>
 */
class SuggestedMessageDataDetails {
 public:
  AWS_QCONNECT_API SuggestedMessageDataDetails() = default;
  AWS_QCONNECT_API SuggestedMessageDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SuggestedMessageDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text content of the suggested message.</p>
   */
  inline const Aws::String& GetMessageText() const { return m_messageText; }
  inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }
  template <typename MessageTextT = Aws::String>
  void SetMessageText(MessageTextT&& value) {
    m_messageTextHasBeenSet = true;
    m_messageText = std::forward<MessageTextT>(value);
  }
  template <typename MessageTextT = Aws::String>
  SuggestedMessageDataDetails& WithMessageText(MessageTextT&& value) {
    SetMessageText(std::forward<MessageTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageText;
  bool m_messageTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
