/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventActorReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventActorReference::EventActorReference(JsonView jsonValue) { *this = jsonValue; }

EventActorReference& EventActorReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventActorId")) {
    m_eventActorId = jsonValue.GetString("EventActorId");
    m_eventActorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventActorValue")) {
    m_eventActorValue = jsonValue.GetString("EventActorValue");
    m_eventActorValueHasBeenSet = true;
  }
  return *this;
}

JsonValue EventActorReference::Jsonize() const {
  JsonValue payload;

  if (m_eventActorIdHasBeenSet) {
    payload.WithString("EventActorId", m_eventActorId);
  }

  if (m_eventActorValueHasBeenSet) {
    payload.WithString("EventActorValue", m_eventActorValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
