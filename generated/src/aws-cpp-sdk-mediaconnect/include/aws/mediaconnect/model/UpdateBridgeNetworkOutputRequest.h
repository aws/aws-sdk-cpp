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
   * <p>Update an existing network output. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeNetworkOutputRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeNetworkOutputRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest() = default;
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateBridgeNetworkOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network output IP Address. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    UpdateBridgeNetworkOutputRequest& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network output's gateway network name. </p>
     */
    inline const Aws::String& GetNetworkName() const { return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    template<typename NetworkNameT = Aws::String>
    void SetNetworkName(NetworkNameT&& value) { m_networkNameHasBeenSet = true; m_networkName = std::forward<NetworkNameT>(value); }
    template<typename NetworkNameT = Aws::String>
    UpdateBridgeNetworkOutputRequest& WithNetworkName(NetworkNameT&& value) { SetNetworkName(std::forward<NetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network output port. </p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateBridgeNetworkOutputRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network output protocol. </p>  <p>Elemental MediaConnect no longer
     * supports the Fujitsu QoS protocol. This reference is maintained for legacy
     * purposes only.</p> 
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline UpdateBridgeNetworkOutputRequest& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network output TTL. </p>
     */
    inline int GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(int value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline UpdateBridgeNetworkOutputRequest& WithTtl(int value) { SetTtl(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_ttl{0};
    bool m_ttlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
