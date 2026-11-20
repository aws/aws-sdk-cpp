/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/DisableBedrockGuardrails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

DisableBedrockGuardrails::DisableBedrockGuardrails(JsonView jsonValue) { *this = jsonValue; }

DisableBedrockGuardrails& DisableBedrockGuardrails::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DisableBedrockGuardrails::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
