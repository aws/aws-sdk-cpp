/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/MulticastSourceSettings.h>
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
   * <p> The source of the bridge. A network source originates at your
   * premises.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeNetworkSource">AWS
   * API Reference</a></p>
   */
  class BridgeNetworkSource
  {
  public:
    AWS_MEDIACONNECT_API BridgeNetworkSource() = default;
    AWS_MEDIACONNECT_API BridgeNetworkSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeNetworkSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The network source multicast IP.</p>
     */
    inline const Aws::String& GetMulticastIp() const { return m_multicastIp; }
    inline bool MulticastIpHasBeenSet() const { return m_multicastIpHasBeenSet; }
    template<typename MulticastIpT = Aws::String>
    void SetMulticastIp(MulticastIpT&& value) { m_multicastIpHasBeenSet = true; m_multicastIp = std::forward<MulticastIpT>(value); }
    template<typename MulticastIpT = Aws::String>
    BridgeNetworkSource& WithMulticastIp(MulticastIpT&& value) { SetMulticastIp(std::forward<MulticastIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings related to the multicast source. </p>
     */
    inline const MulticastSourceSettings& GetMulticastSourceSettings() const { return m_multicastSourceSettings; }
    inline bool MulticastSourceSettingsHasBeenSet() const { return m_multicastSourceSettingsHasBeenSet; }
    template<typename MulticastSourceSettingsT = MulticastSourceSettings>
    void SetMulticastSourceSettings(MulticastSourceSettingsT&& value) { m_multicastSourceSettingsHasBeenSet = true; m_multicastSourceSettings = std::forward<MulticastSourceSettingsT>(value); }
    template<typename MulticastSourceSettingsT = MulticastSourceSettings>
    BridgeNetworkSource& WithMulticastSourceSettings(MulticastSourceSettingsT&& value) { SetMulticastSourceSettings(std::forward<MulticastSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the network source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BridgeNetworkSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network source's gateway network name.</p>
     */
    inline const Aws::String& GetNetworkName() const { return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    template<typename NetworkNameT = Aws::String>
    void SetNetworkName(NetworkNameT&& value) { m_networkNameHasBeenSet = true; m_networkName = std::forward<NetworkNameT>(value); }
    template<typename NetworkNameT = Aws::String>
    BridgeNetworkSource& WithNetworkName(NetworkNameT&& value) { SetNetworkName(std::forward<NetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network source port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline BridgeNetworkSource& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network source protocol.</p>  <p>Elemental MediaConnect no longer
     * supports the Fujitsu QoS protocol. This reference is maintained for legacy
     * purposes only.</p> 
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline BridgeNetworkSource& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    Aws::String m_multicastIp;
    bool m_multicastIpHasBeenSet = false;

    MulticastSourceSettings m_multicastSourceSettings;
    bool m_multicastSourceSettingsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
