/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/CloseStreamEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

CloseStreamEvent::CloseStreamEvent(JsonView jsonValue) { *this = jsonValue; }

CloseStreamEvent& CloseStreamEvent::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue CloseStreamEvent::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
