/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Support {
namespace Model {

/**
 * <p>Identifies a single uploaded part of a multipart attachment upload. Pass a
 * list of <code>CompletedUpload</code> objects to <a>CompleteAttachmentUpload</a>
 * to finalize the upload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CompletedUpload">AWS
 * API Reference</a></p>
 */
class CompletedUpload {
 public:
  AWS_SUPPORT_API CompletedUpload() = default;
  AWS_SUPPORT_API CompletedUpload(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API CompletedUpload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the uploaded part. This is the same <code>partIndex</code> value
   * returned for the corresponding entry in the <code>uploadUrls</code> field of the
   * <code>GetAttachmentUploadLinks</code> response.</p>
   */
  inline int GetPartIndex() const { return m_partIndex; }
  inline bool PartIndexHasBeenSet() const { return m_partIndexHasBeenSet; }
  inline void SetPartIndex(int value) {
    m_partIndexHasBeenSet = true;
    m_partIndex = value;
  }
  inline CompletedUpload& WithPartIndex(int value) {
    SetPartIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ETag returned in the response headers when the part was uploaded to
   * Amazon S3. The <code>ETag</code> value identifies the part contents.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  CompletedUpload& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}
 private:
  int m_partIndex{0};

  Aws::String m_eTag;
  bool m_partIndexHasBeenSet = false;
  bool m_eTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
