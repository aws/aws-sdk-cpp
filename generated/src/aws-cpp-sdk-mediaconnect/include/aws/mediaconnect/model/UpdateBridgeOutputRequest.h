/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateBridgeNetworkOutputRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class UpdateBridgeOutputRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeOutputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridgeOutput"; }

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
    UpdateBridgeOutputRequest& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network of the bridge output. </p>
     */
    inline const UpdateBridgeNetworkOutputRequest& GetNetworkOutput() const { return m_networkOutput; }
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }
    template<typename NetworkOutputT = UpdateBridgeNetworkOutputRequest>
    void SetNetworkOutput(NetworkOutputT&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::forward<NetworkOutputT>(value); }
    template<typename NetworkOutputT = UpdateBridgeNetworkOutputRequest>
    UpdateBridgeOutputRequest& WithNetworkOutput(NetworkOutputT&& value) { SetNetworkOutput(std::forward<NetworkOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tname of the output that you want to update. </p>
     */
    inline const Aws::String& GetOutputName() const { return m_outputName; }
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
    template<typename OutputNameT = Aws::String>
    void SetOutputName(OutputNameT&& value) { m_outputNameHasBeenSet = true; m_outputName = std::forward<OutputNameT>(value); }
    template<typename OutputNameT = Aws::String>
    UpdateBridgeOutputRequest& WithOutputName(OutputNameT&& value) { SetOutputName(std::forward<OutputNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    UpdateBridgeNetworkOutputRequest m_networkOutput;
    bool m_networkOutputHasBeenSet = false;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
