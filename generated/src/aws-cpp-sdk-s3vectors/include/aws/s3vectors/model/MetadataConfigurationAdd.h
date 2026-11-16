/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/TextSearchConfiguration.h>

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
 * <p>Text search configurations to add to a vector index.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/MetadataConfigurationAdd">AWS
 * API Reference</a></p>
 */
class MetadataConfigurationAdd {
 public:
  AWS_S3VECTORS_API MetadataConfigurationAdd() = default;
  AWS_S3VECTORS_API MetadataConfigurationAdd(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API MetadataConfigurationAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Text search configurations to add. Amazon S3 Vectors begins building the
   * corresponding full-text indexes after the update is accepted.</p>
   */
  inline const Aws::Vector<TextSearchConfiguration>& GetTextSearchConfigurations() const { return m_textSearchConfigurations; }
  inline bool TextSearchConfigurationsHasBeenSet() const { return m_textSearchConfigurationsHasBeenSet; }
  template <typename TextSearchConfigurationsT = Aws::Vector<TextSearchConfiguration>>
  void SetTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    m_textSearchConfigurationsHasBeenSet = true;
    m_textSearchConfigurations = std::forward<TextSearchConfigurationsT>(value);
  }
  template <typename TextSearchConfigurationsT = Aws::Vector<TextSearchConfiguration>>
  MetadataConfigurationAdd& WithTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    SetTextSearchConfigurations(std::forward<TextSearchConfigurationsT>(value));
    return *this;
  }
  template <typename TextSearchConfigurationsT = TextSearchConfiguration>
  MetadataConfigurationAdd& AddTextSearchConfigurations(TextSearchConfigurationsT&& value) {
    m_textSearchConfigurationsHasBeenSet = true;
    m_textSearchConfigurations.emplace_back(std::forward<TextSearchConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TextSearchConfiguration> m_textSearchConfigurations;
  bool m_textSearchConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
