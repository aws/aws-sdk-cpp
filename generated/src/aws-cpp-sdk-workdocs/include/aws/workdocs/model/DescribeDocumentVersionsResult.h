/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
  class DescribeDocumentVersionsResult
  {
  public:
    AWS_WORKDOCS_API DescribeDocumentVersionsResult();
    AWS_WORKDOCS_API DescribeDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionMetadata>& GetDocumentVersions() const{ return m_documentVersions; }

    /**
     * <p>The document versions.</p>
     */
    inline void SetDocumentVersions(const Aws::Vector<DocumentVersionMetadata>& value) { m_documentVersions = value; }

    /**
     * <p>The document versions.</p>
     */
    inline void SetDocumentVersions(Aws::Vector<DocumentVersionMetadata>&& value) { m_documentVersions = std::move(value); }

    /**
     * <p>The document versions.</p>
     */
    inline DescribeDocumentVersionsResult& WithDocumentVersions(const Aws::Vector<DocumentVersionMetadata>& value) { SetDocumentVersions(value); return *this;}

    /**
     * <p>The document versions.</p>
     */
    inline DescribeDocumentVersionsResult& WithDocumentVersions(Aws::Vector<DocumentVersionMetadata>&& value) { SetDocumentVersions(std::move(value)); return *this;}

    /**
     * <p>The document versions.</p>
     */
    inline DescribeDocumentVersionsResult& AddDocumentVersions(const DocumentVersionMetadata& value) { m_documentVersions.push_back(value); return *this; }

    /**
     * <p>The document versions.</p>
     */
    inline DescribeDocumentVersionsResult& AddDocumentVersions(DocumentVersionMetadata&& value) { m_documentVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeDocumentVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeDocumentVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeDocumentVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<DocumentVersionMetadata> m_documentVersions;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
