/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SampleResponse::SampleResponse(JsonView jsonValue) { *this = jsonValue; }

SampleResponse& SampleResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sequences")) {
    Aws::Utils::Array<JsonView> sequencesJsonList = jsonValue.GetArray("sequences");
    for (unsigned sequencesIndex = 0; sequencesIndex < sequencesJsonList.GetLength(); ++sequencesIndex) {
      m_sequences.push_back(sequencesJsonList[sequencesIndex].AsObject());
    }
    m_sequencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptLogprobs")) {
    Aws::Utils::Array<JsonView> promptLogprobsJsonList = jsonValue.GetArray("promptLogprobs");
    for (unsigned promptLogprobsIndex = 0; promptLogprobsIndex < promptLogprobsJsonList.GetLength(); ++promptLogprobsIndex) {
      m_promptLogprobs.push_back(promptLogprobsJsonList[promptLogprobsIndex].AsDouble());
    }
    m_promptLogprobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topkPromptLogprobs")) {
    Aws::Utils::Array<JsonView> topkPromptLogprobsJsonList = jsonValue.GetArray("topkPromptLogprobs");
    for (unsigned topkPromptLogprobsIndex = 0; topkPromptLogprobsIndex < topkPromptLogprobsJsonList.GetLength();
         ++topkPromptLogprobsIndex) {
      Aws::Utils::Array<JsonView> tokenLogprobList2JsonList = topkPromptLogprobsJsonList[topkPromptLogprobsIndex].AsArray();
      Aws::Vector<TokenLogprob> tokenLogprobList2List;
      tokenLogprobList2List.reserve((size_t)tokenLogprobList2JsonList.GetLength());
      for (unsigned tokenLogprobList2Index = 0; tokenLogprobList2Index < tokenLogprobList2JsonList.GetLength(); ++tokenLogprobList2Index) {
        tokenLogprobList2List.push_back(tokenLogprobList2JsonList[tokenLogprobList2Index].AsObject());
      }
      m_topkPromptLogprobs.push_back(std::move(tokenLogprobList2List));
    }
    m_topkPromptLogprobsHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleResponse::Jsonize() const {
  JsonValue payload;

  if (m_sequencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sequencesJsonList(m_sequences.size());
    for (unsigned sequencesIndex = 0; sequencesIndex < sequencesJsonList.GetLength(); ++sequencesIndex) {
      sequencesJsonList[sequencesIndex].AsObject(m_sequences[sequencesIndex].Jsonize());
    }
    payload.WithArray("sequences", std::move(sequencesJsonList));
  }

  if (m_promptLogprobsHasBeenSet) {
    Aws::Utils::Array<JsonValue> promptLogprobsJsonList(m_promptLogprobs.size());
    for (unsigned promptLogprobsIndex = 0; promptLogprobsIndex < promptLogprobsJsonList.GetLength(); ++promptLogprobsIndex) {
      promptLogprobsJsonList[promptLogprobsIndex].AsDouble(m_promptLogprobs[promptLogprobsIndex]);
    }
    payload.WithArray("promptLogprobs", std::move(promptLogprobsJsonList));
  }

  if (m_topkPromptLogprobsHasBeenSet) {
    Aws::Utils::Array<JsonValue> topkPromptLogprobsJsonList(m_topkPromptLogprobs.size());
    for (unsigned topkPromptLogprobsIndex = 0; topkPromptLogprobsIndex < topkPromptLogprobsJsonList.GetLength();
         ++topkPromptLogprobsIndex) {
      Aws::Utils::Array<JsonValue> tokenLogprobListJsonList(m_topkPromptLogprobs[topkPromptLogprobsIndex].size());
      for (unsigned tokenLogprobListIndex = 0; tokenLogprobListIndex < tokenLogprobListJsonList.GetLength(); ++tokenLogprobListIndex) {
        tokenLogprobListJsonList[tokenLogprobListIndex].AsObject(
            m_topkPromptLogprobs[topkPromptLogprobsIndex][tokenLogprobListIndex].Jsonize());
      }
      topkPromptLogprobsJsonList[topkPromptLogprobsIndex].AsArray(std::move(tokenLogprobListJsonList));
    }
    payload.WithArray("topkPromptLogprobs", std::move(topkPromptLogprobsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
