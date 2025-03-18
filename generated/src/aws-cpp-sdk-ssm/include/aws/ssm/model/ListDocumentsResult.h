/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentIdentifier.h>
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
  class ListDocumentsResult
  {
  public:
    AWS_SSM_API ListDocumentsResult() = default;
    AWS_SSM_API ListDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the SSM documents.</p>
     */
    inline const Aws::Vector<DocumentIdentifier>& GetDocumentIdentifiers() const { return m_documentIdentifiers; }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    void SetDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers = std::forward<DocumentIdentifiersT>(value); }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    ListDocumentsResult& WithDocumentIdentifiers(DocumentIdentifiersT&& value) { SetDocumentIdentifiers(std::forward<DocumentIdentifiersT>(value)); return *this;}
    template<typename DocumentIdentifiersT = DocumentIdentifier>
    ListDocumentsResult& AddDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers.emplace_back(std::forward<DocumentIdentifiersT>(value)); return *this; }
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

    Aws::Vector<DocumentIdentifier> m_documentIdentifiers;
    bool m_documentIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
