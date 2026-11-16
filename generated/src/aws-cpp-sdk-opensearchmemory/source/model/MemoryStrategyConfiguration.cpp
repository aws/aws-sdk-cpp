/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/MemoryStrategyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

MemoryStrategyConfiguration::MemoryStrategyConfiguration(JsonView jsonValue) { *this = jsonValue; }

MemoryStrategyConfiguration& MemoryStrategyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("extractionPrompt")) {
    m_extractionPrompt = jsonValue.GetString("extractionPrompt");
    m_extractionPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractEveryNMessages")) {
    m_extractEveryNMessages = jsonValue.GetInteger("extractEveryNMessages");
    m_extractEveryNMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractEveryNTokens")) {
    m_extractEveryNTokens = jsonValue.GetInteger("extractEveryNTokens");
    m_extractEveryNTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idleTimeoutSeconds")) {
    m_idleTimeoutSeconds = jsonValue.GetInteger("idleTimeoutSeconds");
    m_idleTimeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractionSeedTopK")) {
    m_extractionSeedTopK = jsonValue.GetInteger("extractionSeedTopK");
    m_extractionSeedTopKHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractionSeedRecentN")) {
    m_extractionSeedRecentN = jsonValue.GetInteger("extractionSeedRecentN");
    m_extractionSeedRecentNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consolidationEnabled")) {
    m_consolidationEnabled = jsonValue.GetBool("consolidationEnabled");
    m_consolidationEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryStrategyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_extractionPromptHasBeenSet) {
    payload.WithString("extractionPrompt", m_extractionPrompt);
  }

  if (m_extractEveryNMessagesHasBeenSet) {
    payload.WithInteger("extractEveryNMessages", m_extractEveryNMessages);
  }

  if (m_extractEveryNTokensHasBeenSet) {
    payload.WithInteger("extractEveryNTokens", m_extractEveryNTokens);
  }

  if (m_idleTimeoutSecondsHasBeenSet) {
    payload.WithInteger("idleTimeoutSeconds", m_idleTimeoutSeconds);
  }

  if (m_extractionSeedTopKHasBeenSet) {
    payload.WithInteger("extractionSeedTopK", m_extractionSeedTopK);
  }

  if (m_extractionSeedRecentNHasBeenSet) {
    payload.WithInteger("extractionSeedRecentN", m_extractionSeedRecentN);
  }

  if (m_consolidationEnabledHasBeenSet) {
    payload.WithBool("consolidationEnabled", m_consolidationEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
