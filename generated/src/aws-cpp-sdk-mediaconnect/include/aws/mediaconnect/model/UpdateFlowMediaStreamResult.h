/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateFlowMediaStreamResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult() = default;
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the flow that is associated with the media stream that you
     * updated. </p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    UpdateFlowMediaStreamResult& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media stream that you updated. </p>
     */
    inline const MediaStream& GetMediaStream() const { return m_mediaStream; }
    template<typename MediaStreamT = MediaStream>
    void SetMediaStream(MediaStreamT&& value) { m_mediaStreamHasBeenSet = true; m_mediaStream = std::forward<MediaStreamT>(value); }
    template<typename MediaStreamT = MediaStream>
    UpdateFlowMediaStreamResult& WithMediaStream(MediaStreamT&& value) { SetMediaStream(std::forward<MediaStreamT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFlowMediaStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    MediaStream m_mediaStream;
    bool m_mediaStreamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
