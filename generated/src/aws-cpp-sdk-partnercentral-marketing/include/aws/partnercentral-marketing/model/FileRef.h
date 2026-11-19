/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>A reference to a partner-supplied file in the Partner Central file staging
 * bucket.</p> <p>The URI must be `s3://{stagingBucket}/{callerAccountId}/…`, where
 * the account id segment equals the caller's session-derived account — never an
 * account named in the request body. A mismatch is refused
 * `FILE_REFERENCE_NOT_OWNED`; any other bucket, `FILE_REFERENCE_INVALID`.
 * <p>`VersionId` is required: the staging bucket is versioned, and the service
 * takes exactly the version the upload returned, so a later upload to the same key
 * cannot change what was referenced. The service copies that version into storage
 * it controls and pins the copy for scanning and processing.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/FileRef">AWS
 * API Reference</a></p>
 */
class FileRef {
 public:
  AWS_PARTNERCENTRALMARKETING_API FileRef() = default;
  AWS_PARTNERCENTRALMARKETING_API FileRef(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API FileRef& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The <code>s3://</code> location of the file.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  FileRef& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the object to take: the <code>VersionId</code> the staging
   * upload returned.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  FileRef& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;

  Aws::String m_versionId;
  bool m_s3UriHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
