/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ScopeDetails.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListApplicationAccessScopesResult
  {
  public:
    AWS_SSOADMIN_API ListApplicationAccessScopesResult() = default;
    AWS_SSOADMIN_API ListApplicationAccessScopesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAccessScopesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline const Aws::Vector<ScopeDetails>& GetScopes() const { return m_scopes; }
    template<typename ScopesT = Aws::Vector<ScopeDetails>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<ScopeDetails>>
    ListApplicationAccessScopesResult& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = ScopeDetails>
    ListApplicationAccessScopesResult& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationAccessScopesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationAccessScopesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScopeDetails> m_scopes;
    bool m_scopesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
