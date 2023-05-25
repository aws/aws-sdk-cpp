/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayNetwork.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * Creates a new gateway. The request must include at least one network (up to
   * 4).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateGatewayRequest">AWS
   * API Reference</a></p>
   */
  class CreateGatewayRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API CreateGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetEgressCidrBlocks() const{ return m_egressCidrBlocks; }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline bool EgressCidrBlocksHasBeenSet() const { return m_egressCidrBlocksHasBeenSet; }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline void SetEgressCidrBlocks(const Aws::Vector<Aws::String>& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = value; }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline void SetEgressCidrBlocks(Aws::Vector<Aws::String>&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = std::move(value); }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline CreateGatewayRequest& WithEgressCidrBlocks(const Aws::Vector<Aws::String>& value) { SetEgressCidrBlocks(value); return *this;}

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline CreateGatewayRequest& WithEgressCidrBlocks(Aws::Vector<Aws::String>&& value) { SetEgressCidrBlocks(std::move(value)); return *this;}

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline CreateGatewayRequest& AddEgressCidrBlocks(const Aws::String& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(value); return *this; }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline CreateGatewayRequest& AddEgressCidrBlocks(Aws::String&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.
     */
    inline CreateGatewayRequest& AddEgressCidrBlocks(const char* value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(value); return *this; }


    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline CreateGatewayRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline CreateGatewayRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline CreateGatewayRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The list of networks that you want to add.
     */
    inline const Aws::Vector<GatewayNetwork>& GetNetworks() const{ return m_networks; }

    /**
     * The list of networks that you want to add.
     */
    inline bool NetworksHasBeenSet() const { return m_networksHasBeenSet; }

    /**
     * The list of networks that you want to add.
     */
    inline void SetNetworks(const Aws::Vector<GatewayNetwork>& value) { m_networksHasBeenSet = true; m_networks = value; }

    /**
     * The list of networks that you want to add.
     */
    inline void SetNetworks(Aws::Vector<GatewayNetwork>&& value) { m_networksHasBeenSet = true; m_networks = std::move(value); }

    /**
     * The list of networks that you want to add.
     */
    inline CreateGatewayRequest& WithNetworks(const Aws::Vector<GatewayNetwork>& value) { SetNetworks(value); return *this;}

    /**
     * The list of networks that you want to add.
     */
    inline CreateGatewayRequest& WithNetworks(Aws::Vector<GatewayNetwork>&& value) { SetNetworks(std::move(value)); return *this;}

    /**
     * The list of networks that you want to add.
     */
    inline CreateGatewayRequest& AddNetworks(const GatewayNetwork& value) { m_networksHasBeenSet = true; m_networks.push_back(value); return *this; }

    /**
     * The list of networks that you want to add.
     */
    inline CreateGatewayRequest& AddNetworks(GatewayNetwork&& value) { m_networksHasBeenSet = true; m_networks.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_egressCidrBlocks;
    bool m_egressCidrBlocksHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GatewayNetwork> m_networks;
    bool m_networksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
