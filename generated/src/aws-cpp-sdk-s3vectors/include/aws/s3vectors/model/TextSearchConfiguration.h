/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/AnalyzerStatus.h>
#include <aws/s3vectors/model/LanguageCode.h>

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
 * <p>A full-text search configuration for a single metadata key.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/TextSearchConfiguration">AWS
 * API Reference</a></p>
 */
class TextSearchConfiguration {
 public:
  AWS_S3VECTORS_API TextSearchConfiguration() = default;
  AWS_S3VECTORS_API TextSearchConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API TextSearchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata key to make full-text searchable.</p>
   */
  inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
  inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
  template <typename MetadataKeyT = Aws::String>
  void SetMetadataKey(MetadataKeyT&& value) {
    m_metadataKeyHasBeenSet = true;
    m_metadataKey = std::forward<MetadataKeyT>(value);
  }
  template <typename MetadataKeyT = Aws::String>
  TextSearchConfiguration& WithMetadataKey(MetadataKeyT&& value) {
    SetMetadataKey(std::forward<MetadataKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language that the text search analyzer uses. Valid values are
   * <code>en</code> (English), <code>fr</code> (French), <code>es</code> (Spanish),
   * <code>pt</code> (Portuguese), <code>it</code> (Italian), <code>de</code>
   * (German), <code>nl</code> (Dutch), <code>zh</code> (Chinese), <code>ja</code>
   * (Japanese), and <code>ko</code> (Korean). If you don't specify a language,
   * Amazon S3 Vectors uses the default standard analyzer.</p>
   */
  inline LanguageCode GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(LanguageCode value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline TextSearchConfiguration& WithLanguage(LanguageCode value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The backfill status of the text search configuration. Valid values are
   * <code>ACTIVE</code>, which indicates that the analyzer is built and serving
   * queries, and <code>BUILDING</code>, which indicates that the analyzer is being
   * backfilled and isn't yet serving queries. This field is returned by
   * <code>GetIndex</code>.</p>
   */
  inline AnalyzerStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnalyzerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TextSearchConfiguration& WithStatus(AnalyzerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataKey;

  LanguageCode m_language{LanguageCode::NOT_SET};

  AnalyzerStatus m_status{AnalyzerStatus::NOT_SET};
  bool m_metadataKeyHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
