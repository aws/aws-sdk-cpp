/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/StreamClosedEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

StreamClosedEvent::StreamClosedEvent(JsonView jsonValue) { *this = jsonValue; }

StreamClosedEvent& StreamClosedEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RequestCharacters")) {
    m_requestCharacters = jsonValue.GetInteger("RequestCharacters");
    m_requestCharactersHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamClosedEvent::Jsonize() const {
  JsonValue payload;

  if (m_requestCharactersHasBeenSet) {
    payload.WithInteger("RequestCharacters", m_requestCharacters);
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
