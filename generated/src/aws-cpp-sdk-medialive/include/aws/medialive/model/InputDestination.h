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
    AWS_MEDIALIVE_API InputDestination();
    AWS_MEDIALIVE_API InputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The system-generated static IP address of endpoint.
It remains fixed for the
     * lifetime of the input.
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline InputDestination& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline InputDestination& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline InputDestination& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * The port number for the input.
     */
    inline const Aws::String& GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }
    inline InputDestination& WithPort(const Aws::String& value) { SetPort(value); return *this;}
    inline InputDestination& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}
    inline InputDestination& WithPort(const char* value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * This represents the endpoint that the customer stream will be
pushed to.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline InputDestination& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline InputDestination& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline InputDestination& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const InputDestinationVpc& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const InputDestinationVpc& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(InputDestinationVpc&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline InputDestination& WithVpc(const InputDestinationVpc& value) { SetVpc(value); return *this;}
    inline InputDestination& WithVpc(InputDestinationVpc&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the attached network.
     */
    inline const Aws::String& GetNetwork() const{ return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(const Aws::String& value) { m_networkHasBeenSet = true; m_network = value; }
    inline void SetNetwork(Aws::String&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }
    inline void SetNetwork(const char* value) { m_networkHasBeenSet = true; m_network.assign(value); }
    inline InputDestination& WithNetwork(const Aws::String& value) { SetNetwork(value); return *this;}
    inline InputDestination& WithNetwork(Aws::String&& value) { SetNetwork(std::move(value)); return *this;}
    inline InputDestination& WithNetwork(const char* value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's a requirement to specify
     * what the route of the input
is going to be on the customer local network.
     */
    inline const Aws::Vector<InputDestinationRoute>& GetNetworkRoutes() const{ return m_networkRoutes; }
    inline bool NetworkRoutesHasBeenSet() const { return m_networkRoutesHasBeenSet; }
    inline void SetNetworkRoutes(const Aws::Vector<InputDestinationRoute>& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = value; }
    inline void SetNetworkRoutes(Aws::Vector<InputDestinationRoute>&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = std::move(value); }
    inline InputDestination& WithNetworkRoutes(const Aws::Vector<InputDestinationRoute>& value) { SetNetworkRoutes(value); return *this;}
    inline InputDestination& WithNetworkRoutes(Aws::Vector<InputDestinationRoute>&& value) { SetNetworkRoutes(std::move(value)); return *this;}
    inline InputDestination& AddNetworkRoutes(const InputDestinationRoute& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.push_back(value); return *this; }
    inline InputDestination& AddNetworkRoutes(InputDestinationRoute&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.push_back(std::move(value)); return *this; }
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
