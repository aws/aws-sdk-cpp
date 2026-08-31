/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/UploadStatus.h>

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
class CompleteAttachmentUploadResult {
 public:
  AWS_SUPPORT_API CompleteAttachmentUploadResult() = default;
  AWS_SUPPORT_API CompleteAttachmentUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORT_API CompleteAttachmentUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the multipart upload after the operation finalizes the
   * attachment. Valid values: <code>attachment-ready</code>,
   * <code>attachment-not-ready</code>, and <code>failed</code>.</p>
   */
  inline UploadStatus GetUploadStatus() const { return m_uploadStatus; }
  inline void SetUploadStatus(UploadStatus value) {
    m_uploadStatusHasBeenSet = true;
    m_uploadStatus = value;
  }
  inline CompleteAttachmentUploadResult& WithUploadStatus(UploadStatus value) {
    SetUploadStatus(value);
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
  CompleteAttachmentUploadResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  UploadStatus m_uploadStatus{UploadStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_uploadStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
