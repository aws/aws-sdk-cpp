/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class GetDocumentContentResult
  {
  public:
    AWS_QBUSINESS_API GetDocumentContentResult() = default;
    AWS_QBUSINESS_API GetDocumentContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetDocumentContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pre-signed URL that provides temporary access to download the document
     * content directly from Amazon Q Business. The URL expires after 5 minutes for
     * security purposes. This URL is generated only after successful ACL
     * validation.</p>
     */
    inline const Aws::String& GetPresignedUrl() const { return m_presignedUrl; }
    template<typename PresignedUrlT = Aws::String>
    void SetPresignedUrl(PresignedUrlT&& value) { m_presignedUrlHasBeenSet = true; m_presignedUrl = std::forward<PresignedUrlT>(value); }
    template<typename PresignedUrlT = Aws::String>
    GetDocumentContentResult& WithPresignedUrl(PresignedUrlT&& value) { SetPresignedUrl(std::forward<PresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the document content. When outputFormat is RAW, this
     * corresponds to the original document's MIME type (e.g., application/pdf,
     * text/plain,
     * application/vnd.openxmlformats-officedocument.wordprocessingml.document). When
     * outputFormat is EXTRACTED, the MIME type is always application/json.</p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    GetDocumentContentResult& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDocumentContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_presignedUrl;
    bool m_presignedUrlHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
