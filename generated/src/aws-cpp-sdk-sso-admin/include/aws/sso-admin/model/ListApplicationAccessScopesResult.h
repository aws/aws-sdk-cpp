/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SSOADMIN_API ListApplicationAccessScopesResult();
    AWS_SSOADMIN_API ListApplicationAccessScopesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAccessScopesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListApplicationAccessScopesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAccessScopesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAccessScopesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline const Aws::Vector<ScopeDetails>& GetScopes() const{ return m_scopes; }

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline void SetScopes(const Aws::Vector<ScopeDetails>& value) { m_scopes = value; }

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline void SetScopes(Aws::Vector<ScopeDetails>&& value) { m_scopes = std::move(value); }

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline ListApplicationAccessScopesResult& WithScopes(const Aws::Vector<ScopeDetails>& value) { SetScopes(value); return *this;}

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline ListApplicationAccessScopesResult& WithScopes(Aws::Vector<ScopeDetails>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline ListApplicationAccessScopesResult& AddScopes(const ScopeDetails& value) { m_scopes.push_back(value); return *this; }

    /**
     * <p>An array list of access scopes and their authorized targets that are
     * associated with the application.</p>
     */
    inline ListApplicationAccessScopesResult& AddScopes(ScopeDetails&& value) { m_scopes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListApplicationAccessScopesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListApplicationAccessScopesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListApplicationAccessScopesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ScopeDetails> m_scopes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
