﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Protocol.h>
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
   * Update the network source of the bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeNetworkSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeNetworkSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeNetworkSourceRequest();
    AWS_MEDIACONNECT_API UpdateBridgeNetworkSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateBridgeNetworkSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The network source multicast IP.
     */
    inline const Aws::String& GetMulticastIp() const{ return m_multicastIp; }
    inline bool MulticastIpHasBeenSet() const { return m_multicastIpHasBeenSet; }
    inline void SetMulticastIp(const Aws::String& value) { m_multicastIpHasBeenSet = true; m_multicastIp = value; }
    inline void SetMulticastIp(Aws::String&& value) { m_multicastIpHasBeenSet = true; m_multicastIp = std::move(value); }
    inline void SetMulticastIp(const char* value) { m_multicastIpHasBeenSet = true; m_multicastIp.assign(value); }
    inline UpdateBridgeNetworkSourceRequest& WithMulticastIp(const Aws::String& value) { SetMulticastIp(value); return *this;}
    inline UpdateBridgeNetworkSourceRequest& WithMulticastIp(Aws::String&& value) { SetMulticastIp(std::move(value)); return *this;}
    inline UpdateBridgeNetworkSourceRequest& WithMulticastIp(const char* value) { SetMulticastIp(value); return *this;}
    ///@}

    ///@{
    /**
     * The network source's gateway network name.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }
    inline UpdateBridgeNetworkSourceRequest& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}
    inline UpdateBridgeNetworkSourceRequest& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}
    inline UpdateBridgeNetworkSourceRequest& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * The network source port.
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateBridgeNetworkSourceRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * The network source protocol.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline UpdateBridgeNetworkSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline UpdateBridgeNetworkSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_multicastIp;
    bool m_multicastIpHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
