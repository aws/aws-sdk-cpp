/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/Span.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

Span::Span(JsonView jsonValue) { *this = jsonValue; }

Span& Span::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spanId")) {
    m_spanId = jsonValue.GetString("spanId");
    m_spanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assistantId")) {
    m_assistantId = jsonValue.GetString("assistantId");
    m_assistantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentSpanId")) {
    m_parentSpanId = jsonValue.GetString("parentSpanId");
    m_parentSpanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spanName")) {
    m_spanName = jsonValue.GetString("spanName");
    m_spanNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spanType")) {
    m_spanType = SpanTypeMapper::GetSpanTypeForName(jsonValue.GetString("spanType"));
    m_spanTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("startTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("endTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SpanStatusMapper::GetSpanStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestId")) {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue Span::Jsonize() const {
  JsonValue payload;

  if (m_spanIdHasBeenSet) {
    payload.WithString("spanId", m_spanId);
  }

  if (m_assistantIdHasBeenSet) {
    payload.WithString("assistantId", m_assistantId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_parentSpanIdHasBeenSet) {
    payload.WithString("parentSpanId", m_parentSpanId);
  }

  if (m_spanNameHasBeenSet) {
    payload.WithString("spanName", m_spanName);
  }

  if (m_spanTypeHasBeenSet) {
    payload.WithString("spanType", SpanTypeMapper::GetNameForSpanType(m_spanType));
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithDouble("endTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SpanStatusMapper::GetNameForSpanStatus(m_status));
  }

  if (m_requestIdHasBeenSet) {
    payload.WithString("requestId", m_requestId);
  }

  if (m_attributesHasBeenSet) {
    payload.WithObject("attributes", m_attributes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
