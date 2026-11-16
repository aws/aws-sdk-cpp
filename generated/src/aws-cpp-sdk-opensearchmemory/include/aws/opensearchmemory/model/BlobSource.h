/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/S3Location.h>

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
 * <p>The source of a blob's content. Set exactly one member. Currently, the only
 * member is <code>s3Location</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/BlobSource">AWS
 * API Reference</a></p>
 */
class BlobSource {
 public:
  AWS_OPENSEARCHMEMORY_API BlobSource() = default;
  AWS_OPENSEARCHMEMORY_API BlobSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API BlobSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 object holding the document.</p>
   */
  inline const S3Location& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = S3Location>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = S3Location>
  BlobSource& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  S3Location m_s3Location;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
