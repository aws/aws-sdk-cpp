/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/SessionData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetSessionResult();
    AWS_CONNECTWISDOMSERVICE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The session.</p>
     */
    inline const SessionData& GetSession() const{ return m_session; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const SessionData& value) { m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(SessionData&& value) { m_session = std::move(value); }

    /**
     * <p>The session.</p>
     */
    inline GetSessionResult& WithSession(const SessionData& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline GetSessionResult& WithSession(SessionData&& value) { SetSession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SessionData m_session;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
