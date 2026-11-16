/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

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
 * <p>An object in Amazon S3.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/S3Location">AWS
 * API Reference</a></p>
 */
class S3Location {
 public:
  AWS_OPENSEARCHMEMORY_API S3Location() = default;
  AWS_OPENSEARCHMEMORY_API S3Location(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The object's S3 URI, for example <code>s3://bucket/key</code>. The bucket
   * must be in the space's Region. You need <code>s3:GetObject</code> on the object,
   * and <code>kms:Decrypt</code> on its key if the object uses SSE-KMS. The event
   * doesn't store the object itself.</p>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  S3Location& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uri;
  bool m_uriHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
