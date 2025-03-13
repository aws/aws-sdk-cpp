/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/AuthorizedPrincipal.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListVpcEndpointAccessResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult() = default;
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline const Aws::Vector<AuthorizedPrincipal>& GetAuthorizedPrincipalList() const { return m_authorizedPrincipalList; }
    template<typename AuthorizedPrincipalListT = Aws::Vector<AuthorizedPrincipal>>
    void SetAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { m_authorizedPrincipalListHasBeenSet = true; m_authorizedPrincipalList = std::forward<AuthorizedPrincipalListT>(value); }
    template<typename AuthorizedPrincipalListT = Aws::Vector<AuthorizedPrincipal>>
    ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { SetAuthorizedPrincipalList(std::forward<AuthorizedPrincipalListT>(value)); return *this;}
    template<typename AuthorizedPrincipalListT = AuthorizedPrincipal>
    ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { m_authorizedPrincipalListHasBeenSet = true; m_authorizedPrincipalList.emplace_back(std::forward<AuthorizedPrincipalListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointAccessResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizedPrincipal> m_authorizedPrincipalList;
    bool m_authorizedPrincipalListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
