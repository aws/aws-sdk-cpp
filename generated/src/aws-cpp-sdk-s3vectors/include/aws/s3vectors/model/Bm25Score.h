/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>

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
 * <p>The raw BM25 relevance score for a single searchable metadata
 * key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/Bm25Score">AWS
 * API Reference</a></p>
 */
class Bm25Score {
 public:
  AWS_S3VECTORS_API Bm25Score() = default;
  AWS_S3VECTORS_API Bm25Score(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Bm25Score& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The searchable metadata key that the score applies to.</p>
   */
  inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
  inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
  template <typename MetadataKeyT = Aws::String>
  void SetMetadataKey(MetadataKeyT&& value) {
    m_metadataKeyHasBeenSet = true;
    m_metadataKey = std::forward<MetadataKeyT>(value);
  }
  template <typename MetadataKeyT = Aws::String>
  Bm25Score& WithMetadataKey(MetadataKeyT&& value) {
    SetMetadataKey(std::forward<MetadataKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BM25 relevance score.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline Bm25Score& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataKey;

  double m_score{0.0};
  bool m_metadataKeyHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
