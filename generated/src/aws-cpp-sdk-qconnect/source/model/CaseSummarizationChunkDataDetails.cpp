/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/CaseSummarizationChunkDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

CaseSummarizationChunkDataDetails::CaseSummarizationChunkDataDetails(JsonView jsonValue) { *this = jsonValue; }

CaseSummarizationChunkDataDetails& CaseSummarizationChunkDataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("completion")) {
    m_completion = jsonValue.GetString("completion");
    m_completionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextChunkToken")) {
    m_nextChunkToken = jsonValue.GetString("nextChunkToken");
    m_nextChunkTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseSummarizationChunkDataDetails::Jsonize() const {
  JsonValue payload;

  if (m_completionHasBeenSet) {
    payload.WithString("completion", m_completion);
  }

  if (m_nextChunkTokenHasBeenSet) {
    payload.WithString("nextChunkToken", m_nextChunkToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
