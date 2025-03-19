/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AuthenticationMethodItem.h>
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
  class ListApplicationAuthenticationMethodsResult
  {
  public:
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult() = default;
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline const Aws::Vector<AuthenticationMethodItem>& GetAuthenticationMethods() const { return m_authenticationMethods; }
    template<typename AuthenticationMethodsT = Aws::Vector<AuthenticationMethodItem>>
    void SetAuthenticationMethods(AuthenticationMethodsT&& value) { m_authenticationMethodsHasBeenSet = true; m_authenticationMethods = std::forward<AuthenticationMethodsT>(value); }
    template<typename AuthenticationMethodsT = Aws::Vector<AuthenticationMethodItem>>
    ListApplicationAuthenticationMethodsResult& WithAuthenticationMethods(AuthenticationMethodsT&& value) { SetAuthenticationMethods(std::forward<AuthenticationMethodsT>(value)); return *this;}
    template<typename AuthenticationMethodsT = AuthenticationMethodItem>
    ListApplicationAuthenticationMethodsResult& AddAuthenticationMethods(AuthenticationMethodsT&& value) { m_authenticationMethodsHasBeenSet = true; m_authenticationMethods.emplace_back(std::forward<AuthenticationMethodsT>(value)); return *this; }
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
    ListApplicationAuthenticationMethodsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationAuthenticationMethodsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthenticationMethodItem> m_authenticationMethods;
    bool m_authenticationMethodsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
