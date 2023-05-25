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
   * Update an existing network output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeNetworkOutputRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeNetworkOutputRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest();
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The network output IP Address.
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * The network output IP Address.
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * The network output IP Address.
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * The network output IP Address.
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * The network output IP Address.
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * The network output IP Address.
     */
    inline UpdateBridgeNetworkOutputRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * The network output IP Address.
     */
    inline UpdateBridgeNetworkOutputRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * The network output IP Address.
     */
    inline UpdateBridgeNetworkOutputRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * The network output's gateway network name.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }

    /**
     * The network output's gateway network name.
     */
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }

    /**
     * The network output's gateway network name.
     */
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }

    /**
     * The network output's gateway network name.
     */
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }

    /**
     * The network output's gateway network name.
     */
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }

    /**
     * The network output's gateway network name.
     */
    inline UpdateBridgeNetworkOutputRequest& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}

    /**
     * The network output's gateway network name.
     */
    inline UpdateBridgeNetworkOutputRequest& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}

    /**
     * The network output's gateway network name.
     */
    inline UpdateBridgeNetworkOutputRequest& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}


    /**
     * The network output port.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * The network output port.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The network output port.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The network output port.
     */
    inline UpdateBridgeNetworkOutputRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * The network output protocol.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The network output protocol.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The network output protocol.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The network output protocol.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The network output protocol.
     */
    inline UpdateBridgeNetworkOutputRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The network output protocol.
     */
    inline UpdateBridgeNetworkOutputRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The network output TTL.
     */
    inline int GetTtl() const{ return m_ttl; }

    /**
     * The network output TTL.
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * The network output TTL.
     */
    inline void SetTtl(int value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * The network output TTL.
     */
    inline UpdateBridgeNetworkOutputRequest& WithTtl(int value) { SetTtl(value); return *this;}

  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_ttl;
    bool m_ttlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
