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
  class GetCaseAttachmentDownloadUrlResult
  {
  public:
    AWS_SECURITYIR_API GetCaseAttachmentDownloadUrlResult();
    AWS_SECURITYIR_API GetCaseAttachmentDownloadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetCaseAttachmentDownloadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element providing the Amazon S3 presigned URL to download an
     * attachment.</p>
     */
    inline const Aws::String& GetAttachmentPresignedUrl() const{ return m_attachmentPresignedUrl; }
    inline void SetAttachmentPresignedUrl(const Aws::String& value) { m_attachmentPresignedUrl = value; }
    inline void SetAttachmentPresignedUrl(Aws::String&& value) { m_attachmentPresignedUrl = std::move(value); }
    inline void SetAttachmentPresignedUrl(const char* value) { m_attachmentPresignedUrl.assign(value); }
    inline GetCaseAttachmentDownloadUrlResult& WithAttachmentPresignedUrl(const Aws::String& value) { SetAttachmentPresignedUrl(value); return *this;}
    inline GetCaseAttachmentDownloadUrlResult& WithAttachmentPresignedUrl(Aws::String&& value) { SetAttachmentPresignedUrl(std::move(value)); return *this;}
    inline GetCaseAttachmentDownloadUrlResult& WithAttachmentPresignedUrl(const char* value) { SetAttachmentPresignedUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCaseAttachmentDownloadUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCaseAttachmentDownloadUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCaseAttachmentDownloadUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentPresignedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
