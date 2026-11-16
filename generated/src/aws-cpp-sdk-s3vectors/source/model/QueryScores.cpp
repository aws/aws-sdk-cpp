/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/QueryScores.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

QueryScores::QueryScores(JsonView jsonValue) { *this = jsonValue; }

QueryScores& QueryScores::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fused")) {
    m_fused = jsonValue.GetDouble("fused");
    m_fusedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bm25Scores")) {
    Aws::Utils::Array<JsonView> bm25ScoresJsonList = jsonValue.GetArray("bm25Scores");
    for (unsigned bm25ScoresIndex = 0; bm25ScoresIndex < bm25ScoresJsonList.GetLength(); ++bm25ScoresIndex) {
      m_bm25Scores.push_back(bm25ScoresJsonList[bm25ScoresIndex].AsObject());
    }
    m_bm25ScoresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vectorDistance")) {
    m_vectorDistance = jsonValue.GetDouble("vectorDistance");
    m_vectorDistanceHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryScores::Jsonize() const {
  JsonValue payload;

  if (m_fusedHasBeenSet) {
    payload.WithDouble("fused", m_fused);
  }

  if (m_bm25ScoresHasBeenSet) {
    Aws::Utils::Array<JsonValue> bm25ScoresJsonList(m_bm25Scores.size());
    for (unsigned bm25ScoresIndex = 0; bm25ScoresIndex < bm25ScoresJsonList.GetLength(); ++bm25ScoresIndex) {
      bm25ScoresJsonList[bm25ScoresIndex].AsObject(m_bm25Scores[bm25ScoresIndex].Jsonize());
    }
    payload.WithArray("bm25Scores", std::move(bm25ScoresJsonList));
  }

  if (m_vectorDistanceHasBeenSet) {
    payload.WithDouble("vectorDistance", m_vectorDistance);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
