/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/StartSpeechSynthesisStreamInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

StartSpeechSynthesisStreamInitialResponse::StartSpeechSynthesisStreamInitialResponse(JsonView jsonValue) { *this = jsonValue; }

StartSpeechSynthesisStreamInitialResponse& StartSpeechSynthesisStreamInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartSpeechSynthesisStreamInitialResponse::StartSpeechSynthesisStreamInitialResponse(const Http::HeaderValueCollection& headers)
    : StartSpeechSynthesisStreamInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue StartSpeechSynthesisStreamInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
