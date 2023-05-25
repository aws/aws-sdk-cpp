/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Session.h>
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
  class DescribeSessionsResult
  {
  public:
    AWS_SSM_API DescribeSessionsResult();
    AWS_SSM_API DescribeSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline const Aws::Vector<Session>& GetSessions() const{ return m_sessions; }

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline void SetSessions(const Aws::Vector<Session>& value) { m_sessions = value; }

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline void SetSessions(Aws::Vector<Session>&& value) { m_sessions = std::move(value); }

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline DescribeSessionsResult& WithSessions(const Aws::Vector<Session>& value) { SetSessions(value); return *this;}

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline DescribeSessionsResult& WithSessions(Aws::Vector<Session>&& value) { SetSessions(std::move(value)); return *this;}

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline DescribeSessionsResult& AddSessions(const Session& value) { m_sessions.push_back(value); return *this; }

    /**
     * <p>A list of sessions meeting the request parameters.</p>
     */
    inline DescribeSessionsResult& AddSessions(Session&& value) { m_sessions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Session> m_sessions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
