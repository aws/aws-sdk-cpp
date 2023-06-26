﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Address.h>
#include <aws/privatenetworks/model/UpdateType.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class StartNetworkResourceUpdateRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNetworkResourceUpdate"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const{ return m_networkResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const Aws::String& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(Aws::String&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const char* value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithNetworkResourceArn(const Aws::String& value) { SetNetworkResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithNetworkResourceArn(Aws::String&& value) { SetNetworkResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithNetworkResourceArn(const char* value) { SetNetworkResourceArn(value); return *this;}


    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline const Aws::String& GetReturnReason() const{ return m_returnReason; }

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline bool ReturnReasonHasBeenSet() const { return m_returnReasonHasBeenSet; }

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline void SetReturnReason(const Aws::String& value) { m_returnReasonHasBeenSet = true; m_returnReason = value; }

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline void SetReturnReason(Aws::String&& value) { m_returnReasonHasBeenSet = true; m_returnReason = std::move(value); }

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline void SetReturnReason(const char* value) { m_returnReasonHasBeenSet = true; m_returnReason.assign(value); }

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithReturnReason(const Aws::String& value) { SetReturnReason(value); return *this;}

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithReturnReason(Aws::String&& value) { SetReturnReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithReturnReason(const char* value) { SetReturnReason(value); return *this;}


    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}

    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline StartNetworkResourceUpdateRequest& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline const UpdateType& GetUpdateType() const{ return m_updateType; }

    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }

    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline void SetUpdateType(const UpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }

    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline void SetUpdateType(UpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }

    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline StartNetworkResourceUpdateRequest& WithUpdateType(const UpdateType& value) { SetUpdateType(value); return *this;}

    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to replace a radio unit that
     * you no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> </ul>
     */
    inline StartNetworkResourceUpdateRequest& WithUpdateType(UpdateType&& value) { SetUpdateType(std::move(value)); return *this;}

  private:

    Aws::String m_networkResourceArn;
    bool m_networkResourceArnHasBeenSet = false;

    Aws::String m_returnReason;
    bool m_returnReasonHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    UpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
