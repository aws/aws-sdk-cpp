/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AIPromptInferenceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AIPromptInferenceConfiguration::AIPromptInferenceConfiguration(JsonView jsonValue) { *this = jsonValue; }

AIPromptInferenceConfiguration& AIPromptInferenceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("textAIPromptInferenceConfiguration")) {
    m_textAIPromptInferenceConfiguration = jsonValue.GetObject("textAIPromptInferenceConfiguration");
    m_textAIPromptInferenceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AIPromptInferenceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_textAIPromptInferenceConfigurationHasBeenSet) {
    payload.WithObject("textAIPromptInferenceConfiguration", m_textAIPromptInferenceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
