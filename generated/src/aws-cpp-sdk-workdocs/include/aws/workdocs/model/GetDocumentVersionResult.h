/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
  class GetDocumentVersionResult
  {
  public:
    AWS_WORKDOCS_API GetDocumentVersionResult();
    AWS_WORKDOCS_API GetDocumentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetDocumentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version metadata.</p>
     */
    inline const DocumentVersionMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The version metadata.</p>
     */
    inline void SetMetadata(const DocumentVersionMetadata& value) { m_metadata = value; }

    /**
     * <p>The version metadata.</p>
     */
    inline void SetMetadata(DocumentVersionMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The version metadata.</p>
     */
    inline GetDocumentVersionResult& WithMetadata(const DocumentVersionMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The version metadata.</p>
     */
    inline GetDocumentVersionResult& WithMetadata(DocumentVersionMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const{ return m_customMetadata; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline void SetCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_customMetadata = value; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline void SetCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_customMetadata = std::move(value); }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& WithCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomMetadata(value); return *this;}

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& WithCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomMetadata(std::move(value)); return *this;}

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(const Aws::String& key, const Aws::String& value) { m_customMetadata.emplace(key, value); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(Aws::String&& key, const Aws::String& value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(const Aws::String& key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(Aws::String&& key, Aws::String&& value) { m_customMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(const char* key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(Aws::String&& key, const char* value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline GetDocumentVersionResult& AddCustomMetadata(const char* key, const char* value) { m_customMetadata.emplace(key, value); return *this; }

  private:

    DocumentVersionMetadata m_metadata;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
