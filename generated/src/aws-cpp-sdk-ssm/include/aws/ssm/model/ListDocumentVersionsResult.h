/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentVersionInfo.h>
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
namespace SSM
{
namespace Model
{
  class ListDocumentVersionsResult
  {
  public:
    AWS_SSM_API ListDocumentVersionsResult() = default;
    AWS_SSM_API ListDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionInfo>& GetDocumentVersions() const { return m_documentVersions; }
    template<typename DocumentVersionsT = Aws::Vector<DocumentVersionInfo>>
    void SetDocumentVersions(DocumentVersionsT&& value) { m_documentVersionsHasBeenSet = true; m_documentVersions = std::forward<DocumentVersionsT>(value); }
    template<typename DocumentVersionsT = Aws::Vector<DocumentVersionInfo>>
    ListDocumentVersionsResult& WithDocumentVersions(DocumentVersionsT&& value) { SetDocumentVersions(std::forward<DocumentVersionsT>(value)); return *this;}
    template<typename DocumentVersionsT = DocumentVersionInfo>
    ListDocumentVersionsResult& AddDocumentVersions(DocumentVersionsT&& value) { m_documentVersionsHasBeenSet = true; m_documentVersions.emplace_back(std::forward<DocumentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDocumentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentVersionInfo> m_documentVersions;
    bool m_documentVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
