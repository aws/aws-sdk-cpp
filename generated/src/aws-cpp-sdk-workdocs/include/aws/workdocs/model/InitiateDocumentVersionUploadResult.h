/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/workdocs/model/UploadMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class InitiateDocumentVersionUploadResult
  {
  public:
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult() = default;
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document metadata.</p>
     */
    inline const DocumentMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = DocumentMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = DocumentMetadata>
    InitiateDocumentVersionUploadResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload metadata.</p>
     */
    inline const UploadMetadata& GetUploadMetadata() const { return m_uploadMetadata; }
    template<typename UploadMetadataT = UploadMetadata>
    void SetUploadMetadata(UploadMetadataT&& value) { m_uploadMetadataHasBeenSet = true; m_uploadMetadata = std::forward<UploadMetadataT>(value); }
    template<typename UploadMetadataT = UploadMetadata>
    InitiateDocumentVersionUploadResult& WithUploadMetadata(UploadMetadataT&& value) { SetUploadMetadata(std::forward<UploadMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InitiateDocumentVersionUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    UploadMetadata m_uploadMetadata;
    bool m_uploadMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
