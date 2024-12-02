/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/ScopeSummary.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{
  class ListScopesResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API ListScopesResult();
    AWS_NETWORKFLOWMONITOR_API ListScopesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API ListScopesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scopes returned by the call.</p>
     */
    inline const Aws::Vector<ScopeSummary>& GetScopes() const{ return m_scopes; }
    inline void SetScopes(const Aws::Vector<ScopeSummary>& value) { m_scopes = value; }
    inline void SetScopes(Aws::Vector<ScopeSummary>&& value) { m_scopes = std::move(value); }
    inline ListScopesResult& WithScopes(const Aws::Vector<ScopeSummary>& value) { SetScopes(value); return *this;}
    inline ListScopesResult& WithScopes(Aws::Vector<ScopeSummary>&& value) { SetScopes(std::move(value)); return *this;}
    inline ListScopesResult& AddScopes(const ScopeSummary& value) { m_scopes.push_back(value); return *this; }
    inline ListScopesResult& AddScopes(ScopeSummary&& value) { m_scopes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListScopesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListScopesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListScopesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListScopesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListScopesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListScopesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScopeSummary> m_scopes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
