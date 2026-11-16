/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/Bm25Score.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Vectors {
namespace Model {

/**
 * <p>Relevance scores for a full-text-only or hybrid search result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/QueryScores">AWS
 * API Reference</a></p>
 */
class QueryScores {
 public:
  AWS_S3VECTORS_API QueryScores() = default;
  AWS_S3VECTORS_API QueryScores(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API QueryScores& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Reciprocal Rank Fusion (RRF) score that combines the vector and full-text
   * rankings. This field is returned only for hybrid requests.</p>
   */
  inline double GetFused() const { return m_fused; }
  inline bool FusedHasBeenSet() const { return m_fusedHasBeenSet; }
  inline void SetFused(double value) {
    m_fusedHasBeenSet = true;
    m_fused = value;
  }
  inline QueryScores& WithFused(double value) {
    SetFused(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BM25 scores for the searchable metadata keys that the result matched.</p>
   */
  inline const Aws::Vector<Bm25Score>& GetBm25Scores() const { return m_bm25Scores; }
  inline bool Bm25ScoresHasBeenSet() const { return m_bm25ScoresHasBeenSet; }
  template <typename Bm25ScoresT = Aws::Vector<Bm25Score>>
  void SetBm25Scores(Bm25ScoresT&& value) {
    m_bm25ScoresHasBeenSet = true;
    m_bm25Scores = std::forward<Bm25ScoresT>(value);
  }
  template <typename Bm25ScoresT = Aws::Vector<Bm25Score>>
  QueryScores& WithBm25Scores(Bm25ScoresT&& value) {
    SetBm25Scores(std::forward<Bm25ScoresT>(value));
    return *this;
  }
  template <typename Bm25ScoresT = Bm25Score>
  QueryScores& AddBm25Scores(Bm25ScoresT&& value) {
    m_bm25ScoresHasBeenSet = true;
    m_bm25Scores.emplace_back(std::forward<Bm25ScoresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distance from the query vector. This field is returned when a hybrid
   * result matches the vector search.</p>
   */
  inline double GetVectorDistance() const { return m_vectorDistance; }
  inline bool VectorDistanceHasBeenSet() const { return m_vectorDistanceHasBeenSet; }
  inline void SetVectorDistance(double value) {
    m_vectorDistanceHasBeenSet = true;
    m_vectorDistance = value;
  }
  inline QueryScores& WithVectorDistance(double value) {
    SetVectorDistance(value);
    return *this;
  }
  ///@}
 private:
  double m_fused{0.0};

  Aws::Vector<Bm25Score> m_bm25Scores;

  double m_vectorDistance{0.0};
  bool m_fusedHasBeenSet = false;
  bool m_bm25ScoresHasBeenSet = false;
  bool m_vectorDistanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
