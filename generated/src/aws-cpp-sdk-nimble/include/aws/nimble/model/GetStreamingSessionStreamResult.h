﻿/**
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
  class GetStreamingSessionStreamResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetStreamingSessionStreamResult();
    AWS_NIMBLESTUDIO_API GetStreamingSessionStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetStreamingSessionStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The stream.</p>
     */
    inline const StreamingSessionStream& GetStream() const{ return m_stream; }
    inline void SetStream(const StreamingSessionStream& value) { m_stream = value; }
    inline void SetStream(StreamingSessionStream&& value) { m_stream = std::move(value); }
    inline GetStreamingSessionStreamResult& WithStream(const StreamingSessionStream& value) { SetStream(value); return *this;}
    inline GetStreamingSessionStreamResult& WithStream(StreamingSessionStream&& value) { SetStream(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStreamingSessionStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStreamingSessionStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStreamingSessionStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StreamingSessionStream m_stream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
