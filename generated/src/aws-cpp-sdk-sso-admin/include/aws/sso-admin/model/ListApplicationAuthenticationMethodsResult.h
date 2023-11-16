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
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult();
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAuthenticationMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline const Aws::Vector<AuthenticationMethodItem>& GetAuthenticationMethods() const{ return m_authenticationMethods; }

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline void SetAuthenticationMethods(const Aws::Vector<AuthenticationMethodItem>& value) { m_authenticationMethods = value; }

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline void SetAuthenticationMethods(Aws::Vector<AuthenticationMethodItem>&& value) { m_authenticationMethods = std::move(value); }

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& WithAuthenticationMethods(const Aws::Vector<AuthenticationMethodItem>& value) { SetAuthenticationMethods(value); return *this;}

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& WithAuthenticationMethods(Aws::Vector<AuthenticationMethodItem>&& value) { SetAuthenticationMethods(std::move(value)); return *this;}

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& AddAuthenticationMethods(const AuthenticationMethodItem& value) { m_authenticationMethods.push_back(value); return *this; }

    /**
     * <p>An array list of authentication methods for the specified application.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& AddAuthenticationMethods(AuthenticationMethodItem&& value) { m_authenticationMethods.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAuthenticationMethodsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListApplicationAuthenticationMethodsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListApplicationAuthenticationMethodsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListApplicationAuthenticationMethodsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AuthenticationMethodItem> m_authenticationMethods;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
