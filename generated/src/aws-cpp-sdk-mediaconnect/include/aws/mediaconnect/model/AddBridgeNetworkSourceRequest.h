/**
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
   * Add a network source to an existing bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeNetworkSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeNetworkSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeNetworkSourceRequest();
    AWS_MEDIACONNECT_API AddBridgeNetworkSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeNetworkSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The network source multicast IP.
     */
    inline const Aws::String& GetMulticastIp() const{ return m_multicastIp; }

    /**
     * The network source multicast IP.
     */
    inline bool MulticastIpHasBeenSet() const { return m_multicastIpHasBeenSet; }

    /**
     * The network source multicast IP.
     */
    inline void SetMulticastIp(const Aws::String& value) { m_multicastIpHasBeenSet = true; m_multicastIp = value; }

    /**
     * The network source multicast IP.
     */
    inline void SetMulticastIp(Aws::String&& value) { m_multicastIpHasBeenSet = true; m_multicastIp = std::move(value); }

    /**
     * The network source multicast IP.
     */
    inline void SetMulticastIp(const char* value) { m_multicastIpHasBeenSet = true; m_multicastIp.assign(value); }

    /**
     * The network source multicast IP.
     */
    inline AddBridgeNetworkSourceRequest& WithMulticastIp(const Aws::String& value) { SetMulticastIp(value); return *this;}

    /**
     * The network source multicast IP.
     */
    inline AddBridgeNetworkSourceRequest& WithMulticastIp(Aws::String&& value) { SetMulticastIp(std::move(value)); return *this;}

    /**
     * The network source multicast IP.
     */
    inline AddBridgeNetworkSourceRequest& WithMulticastIp(const char* value) { SetMulticastIp(value); return *this;}


    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline AddBridgeNetworkSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline AddBridgeNetworkSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the network source. This name is used to reference the source and
     * must be unique among sources in this bridge.
     */
    inline AddBridgeNetworkSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The network source's gateway network name.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }

    /**
     * The network source's gateway network name.
     */
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }

    /**
     * The network source's gateway network name.
     */
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }

    /**
     * The network source's gateway network name.
     */
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }

    /**
     * The network source's gateway network name.
     */
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }

    /**
     * The network source's gateway network name.
     */
    inline AddBridgeNetworkSourceRequest& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}

    /**
     * The network source's gateway network name.
     */
    inline AddBridgeNetworkSourceRequest& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}

    /**
     * The network source's gateway network name.
     */
    inline AddBridgeNetworkSourceRequest& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}


    /**
     * The network source port.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * The network source port.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The network source port.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The network source port.
     */
    inline AddBridgeNetworkSourceRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * The network source protocol.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The network source protocol.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The network source protocol.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The network source protocol.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The network source protocol.
     */
    inline AddBridgeNetworkSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The network source protocol.
     */
    inline AddBridgeNetworkSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_multicastIp;
    bool m_multicastIpHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
