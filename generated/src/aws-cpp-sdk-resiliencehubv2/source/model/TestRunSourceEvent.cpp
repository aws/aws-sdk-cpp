/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunSourceEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunSourceEvent::TestRunSourceEvent(JsonView jsonValue) { *this = jsonValue; }

TestRunSourceEvent& TestRunSourceEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceArn")) {
    m_sourceArn = jsonValue.GetString("sourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = TestRunSourceEventTypeMapper::GetTestRunSourceEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detail")) {
    m_detail = jsonValue.GetObject("detail");
    m_detailHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunSourceEvent::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_sourceArnHasBeenSet) {
    payload.WithString("sourceArn", m_sourceArn);
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", TestRunSourceEventTypeMapper::GetNameForTestRunSourceEventType(m_eventType));
  }

  if (m_detailHasBeenSet) {
    payload.WithObject("detail", m_detail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
