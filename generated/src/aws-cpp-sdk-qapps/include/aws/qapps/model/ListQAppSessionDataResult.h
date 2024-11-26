/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/QAppSessionData.h>
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
namespace QApps
{
namespace Model
{
  class ListQAppSessionDataResult
  {
  public:
    AWS_QAPPS_API ListQAppSessionDataResult();
    AWS_QAPPS_API ListQAppSessionDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListQAppSessionDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App data collection session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline ListQAppSessionDataResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ListQAppSessionDataResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ListQAppSessionDataResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App data collection session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline ListQAppSessionDataResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline ListQAppSessionDataResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline ListQAppSessionDataResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collected responses of a Q App session.</p>
     */
    inline const Aws::Vector<QAppSessionData>& GetSessionData() const{ return m_sessionData; }
    inline void SetSessionData(const Aws::Vector<QAppSessionData>& value) { m_sessionData = value; }
    inline void SetSessionData(Aws::Vector<QAppSessionData>&& value) { m_sessionData = std::move(value); }
    inline ListQAppSessionDataResult& WithSessionData(const Aws::Vector<QAppSessionData>& value) { SetSessionData(value); return *this;}
    inline ListQAppSessionDataResult& WithSessionData(Aws::Vector<QAppSessionData>&& value) { SetSessionData(std::move(value)); return *this;}
    inline ListQAppSessionDataResult& AddSessionData(const QAppSessionData& value) { m_sessionData.push_back(value); return *this; }
    inline ListQAppSessionDataResult& AddSessionData(QAppSessionData&& value) { m_sessionData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQAppSessionDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQAppSessionDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQAppSessionDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQAppSessionDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQAppSessionDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQAppSessionDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_sessionArn;

    Aws::Vector<QAppSessionData> m_sessionData;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
