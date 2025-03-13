/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDestinationVpc.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputDestinationRoute.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for a PUSH type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDestination">AWS
   * API Reference</a></p>
   */
  class InputDestination
  {
  public:
    AWS_MEDIALIVE_API InputDestination() = default;
    AWS_MEDIALIVE_API InputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    InputDestination& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The port number for the input.
     */
    inline const Aws::String& GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    template<typename PortT = Aws::String>
    void SetPort(PortT&& value) { m_portHasBeenSet = true; m_port = std::forward<PortT>(value); }
    template<typename PortT = Aws::String>
    InputDestination& WithPort(PortT&& value) { SetPort(std::forward<PortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * This represents the endpoint that the customer stream will be
pushed to.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    InputDestination& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InputDestinationVpc& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = InputDestinationVpc>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = InputDestinationVpc>
    InputDestination& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the attached network.
     */
    inline const Aws::String& GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    template<typename NetworkT = Aws::String>
    void SetNetwork(NetworkT&& value) { m_networkHasBeenSet = true; m_network = std::forward<NetworkT>(value); }
    template<typename NetworkT = Aws::String>
    InputDestination& WithNetwork(NetworkT&& value) { SetNetwork(std::forward<NetworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's a requirement to specify
     * what the route of the input
is going to be on the customer local network.
     */
    inline const Aws::Vector<InputDestinationRoute>& GetNetworkRoutes() const { return m_networkRoutes; }
    inline bool NetworkRoutesHasBeenSet() const { return m_networkRoutesHasBeenSet; }
    template<typename NetworkRoutesT = Aws::Vector<InputDestinationRoute>>
    void SetNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = std::forward<NetworkRoutesT>(value); }
    template<typename NetworkRoutesT = Aws::Vector<InputDestinationRoute>>
    InputDestination& WithNetworkRoutes(NetworkRoutesT&& value) { SetNetworkRoutes(std::forward<NetworkRoutesT>(value)); return *this;}
    template<typename NetworkRoutesT = InputDestinationRoute>
    InputDestination& AddNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.emplace_back(std::forward<NetworkRoutesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    InputDestinationVpc m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::String m_network;
    bool m_networkHasBeenSet = false;

    Aws::Vector<InputDestinationRoute> m_networkRoutes;
    bool m_networkRoutesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
