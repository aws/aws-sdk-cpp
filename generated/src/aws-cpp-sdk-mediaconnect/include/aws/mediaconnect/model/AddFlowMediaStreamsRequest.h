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
   * A request to add media streams to the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreamsRequest">AWS
   * API Reference</a></p>
   */
  class AddFlowMediaStreamsRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddFlowMediaStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowMediaStreams"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline AddFlowMediaStreamsRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline AddFlowMediaStreamsRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline AddFlowMediaStreamsRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The media streams that you want to add to the flow.
     */
    inline const Aws::Vector<AddMediaStreamRequest>& GetMediaStreams() const{ return m_mediaStreams; }

    /**
     * The media streams that you want to add to the flow.
     */
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }

    /**
     * The media streams that you want to add to the flow.
     */
    inline void SetMediaStreams(const Aws::Vector<AddMediaStreamRequest>& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = value; }

    /**
     * The media streams that you want to add to the flow.
     */
    inline void SetMediaStreams(Aws::Vector<AddMediaStreamRequest>&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::move(value); }

    /**
     * The media streams that you want to add to the flow.
     */
    inline AddFlowMediaStreamsRequest& WithMediaStreams(const Aws::Vector<AddMediaStreamRequest>& value) { SetMediaStreams(value); return *this;}

    /**
     * The media streams that you want to add to the flow.
     */
    inline AddFlowMediaStreamsRequest& WithMediaStreams(Aws::Vector<AddMediaStreamRequest>&& value) { SetMediaStreams(std::move(value)); return *this;}

    /**
     * The media streams that you want to add to the flow.
     */
    inline AddFlowMediaStreamsRequest& AddMediaStreams(const AddMediaStreamRequest& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(value); return *this; }

    /**
     * The media streams that you want to add to the flow.
     */
    inline AddFlowMediaStreamsRequest& AddMediaStreams(AddMediaStreamRequest&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<AddMediaStreamRequest> m_mediaStreams;
    bool m_mediaStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
