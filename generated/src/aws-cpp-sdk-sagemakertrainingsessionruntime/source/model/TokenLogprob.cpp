/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/TokenLogprob.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

TokenLogprob::TokenLogprob(JsonView jsonValue) { *this = jsonValue; }

TokenLogprob& TokenLogprob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokenId")) {
    m_tokenId = jsonValue.GetInteger("tokenId");
    m_tokenIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logprob")) {
    m_logprob = jsonValue.GetDouble("logprob");
    m_logprobHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenLogprob::Jsonize() const {
  JsonValue payload;

  if (m_tokenIdHasBeenSet) {
    payload.WithInteger("tokenId", m_tokenId);
  }

  if (m_logprobHasBeenSet) {
    payload.WithDouble("logprob", m_logprob);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
