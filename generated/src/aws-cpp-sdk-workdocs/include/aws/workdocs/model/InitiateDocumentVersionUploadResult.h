﻿/**
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
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult();
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API InitiateDocumentVersionUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document metadata.</p>
     */
    inline const DocumentMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const DocumentMetadata& value) { m_metadata = value; }
    inline void SetMetadata(DocumentMetadata&& value) { m_metadata = std::move(value); }
    inline InitiateDocumentVersionUploadResult& WithMetadata(const DocumentMetadata& value) { SetMetadata(value); return *this;}
    inline InitiateDocumentVersionUploadResult& WithMetadata(DocumentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload metadata.</p>
     */
    inline const UploadMetadata& GetUploadMetadata() const{ return m_uploadMetadata; }
    inline void SetUploadMetadata(const UploadMetadata& value) { m_uploadMetadata = value; }
    inline void SetUploadMetadata(UploadMetadata&& value) { m_uploadMetadata = std::move(value); }
    inline InitiateDocumentVersionUploadResult& WithUploadMetadata(const UploadMetadata& value) { SetUploadMetadata(value); return *this;}
    inline InitiateDocumentVersionUploadResult& WithUploadMetadata(UploadMetadata&& value) { SetUploadMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateDocumentVersionUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateDocumentVersionUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateDocumentVersionUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_metadata;

    UploadMetadata m_uploadMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
