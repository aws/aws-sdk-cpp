/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{
  class GetCaseAttachmentUploadUrlResult
  {
  public:
    AWS_SECURITYIR_API GetCaseAttachmentUploadUrlResult() = default;
    AWS_SECURITYIR_API GetCaseAttachmentUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetCaseAttachmentUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element providing the Amazon S3 presigned URL to upload the
     * attachment.</p>
     */
    inline const Aws::String& GetAttachmentPresignedUrl() const { return m_attachmentPresignedUrl; }
    template<typename AttachmentPresignedUrlT = Aws::String>
    void SetAttachmentPresignedUrl(AttachmentPresignedUrlT&& value) { m_attachmentPresignedUrlHasBeenSet = true; m_attachmentPresignedUrl = std::forward<AttachmentPresignedUrlT>(value); }
    template<typename AttachmentPresignedUrlT = Aws::String>
    GetCaseAttachmentUploadUrlResult& WithAttachmentPresignedUrl(AttachmentPresignedUrlT&& value) { SetAttachmentPresignedUrl(std::forward<AttachmentPresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCaseAttachmentUploadUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentPresignedUrl;
    bool m_attachmentPresignedUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
