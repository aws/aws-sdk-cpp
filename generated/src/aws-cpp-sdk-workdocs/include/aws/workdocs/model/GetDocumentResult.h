﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetDocumentResult
  {
  public:
    AWS_WORKDOCS_API GetDocumentResult();
    AWS_WORKDOCS_API GetDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata details of the document.</p>
     */
    inline const DocumentMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const DocumentMetadata& value) { m_metadata = value; }
    inline void SetMetadata(DocumentMetadata&& value) { m_metadata = std::move(value); }
    inline GetDocumentResult& WithMetadata(const DocumentMetadata& value) { SetMetadata(value); return *this;}
    inline GetDocumentResult& WithMetadata(DocumentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom metadata on the document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const{ return m_customMetadata; }
    inline void SetCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_customMetadata = value; }
    inline void SetCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_customMetadata = std::move(value); }
    inline GetDocumentResult& WithCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomMetadata(value); return *this;}
    inline GetDocumentResult& WithCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomMetadata(std::move(value)); return *this;}
    inline GetDocumentResult& AddCustomMetadata(const Aws::String& key, const Aws::String& value) { m_customMetadata.emplace(key, value); return *this; }
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, const Aws::String& value) { m_customMetadata.emplace(std::move(key), value); return *this; }
    inline GetDocumentResult& AddCustomMetadata(const Aws::String& key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, Aws::String&& value) { m_customMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDocumentResult& AddCustomMetadata(const char* key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, const char* value) { m_customMetadata.emplace(std::move(key), value); return *this; }
    inline GetDocumentResult& AddCustomMetadata(const char* key, const char* value) { m_customMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_metadata;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
