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
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult() = default;
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddFlowMediaStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the flow that you added media streams to.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    AddFlowMediaStreamsResult& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The media streams that you added to the flow.</p>
     */
    inline const Aws::Vector<MediaStream>& GetMediaStreams() const { return m_mediaStreams; }
    template<typename MediaStreamsT = Aws::Vector<MediaStream>>
    void SetMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::forward<MediaStreamsT>(value); }
    template<typename MediaStreamsT = Aws::Vector<MediaStream>>
    AddFlowMediaStreamsResult& WithMediaStreams(MediaStreamsT&& value) { SetMediaStreams(std::forward<MediaStreamsT>(value)); return *this;}
    template<typename MediaStreamsT = MediaStream>
    AddFlowMediaStreamsResult& AddMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.emplace_back(std::forward<MediaStreamsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddFlowMediaStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<MediaStream> m_mediaStreams;
    bool m_mediaStreamsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
