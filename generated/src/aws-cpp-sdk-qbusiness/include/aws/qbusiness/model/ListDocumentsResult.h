/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DocumentDetails.h>
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
  class ListDocumentsResult
  {
  public:
    AWS_QBUSINESS_API ListDocumentsResult() = default;
    AWS_QBUSINESS_API ListDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of document details.</p>
     */
    inline const Aws::Vector<DocumentDetails>& GetDocumentDetailList() const { return m_documentDetailList; }
    template<typename DocumentDetailListT = Aws::Vector<DocumentDetails>>
    void SetDocumentDetailList(DocumentDetailListT&& value) { m_documentDetailListHasBeenSet = true; m_documentDetailList = std::forward<DocumentDetailListT>(value); }
    template<typename DocumentDetailListT = Aws::Vector<DocumentDetails>>
    ListDocumentsResult& WithDocumentDetailList(DocumentDetailListT&& value) { SetDocumentDetailList(std::forward<DocumentDetailListT>(value)); return *this;}
    template<typename DocumentDetailListT = DocumentDetails>
    ListDocumentsResult& AddDocumentDetailList(DocumentDetailListT&& value) { m_documentDetailListHasBeenSet = true; m_documentDetailList.emplace_back(std::forward<DocumentDetailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q Business returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of documents.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDocumentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentDetails> m_documentDetailList;
    bool m_documentDetailListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
