/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/AddMediaStreamRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class AddFlowMediaStreamsRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddFlowMediaStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowMediaStreams"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    AddFlowMediaStreamsRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The media streams that you want to add to the flow.</p>
     */
    inline const Aws::Vector<AddMediaStreamRequest>& GetMediaStreams() const { return m_mediaStreams; }
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }
    template<typename MediaStreamsT = Aws::Vector<AddMediaStreamRequest>>
    void SetMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::forward<MediaStreamsT>(value); }
    template<typename MediaStreamsT = Aws::Vector<AddMediaStreamRequest>>
    AddFlowMediaStreamsRequest& WithMediaStreams(MediaStreamsT&& value) { SetMediaStreams(std::forward<MediaStreamsT>(value)); return *this;}
    template<typename MediaStreamsT = AddMediaStreamRequest>
    AddFlowMediaStreamsRequest& AddMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.emplace_back(std::forward<MediaStreamsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<AddMediaStreamRequest> m_mediaStreams;
    bool m_mediaStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
