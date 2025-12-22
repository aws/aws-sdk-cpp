/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SpanAttributes.h>
#include <aws/qconnect/model/SpanStatus.h>
#include <aws/qconnect/model/SpanType.h>

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
 * <p>A span represents a unit of work during AI agent execution, capturing timing,
 * status, and contextual attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Span">AWS API
 * Reference</a></p>
 */
class Span {
 public:
  AWS_QCONNECT_API Span() = default;
  AWS_QCONNECT_API Span(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Span& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique span identifier</p>
   */
  inline const Aws::String& GetSpanId() const { return m_spanId; }
  inline bool SpanIdHasBeenSet() const { return m_spanIdHasBeenSet; }
  template <typename SpanIdT = Aws::String>
  void SetSpanId(SpanIdT&& value) {
    m_spanIdHasBeenSet = true;
    m_spanId = std::forward<SpanIdT>(value);
  }
  template <typename SpanIdT = Aws::String>
  Span& WithSpanId(SpanIdT&& value) {
    SetSpanId(std::forward<SpanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>UUID of the Connect AI Assistant resource</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  Span& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>UUID of the Connect AI Session resource</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  Span& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parent span identifier for hierarchy. Null for root spans.</p>
   */
  inline const Aws::String& GetParentSpanId() const { return m_parentSpanId; }
  inline bool ParentSpanIdHasBeenSet() const { return m_parentSpanIdHasBeenSet; }
  template <typename ParentSpanIdT = Aws::String>
  void SetParentSpanId(ParentSpanIdT&& value) {
    m_parentSpanIdHasBeenSet = true;
    m_parentSpanId = std::forward<ParentSpanIdT>(value);
  }
  template <typename ParentSpanIdT = Aws::String>
  Span& WithParentSpanId(ParentSpanIdT&& value) {
    SetParentSpanId(std::forward<ParentSpanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service-defined operation name</p>
   */
  inline const Aws::String& GetSpanName() const { return m_spanName; }
  inline bool SpanNameHasBeenSet() const { return m_spanNameHasBeenSet; }
  template <typename SpanNameT = Aws::String>
  void SetSpanName(SpanNameT&& value) {
    m_spanNameHasBeenSet = true;
    m_spanName = std::forward<SpanNameT>(value);
  }
  template <typename SpanNameT = Aws::String>
  Span& WithSpanName(SpanNameT&& value) {
    SetSpanName(std::forward<SpanNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operation relationship type</p>
   */
  inline SpanType GetSpanType() const { return m_spanType; }
  inline bool SpanTypeHasBeenSet() const { return m_spanTypeHasBeenSet; }
  inline void SetSpanType(SpanType value) {
    m_spanTypeHasBeenSet = true;
    m_spanType = value;
  }
  inline Span& WithSpanType(SpanType value) {
    SetSpanType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operation start time in milliseconds since epoch</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  Span& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operation end time in milliseconds since epoch</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  Span& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Span completion status</p>
   */
  inline SpanStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SpanStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Span& WithStatus(SpanStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service request ID that initiated the operation</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  Span& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Span-specific contextual attributes</p>
   */
  inline const SpanAttributes& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = SpanAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = SpanAttributes>
  Span& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spanId;

  Aws::String m_assistantId;

  Aws::String m_sessionId;

  Aws::String m_parentSpanId;

  Aws::String m_spanName;

  SpanType m_spanType{SpanType::NOT_SET};

  Aws::Utils::DateTime m_startTimestamp{};

  Aws::Utils::DateTime m_endTimestamp{};

  SpanStatus m_status{SpanStatus::NOT_SET};

  Aws::String m_requestId;

  SpanAttributes m_attributes;
  bool m_spanIdHasBeenSet = false;
  bool m_assistantIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_parentSpanIdHasBeenSet = false;
  bool m_spanNameHasBeenSet = false;
  bool m_spanTypeHasBeenSet = false;
  bool m_startTimestampHasBeenSet = false;
  bool m_endTimestampHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
