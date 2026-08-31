/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/DownloadUrl.h>

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
class GetAttachmentDownloadLinkResult {
 public:
  AWS_SUPPORT_API GetAttachmentDownloadLinkResult() = default;
  AWS_SUPPORT_API GetAttachmentDownloadLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORT_API GetAttachmentDownloadLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the attachment file, including the file extension.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  GetAttachmentDownloadLinkResult& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The presigned download URL and the date and time the URL expires.</p>
   */
  inline const DownloadUrl& GetDownloadUrl() const { return m_downloadUrl; }
  template <typename DownloadUrlT = DownloadUrl>
  void SetDownloadUrl(DownloadUrlT&& value) {
    m_downloadUrlHasBeenSet = true;
    m_downloadUrl = std::forward<DownloadUrlT>(value);
  }
  template <typename DownloadUrlT = DownloadUrl>
  GetAttachmentDownloadLinkResult& WithDownloadUrl(DownloadUrlT&& value) {
    SetDownloadUrl(std::forward<DownloadUrlT>(value));
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
  GetAttachmentDownloadLinkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fileName;

  DownloadUrl m_downloadUrl;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fileNameHasBeenSet = false;
  bool m_downloadUrlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
