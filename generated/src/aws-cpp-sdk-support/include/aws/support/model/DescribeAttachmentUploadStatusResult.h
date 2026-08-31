/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/UploadProgress.h>
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
class DescribeAttachmentUploadStatusResult {
 public:
  AWS_SUPPORT_API DescribeAttachmentUploadStatusResult() = default;
  AWS_SUPPORT_API DescribeAttachmentUploadStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORT_API DescribeAttachmentUploadStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the multipart upload. Valid values:
   * <code>attachment-ready</code>, <code>attachment-not-ready</code>, and
   * <code>failed</code>.</p>
   */
  inline UploadStatus GetUploadStatus() const { return m_uploadStatus; }
  inline void SetUploadStatus(UploadStatus value) {
    m_uploadStatusHasBeenSet = true;
    m_uploadStatus = value;
  }
  inline DescribeAttachmentUploadStatusResult& WithUploadStatus(UploadStatus value) {
    SetUploadStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the file being uploaded, including the file extension.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  DescribeAttachmentUploadStatusResult& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the multipart upload, including the total number of parts and
   * the number of parts that have been successfully uploaded.</p>
   */
  inline const UploadProgress& GetUploadProgress() const { return m_uploadProgress; }
  template <typename UploadProgressT = UploadProgress>
  void SetUploadProgress(UploadProgressT&& value) {
    m_uploadProgressHasBeenSet = true;
    m_uploadProgress = std::forward<UploadProgressT>(value);
  }
  template <typename UploadProgressT = UploadProgress>
  DescribeAttachmentUploadStatusResult& WithUploadProgress(UploadProgressT&& value) {
    SetUploadProgress(std::forward<UploadProgressT>(value));
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
  DescribeAttachmentUploadStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  UploadStatus m_uploadStatus{UploadStatus::NOT_SET};

  Aws::String m_fileName;

  UploadProgress m_uploadProgress;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_uploadStatusHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_uploadProgressHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
