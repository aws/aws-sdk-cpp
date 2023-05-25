/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayState.h>
#include <aws/mediaconnect/model/MessageDetail.h>
#include <aws/mediaconnect/model/GatewayNetwork.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for a gateway, including its networks.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Gateway">AWS
   * API Reference</a></p>
   */
  class Gateway
  {
  public:
    AWS_MEDIACONNECT_API Gateway();
    AWS_MEDIACONNECT_API Gateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetEgressCidrBlocks() const{ return m_egressCidrBlocks; }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool EgressCidrBlocksHasBeenSet() const { return m_egressCidrBlocksHasBeenSet; }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetEgressCidrBlocks(const Aws::Vector<Aws::String>& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = value; }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetEgressCidrBlocks(Aws::Vector<Aws::String>&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = std::move(value); }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Gateway& WithEgressCidrBlocks(const Aws::Vector<Aws::String>& value) { SetEgressCidrBlocks(value); return *this;}

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Gateway& WithEgressCidrBlocks(Aws::Vector<Aws::String>&& value) { SetEgressCidrBlocks(std::move(value)); return *this;}

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Gateway& AddEgressCidrBlocks(const Aws::String& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(value); return *this; }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Gateway& AddEgressCidrBlocks(Aws::String&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * The range of IP addresses that contribute content or initiate output requests
     * for flows communicating with this gateway. These IP addresses should be in the
     * form of a Classless Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Gateway& AddEgressCidrBlocks(const char* value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.push_back(value); return *this; }


    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline Gateway& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline Gateway& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline Gateway& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    
    inline const Aws::Vector<MessageDetail>& GetGatewayMessages() const{ return m_gatewayMessages; }

    
    inline bool GatewayMessagesHasBeenSet() const { return m_gatewayMessagesHasBeenSet; }

    
    inline void SetGatewayMessages(const Aws::Vector<MessageDetail>& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages = value; }

    
    inline void SetGatewayMessages(Aws::Vector<MessageDetail>&& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages = std::move(value); }

    
    inline Gateway& WithGatewayMessages(const Aws::Vector<MessageDetail>& value) { SetGatewayMessages(value); return *this;}

    
    inline Gateway& WithGatewayMessages(Aws::Vector<MessageDetail>&& value) { SetGatewayMessages(std::move(value)); return *this;}

    
    inline Gateway& AddGatewayMessages(const MessageDetail& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages.push_back(value); return *this; }

    
    inline Gateway& AddGatewayMessages(MessageDetail&& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages.push_back(std::move(value)); return *this; }


    /**
     * The current status of the gateway.
     */
    inline const GatewayState& GetGatewayState() const{ return m_gatewayState; }

    /**
     * The current status of the gateway.
     */
    inline bool GatewayStateHasBeenSet() const { return m_gatewayStateHasBeenSet; }

    /**
     * The current status of the gateway.
     */
    inline void SetGatewayState(const GatewayState& value) { m_gatewayStateHasBeenSet = true; m_gatewayState = value; }

    /**
     * The current status of the gateway.
     */
    inline void SetGatewayState(GatewayState&& value) { m_gatewayStateHasBeenSet = true; m_gatewayState = std::move(value); }

    /**
     * The current status of the gateway.
     */
    inline Gateway& WithGatewayState(const GatewayState& value) { SetGatewayState(value); return *this;}

    /**
     * The current status of the gateway.
     */
    inline Gateway& WithGatewayState(GatewayState&& value) { SetGatewayState(std::move(value)); return *this;}


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
    inline Gateway& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline Gateway& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the gateway. This name can not be modified after the gateway is
     * created.
     */
    inline Gateway& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The list of networks in the gateway.
     */
    inline const Aws::Vector<GatewayNetwork>& GetNetworks() const{ return m_networks; }

    /**
     * The list of networks in the gateway.
     */
    inline bool NetworksHasBeenSet() const { return m_networksHasBeenSet; }

    /**
     * The list of networks in the gateway.
     */
    inline void SetNetworks(const Aws::Vector<GatewayNetwork>& value) { m_networksHasBeenSet = true; m_networks = value; }

    /**
     * The list of networks in the gateway.
     */
    inline void SetNetworks(Aws::Vector<GatewayNetwork>&& value) { m_networksHasBeenSet = true; m_networks = std::move(value); }

    /**
     * The list of networks in the gateway.
     */
    inline Gateway& WithNetworks(const Aws::Vector<GatewayNetwork>& value) { SetNetworks(value); return *this;}

    /**
     * The list of networks in the gateway.
     */
    inline Gateway& WithNetworks(Aws::Vector<GatewayNetwork>&& value) { SetNetworks(std::move(value)); return *this;}

    /**
     * The list of networks in the gateway.
     */
    inline Gateway& AddNetworks(const GatewayNetwork& value) { m_networksHasBeenSet = true; m_networks.push_back(value); return *this; }

    /**
     * The list of networks in the gateway.
     */
    inline Gateway& AddNetworks(GatewayNetwork&& value) { m_networksHasBeenSet = true; m_networks.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_egressCidrBlocks;
    bool m_egressCidrBlocksHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::Vector<MessageDetail> m_gatewayMessages;
    bool m_gatewayMessagesHasBeenSet = false;

    GatewayState m_gatewayState;
    bool m_gatewayStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GatewayNetwork> m_networks;
    bool m_networksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
