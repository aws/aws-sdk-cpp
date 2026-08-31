/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/UploadUrl.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Support {
namespace Model {
class GetAttachmentUploadLinksResult {
 public:
  AWS_SUPPORT_API GetAttachmentUploadLinksResult() = default;
  AWS_SUPPORT_API GetAttachmentUploadLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORT_API GetAttachmentUploadLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the multipart upload. Use this value in subsequent
   * calls to <code>GetAttachmentUploadLinks</code>,
   * <a>DescribeAttachmentUploadStatus</a>, and <a>CompleteAttachmentUpload</a>, and
   * to attach the upload to a case through the <code>uploadIds</code> parameter on
   * <a>CreateCase</a> or <a>AddCommunicationToCase</a>.</p>
   */
  inline const Aws::String& GetUploadId() const { return m_uploadId; }
  template <typename UploadIdT = Aws::String>
  void SetUploadId(UploadIdT&& value) {
    m_uploadIdHasBeenSet = true;
    m_uploadId = std::forward<UploadIdT>(value);
  }
  template <typename UploadIdT = Aws::String>
  GetAttachmentUploadLinksResult& WithUploadId(UploadIdT&& value) {
    SetUploadId(std::forward<UploadIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in bytes, of each part. Split the file into parts of this size
   * before you upload them to the presigned URLs. For an upload with <code>n</code>
   * total parts, parts 1 through <code>n</code> - 1 are exactly this size; the last
   * part may be smaller. Maximum: 104,857,600 bytes (approximately 100 MB).</p>
   */
  inline long long GetPartSizeBytes() const { return m_partSizeBytes; }
  inline void SetPartSizeBytes(long long value) {
    m_partSizeBytesHasBeenSet = true;
    m_partSizeBytes = value;
  }
  inline GetAttachmentUploadLinksResult& WithPartSizeBytes(long long value) {
    SetPartSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of parts that the file is split into. Upload one part to
   * each presigned URL.</p>
   */
  inline int GetTotalParts() const { return m_totalParts; }
  inline void SetTotalParts(int value) {
    m_totalPartsHasBeenSet = true;
    m_totalParts = value;
  }
  inline GetAttachmentUploadLinksResult& WithTotalParts(int value) {
    SetTotalParts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next part index to request presigned URLs for. If all upload URLs for the
   * file have been returned, this field is <code>null</code>. Use this value as the
   * <code>startIndex</code> in <code>uploadRange</code> on a subsequent call to
   * <code>GetAttachmentUploadLinks</code> to retrieve the next batch of upload
   * URLs.</p>
   */
  inline int GetNextIndex() const { return m_nextIndex; }
  inline void SetNextIndex(int value) {
    m_nextIndexHasBeenSet = true;
    m_nextIndex = value;
  }
  inline GetAttachmentUploadLinksResult& WithNextIndex(int value) {
    SetNextIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of presigned upload URLs for the requested range of parts. The list
   * contains at most 10 URLs per call. Upload each part to its corresponding URL by
   * using HTTP <code>PUT</code> before the URL expires.</p>
   */
  inline const Aws::Vector<UploadUrl>& GetUploadUrls() const { return m_uploadUrls; }
  template <typename UploadUrlsT = Aws::Vector<UploadUrl>>
  void SetUploadUrls(UploadUrlsT&& value) {
    m_uploadUrlsHasBeenSet = true;
    m_uploadUrls = std::forward<UploadUrlsT>(value);
  }
  template <typename UploadUrlsT = Aws::Vector<UploadUrl>>
  GetAttachmentUploadLinksResult& WithUploadUrls(UploadUrlsT&& value) {
    SetUploadUrls(std::forward<UploadUrlsT>(value));
    return *this;
  }
  template <typename UploadUrlsT = UploadUrl>
  GetAttachmentUploadLinksResult& AddUploadUrls(UploadUrlsT&& value) {
    m_uploadUrlsHasBeenSet = true;
    m_uploadUrls.emplace_back(std::forward<UploadUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAttachmentUploadLinksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_uploadId;

  long long m_partSizeBytes{0};

  int m_totalParts{0};

  int m_nextIndex{0};

  Aws::Vector<UploadUrl> m_uploadUrls;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_uploadIdHasBeenSet = false;
  bool m_partSizeBytesHasBeenSet = false;
  bool m_totalPartsHasBeenSet = false;
  bool m_nextIndexHasBeenSet = false;
  bool m_uploadUrlsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
