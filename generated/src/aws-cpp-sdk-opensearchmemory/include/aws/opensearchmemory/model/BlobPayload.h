/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/BlobContentType.h>
#include <aws/opensearchmemory/model/BlobSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>A document stored in Amazon S3, such as a PDF, and its media
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/BlobPayload">AWS
 * API Reference</a></p>
 */
class BlobPayload {
 public:
  AWS_OPENSEARCHMEMORY_API BlobPayload() = default;
  AWS_OPENSEARCHMEMORY_API BlobPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API BlobPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The document's media type. Only <code>application/pdf</code> is supported.
   * Any other value fails with <code>ValidationException</code>.</p>
   */
  inline BlobContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(BlobContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline BlobPayload& WithContentType(BlobContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the document.</p>
   */
  inline const BlobSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = BlobSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = BlobSource>
  BlobPayload& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  BlobContentType m_contentType{BlobContentType::NOT_SET};

  BlobSource m_source;
  bool m_contentTypeHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
