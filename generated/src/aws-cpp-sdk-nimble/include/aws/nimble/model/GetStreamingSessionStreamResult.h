/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingSessionStream.h>
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
    inline GetStreamingSessionStreamResult& WithStream(const StreamingSessionStream& value) { SetStream(value); return *this;}

    /**
     * <p>The stream.</p>
     */
    inline GetStreamingSessionStreamResult& WithStream(StreamingSessionStream&& value) { SetStream(std::move(value)); return *this;}

  private:

    StreamingSessionStream m_stream;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
