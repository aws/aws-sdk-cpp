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
   * The source of the bridge. A network source originates at your
   * premises.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeNetworkSource">AWS
   * API Reference</a></p>
   */
  class BridgeNetworkSource
  {
  public:
    AWS_MEDIACONNECT_API BridgeNetworkSource();
    AWS_MEDIACONNECT_API BridgeNetworkSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeNetworkSource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline BridgeNetworkSource& WithMulticastIp(const Aws::String& value) { SetMulticastIp(value); return *this;}

    /**
     * The network source multicast IP.
     */
    inline BridgeNetworkSource& WithMulticastIp(Aws::String&& value) { SetMulticastIp(std::move(value)); return *this;}

    /**
     * The network source multicast IP.
     */
    inline BridgeNetworkSource& WithMulticastIp(const char* value) { SetMulticastIp(value); return *this;}


    /**
     * The name of the network source.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the network source.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the network source.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the network source.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the network source.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the network source.
     */
    inline BridgeNetworkSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the network source.
     */
    inline BridgeNetworkSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the network source.
     */
    inline BridgeNetworkSource& WithName(const char* value) { SetName(value); return *this;}


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
    inline BridgeNetworkSource& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}

    /**
     * The network source's gateway network name.
     */
    inline BridgeNetworkSource& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}

    /**
     * The network source's gateway network name.
     */
    inline BridgeNetworkSource& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}


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
    inline BridgeNetworkSource& WithPort(int value) { SetPort(value); return *this;}


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
    inline BridgeNetworkSource& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The network source protocol.
     */
    inline BridgeNetworkSource& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}

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
