/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

class StartSpeechSynthesisStreamInitialResponse {
 public:
  AWS_POLLY_API StartSpeechSynthesisStreamInitialResponse() = default;
  AWS_POLLY_API StartSpeechSynthesisStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API StartSpeechSynthesisStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API StartSpeechSynthesisStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
