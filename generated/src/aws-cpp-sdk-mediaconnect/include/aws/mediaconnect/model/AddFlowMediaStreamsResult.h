/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/MediaStream.h>
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
namespace MediaConnect
{
namespace Model
{
  class AddFlowMediaStreamsResult
  {
  public:
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult();
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the flow that you added media streams to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline AddFlowMediaStreamsResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline AddFlowMediaStreamsResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline AddFlowMediaStreamsResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The media streams that you added to the flow.
     */
    inline const Aws::Vector<MediaStream>& GetMediaStreams() const{ return m_mediaStreams; }
    inline void SetMediaStreams(const Aws::Vector<MediaStream>& value) { m_mediaStreams = value; }
    inline void SetMediaStreams(Aws::Vector<MediaStream>&& value) { m_mediaStreams = std::move(value); }
    inline AddFlowMediaStreamsResult& WithMediaStreams(const Aws::Vector<MediaStream>& value) { SetMediaStreams(value); return *this;}
    inline AddFlowMediaStreamsResult& WithMediaStreams(Aws::Vector<MediaStream>&& value) { SetMediaStreams(std::move(value)); return *this;}
    inline AddFlowMediaStreamsResult& AddMediaStreams(const MediaStream& value) { m_mediaStreams.push_back(value); return *this; }
    inline AddFlowMediaStreamsResult& AddMediaStreams(MediaStream&& value) { m_mediaStreams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddFlowMediaStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddFlowMediaStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddFlowMediaStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    Aws::Vector<MediaStream> m_mediaStreams;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
