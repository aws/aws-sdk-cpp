/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/CallResultContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>The result returned from executing a tool call.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CallResult">AWS
 * API Reference</a></p>
 */
class CallResult {
 public:
  AWS_NOVAACT_API CallResult() = default;
  AWS_NOVAACT_API CallResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API CallResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the tool call that this result corresponds to.</p>
   */
  inline const Aws::String& GetCallId() const { return m_callId; }
  inline bool CallIdHasBeenSet() const { return m_callIdHasBeenSet; }
  template <typename CallIdT = Aws::String>
  void SetCallId(CallIdT&& value) {
    m_callIdHasBeenSet = true;
    m_callId = std::forward<CallIdT>(value);
  }
  template <typename CallIdT = Aws::String>
  CallResult& WithCallId(CallIdT&& value) {
    SetCallId(std::forward<CallIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content returned by the tool execution, which can include text or other
   * media types.</p>
   */
  inline const Aws::Vector<CallResultContent>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<CallResultContent>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<CallResultContent>>
  CallResult& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = CallResultContent>
  CallResult& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callId;

  Aws::Vector<CallResultContent> m_content;
  bool m_callIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
