/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineAliasListItem.h>
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
namespace SFN
{
namespace Model
{
  class ListStateMachineAliasesResult
  {
  public:
    AWS_SFN_API ListStateMachineAliasesResult();
    AWS_SFN_API ListStateMachineAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ListStateMachineAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Aliases for the state machine.</p>
     */
    inline const Aws::Vector<StateMachineAliasListItem>& GetStateMachineAliases() const{ return m_stateMachineAliases; }

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline void SetStateMachineAliases(const Aws::Vector<StateMachineAliasListItem>& value) { m_stateMachineAliases = value; }

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline void SetStateMachineAliases(Aws::Vector<StateMachineAliasListItem>&& value) { m_stateMachineAliases = std::move(value); }

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline ListStateMachineAliasesResult& WithStateMachineAliases(const Aws::Vector<StateMachineAliasListItem>& value) { SetStateMachineAliases(value); return *this;}

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline ListStateMachineAliasesResult& WithStateMachineAliases(Aws::Vector<StateMachineAliasListItem>&& value) { SetStateMachineAliases(std::move(value)); return *this;}

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline ListStateMachineAliasesResult& AddStateMachineAliases(const StateMachineAliasListItem& value) { m_stateMachineAliases.push_back(value); return *this; }

    /**
     * <p>Aliases for the state machine.</p>
     */
    inline ListStateMachineAliasesResult& AddStateMachineAliases(StateMachineAliasListItem&& value) { m_stateMachineAliases.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListStateMachineAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListStateMachineAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListStateMachineAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStateMachineAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStateMachineAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStateMachineAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StateMachineAliasListItem> m_stateMachineAliases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
