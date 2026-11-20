/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/BedrockGuardrails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

BedrockGuardrails::BedrockGuardrails(JsonView jsonValue) { *this = jsonValue; }

BedrockGuardrails& BedrockGuardrails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Disable")) {
    m_disable = jsonValue.GetObject("Disable");
    m_disableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProtectRequestOnly")) {
    m_protectRequestOnly = jsonValue.GetObject("ProtectRequestOnly");
    m_protectRequestOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProtectRequestAndResponse")) {
    m_protectRequestAndResponse = jsonValue.GetObject("ProtectRequestAndResponse");
    m_protectRequestAndResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockGuardrails::Jsonize() const {
  JsonValue payload;

  if (m_disableHasBeenSet) {
    payload.WithObject("Disable", m_disable.Jsonize());
  }

  if (m_protectRequestOnlyHasBeenSet) {
    payload.WithObject("ProtectRequestOnly", m_protectRequestOnly.Jsonize());
  }

  if (m_protectRequestAndResponseHasBeenSet) {
    payload.WithObject("ProtectRequestAndResponse", m_protectRequestAndResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
