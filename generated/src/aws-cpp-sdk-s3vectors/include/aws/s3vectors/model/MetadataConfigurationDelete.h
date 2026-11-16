/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/TextSearchConfigurationKey.h>

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
 * <p>Text search configurations to delete from a vector index.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/MetadataConfigurationDelete">AWS
 * API Reference</a></p>
 */
class MetadataConfigurationDelete {
 public:
  AWS_S3VECTORS_API MetadataConfigurationDelete() = default;
  AWS_S3VECTORS_API MetadataConfigurationDelete(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API MetadataConfigurationDelete& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Searchable metadata keys whose text search configurations to delete.</p>
   */
  inline const Aws::Vector<TextSearchConfigurationKey>& GetTextSearchConfigurations() const { return m_textSearchConfigurations; }
  inline bool TextSearchConfigurationsHasBeenSet() const { return m_textSearchConfigurationsHasBeenSet; }
  template <typename TextSearchConfigurationsT = Aws::Vector<TextSearchConfigurationKey>>
  void SetTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    m_textSearchConfigurationsHasBeenSet = true;
    m_textSearchConfigurations = std::forward<TextSearchConfigurationsT>(value);
  }
  template <typename TextSearchConfigurationsT = Aws::Vector<TextSearchConfigurationKey>>
  MetadataConfigurationDelete& WithTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    SetTextSearchConfigurations(std::forward<TextSearchConfigurationsT>(value));
    return *this;
  }
  template <typename TextSearchConfigurationsT = TextSearchConfigurationKey>
  MetadataConfigurationDelete& AddTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    m_textSearchConfigurationsHasBeenSet = true;
    m_textSearchConfigurations.emplace_back(std::forward<TextSearchConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TextSearchConfigurationKey> m_textSearchConfigurations;
  bool m_textSearchConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
