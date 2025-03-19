/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DeleteGatewayRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DeleteGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGateway"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the gateway that you want to delete.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    DeleteGatewayRequest& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
