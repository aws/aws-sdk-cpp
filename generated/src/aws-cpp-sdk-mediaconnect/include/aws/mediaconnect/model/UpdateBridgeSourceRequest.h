/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateBridgeFlowSourceRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeNetworkSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class UpdateBridgeSourceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridgeSource"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the bridge that you want to update.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    UpdateBridgeSourceRequest& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the flow that you want to update.</p>
     */
    inline const UpdateBridgeFlowSourceRequest& GetFlowSource() const { return m_flowSource; }
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }
    template<typename FlowSourceT = UpdateBridgeFlowSourceRequest>
    void SetFlowSource(FlowSourceT&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::forward<FlowSourceT>(value); }
    template<typename FlowSourceT = UpdateBridgeFlowSourceRequest>
    UpdateBridgeSourceRequest& WithFlowSource(FlowSourceT&& value) { SetFlowSource(std::forward<FlowSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network for the bridge source. </p>
     */
    inline const UpdateBridgeNetworkSourceRequest& GetNetworkSource() const { return m_networkSource; }
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }
    template<typename NetworkSourceT = UpdateBridgeNetworkSourceRequest>
    void SetNetworkSource(NetworkSourceT&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::forward<NetworkSourceT>(value); }
    template<typename NetworkSourceT = UpdateBridgeNetworkSourceRequest>
    UpdateBridgeSourceRequest& WithNetworkSource(NetworkSourceT&& value) { SetNetworkSource(std::forward<NetworkSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the source that you want to update. </p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    UpdateBridgeSourceRequest& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    UpdateBridgeFlowSourceRequest m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    UpdateBridgeNetworkSourceRequest m_networkSource;
    bool m_networkSourceHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
