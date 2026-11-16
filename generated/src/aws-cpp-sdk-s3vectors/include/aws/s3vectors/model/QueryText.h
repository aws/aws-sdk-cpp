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
 * <p>A full-text search query for a single metadata key.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/QueryText">AWS
 * API Reference</a></p>
 */
class QueryText {
 public:
  AWS_S3VECTORS_API QueryText() = default;
  AWS_S3VECTORS_API QueryText(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API QueryText& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The full-text query string.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  QueryText& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The searchable metadata key to query.</p>
   */
  inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
  inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
  template <typename MetadataKeyT = Aws::String>
  void SetMetadataKey(MetadataKeyT&& value) {
    m_metadataKeyHasBeenSet = true;
    m_metadataKey = std::forward<MetadataKeyT>(value);
  }
  template <typename MetadataKeyT = Aws::String>
  QueryText& WithMetadataKey(MetadataKeyT&& value) {
    SetMetadataKey(std::forward<MetadataKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_metadataKey;
  bool m_textHasBeenSet = false;
  bool m_metadataKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
