/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingSessionStream.h>
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
  class CreateStreamingSessionStreamResult
  {
  public:
    AWS_NIMBLESTUDIO_API CreateStreamingSessionStreamResult();
    AWS_NIMBLESTUDIO_API CreateStreamingSessionStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API CreateStreamingSessionStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stream.</p>
     */
    inline const StreamingSessionStream& GetStream() const{ return m_stream; }

    /**
     * <p>The stream.</p>
     */
    inline void SetStream(const StreamingSessionStream& value) { m_stream = value; }

    /**
     * <p>The stream.</p>
     */
    inline void SetStream(StreamingSessionStream&& value) { m_stream = std::move(value); }

    /**
     * <p>The stream.</p>
     */
    inline CreateStreamingSessionStreamResult& WithStream(const StreamingSessionStream& value) { SetStream(value); return *this;}

    /**
     * <p>The stream.</p>
     */
    inline CreateStreamingSessionStreamResult& WithStream(StreamingSessionStream&& value) { SetStream(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStreamingSessionStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStreamingSessionStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStreamingSessionStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StreamingSessionStream m_stream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
