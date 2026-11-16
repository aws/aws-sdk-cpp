/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/BatchGetEventErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>A requested event that the call didn't return, and the reason.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/BatchGetEventError">AWS
 * API Reference</a></p>
 */
class BatchGetEventError {
 public:
  AWS_OPENSEARCHMEMORY_API BatchGetEventError() = default;
  AWS_OPENSEARCHMEMORY_API BatchGetEventError(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API BatchGetEventError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the requested event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  BatchGetEventError& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the call didn't return the event.</p>
   */
  inline BatchGetEventErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchGetEventErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchGetEventError& WithErrorCode(BatchGetEventErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchGetEventError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  BatchGetEventErrorCode m_errorCode{BatchGetEventErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_eventIdHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
