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
 * <p>A searchable metadata key that identifies a text search
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/TextSearchConfigurationKey">AWS
 * API Reference</a></p>
 */
class TextSearchConfigurationKey {
 public:
  AWS_S3VECTORS_API TextSearchConfigurationKey() = default;
  AWS_S3VECTORS_API TextSearchConfigurationKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API TextSearchConfigurationKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The searchable metadata key whose text search configuration to delete.</p>
   */
  inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
  inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
  template <typename MetadataKeyT = Aws::String>
  void SetMetadataKey(MetadataKeyT&& value) {
    m_metadataKeyHasBeenSet = true;
    m_metadataKey = std::forward<MetadataKeyT>(value);
  }
  template <typename MetadataKeyT = Aws::String>
  TextSearchConfigurationKey& WithMetadataKey(MetadataKeyT&& value) {
    SetMetadataKey(std::forward<MetadataKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataKey;
  bool m_metadataKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
