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
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DeregisterGatewayInstanceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterGatewayInstance"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> Force the deregistration of an instance. Force will deregister an instance,
     * even if there are bridges running on it.</p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline DeregisterGatewayInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the gateway that contains the instance
     * that you want to deregister.</p>
     */
    inline const Aws::String& GetGatewayInstanceArn() const { return m_gatewayInstanceArn; }
    inline bool GatewayInstanceArnHasBeenSet() const { return m_gatewayInstanceArnHasBeenSet; }
    template<typename GatewayInstanceArnT = Aws::String>
    void SetGatewayInstanceArn(GatewayInstanceArnT&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::forward<GatewayInstanceArnT>(value); }
    template<typename GatewayInstanceArnT = Aws::String>
    DeregisterGatewayInstanceRequest& WithGatewayInstanceArn(GatewayInstanceArnT&& value) { SetGatewayInstanceArn(std::forward<GatewayInstanceArnT>(value)); return *this;}
    ///@}
  private:

    bool m_force{false};
    bool m_forceHasBeenSet = false;

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
