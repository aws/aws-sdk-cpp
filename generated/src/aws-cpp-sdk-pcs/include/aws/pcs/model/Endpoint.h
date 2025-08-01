/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/EndpointType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>An endpoint available for interaction with the scheduler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Endpoint">AWS API
   * Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_PCS_API Endpoint() = default;
    AWS_PCS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of endpoint running at the specific IP address.</p>
     */
    inline EndpointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EndpointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Endpoint& WithType(EndpointType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For clusters that use IPv4, this is the endpoint's private IP address.</p>
     * <p>Example: <code>10.1.2.3</code> </p> <p>For clusters configured to use IPv6,
     * this is an empty string.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    Endpoint& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's public IP address.</p> <p>Example: <code>192.0.2.1</code> </p>
     */
    inline const Aws::String& GetPublicIpAddress() const { return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    template<typename PublicIpAddressT = Aws::String>
    void SetPublicIpAddress(PublicIpAddressT&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::forward<PublicIpAddressT>(value); }
    template<typename PublicIpAddressT = Aws::String>
    Endpoint& WithPublicIpAddress(PublicIpAddressT&& value) { SetPublicIpAddress(std::forward<PublicIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's IPv6 address.</p> <p>Example: <code>2001:db8::1</code> </p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    Endpoint& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's connection port number.</p> <p> Example: <code>1234</code>
     * </p>
     */
    inline const Aws::String& GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    template<typename PortT = Aws::String>
    void SetPort(PortT&& value) { m_portHasBeenSet = true; m_port = std::forward<PortT>(value); }
    template<typename PortT = Aws::String>
    Endpoint& WithPort(PortT&& value) { SetPort(std::forward<PortT>(value)); return *this;}
    ///@}
  private:

    EndpointType m_type{EndpointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
