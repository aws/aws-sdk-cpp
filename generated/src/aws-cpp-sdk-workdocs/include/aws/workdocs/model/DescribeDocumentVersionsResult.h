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
    AWS_WORKDOCS_API DescribeDocumentVersionsResult() = default;
    AWS_WORKDOCS_API DescribeDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionMetadata>& GetDocumentVersions() const { return m_documentVersions; }
    template<typename DocumentVersionsT = Aws::Vector<DocumentVersionMetadata>>
    void SetDocumentVersions(DocumentVersionsT&& value) { m_documentVersionsHasBeenSet = true; m_documentVersions = std::forward<DocumentVersionsT>(value); }
    template<typename DocumentVersionsT = Aws::Vector<DocumentVersionMetadata>>
    DescribeDocumentVersionsResult& WithDocumentVersions(DocumentVersionsT&& value) { SetDocumentVersions(std::forward<DocumentVersionsT>(value)); return *this;}
    template<typename DocumentVersionsT = DocumentVersionMetadata>
    DescribeDocumentVersionsResult& AddDocumentVersions(DocumentVersionsT&& value) { m_documentVersionsHasBeenSet = true; m_documentVersions.emplace_back(std::forward<DocumentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDocumentVersionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDocumentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentVersionMetadata> m_documentVersions;
    bool m_documentVersionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
