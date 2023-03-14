/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingSession.h>
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
namespace NimbleStudio
{
namespace Model
{
  class CreateStreamingSessionResult
  {
  public:
    AWS_NIMBLESTUDIO_API CreateStreamingSessionResult();
    AWS_NIMBLESTUDIO_API CreateStreamingSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API CreateStreamingSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The session.</p>
     */
    inline const StreamingSession& GetSession() const{ return m_session; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const StreamingSession& value) { m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(StreamingSession&& value) { m_session = std::move(value); }

    /**
     * <p>The session.</p>
     */
    inline CreateStreamingSessionResult& WithSession(const StreamingSession& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline CreateStreamingSessionResult& WithSession(StreamingSession&& value) { SetSession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStreamingSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStreamingSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStreamingSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StreamingSession m_session;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
