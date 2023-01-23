/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineListItem.h>
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
  class ListStateMachinesResult
  {
  public:
    AWS_SFN_API ListStateMachinesResult();
    AWS_SFN_API ListStateMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ListStateMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<StateMachineListItem>& GetStateMachines() const{ return m_stateMachines; }

    
    inline void SetStateMachines(const Aws::Vector<StateMachineListItem>& value) { m_stateMachines = value; }

    
    inline void SetStateMachines(Aws::Vector<StateMachineListItem>&& value) { m_stateMachines = std::move(value); }

    
    inline ListStateMachinesResult& WithStateMachines(const Aws::Vector<StateMachineListItem>& value) { SetStateMachines(value); return *this;}

    
    inline ListStateMachinesResult& WithStateMachines(Aws::Vector<StateMachineListItem>&& value) { SetStateMachines(std::move(value)); return *this;}

    
    inline ListStateMachinesResult& AddStateMachines(const StateMachineListItem& value) { m_stateMachines.push_back(value); return *this; }

    
    inline ListStateMachinesResult& AddStateMachines(StateMachineListItem&& value) { m_stateMachines.push_back(std::move(value)); return *this; }


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
    inline ListStateMachinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListStateMachinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListStateMachinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StateMachineListItem> m_stateMachines;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
