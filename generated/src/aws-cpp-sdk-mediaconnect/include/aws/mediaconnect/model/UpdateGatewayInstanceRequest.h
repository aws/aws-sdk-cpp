/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/model/BridgePlacement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to update gateway instance state.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateGatewayInstanceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateGatewayInstanceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateGatewayInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayInstance"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline BridgePlacement GetBridgePlacement() const { return m_bridgePlacement; }
    inline bool BridgePlacementHasBeenSet() const { return m_bridgePlacementHasBeenSet; }
    inline void SetBridgePlacement(BridgePlacement value) { m_bridgePlacementHasBeenSet = true; m_bridgePlacement = value; }
    inline UpdateGatewayInstanceRequest& WithBridgePlacement(BridgePlacement value) { SetBridgePlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the instance that you want to update.
     */
    inline const Aws::String& GetGatewayInstanceArn() const { return m_gatewayInstanceArn; }
    inline bool GatewayInstanceArnHasBeenSet() const { return m_gatewayInstanceArnHasBeenSet; }
    template<typename GatewayInstanceArnT = Aws::String>
    void SetGatewayInstanceArn(GatewayInstanceArnT&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::forward<GatewayInstanceArnT>(value); }
    template<typename GatewayInstanceArnT = Aws::String>
    UpdateGatewayInstanceRequest& WithGatewayInstanceArn(GatewayInstanceArnT&& value) { SetGatewayInstanceArn(std::forward<GatewayInstanceArnT>(value)); return *this;}
    ///@}
  private:

    BridgePlacement m_bridgePlacement{BridgePlacement::NOT_SET};
    bool m_bridgePlacementHasBeenSet = false;

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
