/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetTransitGatewayPeeringRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransitGatewayPeering"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the peering request.</p>
     */
    inline const Aws::String& GetPeeringId() const{ return m_peeringId; }

    /**
     * <p>The ID of the peering request.</p>
     */
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }

    /**
     * <p>The ID of the peering request.</p>
     */
    inline void SetPeeringId(const Aws::String& value) { m_peeringIdHasBeenSet = true; m_peeringId = value; }

    /**
     * <p>The ID of the peering request.</p>
     */
    inline void SetPeeringId(Aws::String&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::move(value); }

    /**
     * <p>The ID of the peering request.</p>
     */
    inline void SetPeeringId(const char* value) { m_peeringIdHasBeenSet = true; m_peeringId.assign(value); }

    /**
     * <p>The ID of the peering request.</p>
     */
    inline GetTransitGatewayPeeringRequest& WithPeeringId(const Aws::String& value) { SetPeeringId(value); return *this;}

    /**
     * <p>The ID of the peering request.</p>
     */
    inline GetTransitGatewayPeeringRequest& WithPeeringId(Aws::String&& value) { SetPeeringId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peering request.</p>
     */
    inline GetTransitGatewayPeeringRequest& WithPeeringId(const char* value) { SetPeeringId(value); return *this;}

  private:

    Aws::String m_peeringId;
    bool m_peeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
