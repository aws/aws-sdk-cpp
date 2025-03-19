/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a connection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ConnectionDetails">AWS
   * API Reference</a></p>
   */
  class ConnectionDetails
  {
  public:
    AWS_OUTPOSTS_API ConnectionDetails() = default;
    AWS_OUTPOSTS_API ConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The public key of the client. </p>
     */
    inline const Aws::String& GetClientPublicKey() const { return m_clientPublicKey; }
    inline bool ClientPublicKeyHasBeenSet() const { return m_clientPublicKeyHasBeenSet; }
    template<typename ClientPublicKeyT = Aws::String>
    void SetClientPublicKey(ClientPublicKeyT&& value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey = std::forward<ClientPublicKeyT>(value); }
    template<typename ClientPublicKeyT = Aws::String>
    ConnectionDetails& WithClientPublicKey(ClientPublicKeyT&& value) { SetClientPublicKey(std::forward<ClientPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The public key of the server. </p>
     */
    inline const Aws::String& GetServerPublicKey() const { return m_serverPublicKey; }
    inline bool ServerPublicKeyHasBeenSet() const { return m_serverPublicKeyHasBeenSet; }
    template<typename ServerPublicKeyT = Aws::String>
    void SetServerPublicKey(ServerPublicKeyT&& value) { m_serverPublicKeyHasBeenSet = true; m_serverPublicKey = std::forward<ServerPublicKeyT>(value); }
    template<typename ServerPublicKeyT = Aws::String>
    ConnectionDetails& WithServerPublicKey(ServerPublicKeyT&& value) { SetServerPublicKey(std::forward<ServerPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The endpoint for the server. </p>
     */
    inline const Aws::String& GetServerEndpoint() const { return m_serverEndpoint; }
    inline bool ServerEndpointHasBeenSet() const { return m_serverEndpointHasBeenSet; }
    template<typename ServerEndpointT = Aws::String>
    void SetServerEndpoint(ServerEndpointT&& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = std::forward<ServerEndpointT>(value); }
    template<typename ServerEndpointT = Aws::String>
    ConnectionDetails& WithServerEndpoint(ServerEndpointT&& value) { SetServerEndpoint(std::forward<ServerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client tunnel address. </p>
     */
    inline const Aws::String& GetClientTunnelAddress() const { return m_clientTunnelAddress; }
    inline bool ClientTunnelAddressHasBeenSet() const { return m_clientTunnelAddressHasBeenSet; }
    template<typename ClientTunnelAddressT = Aws::String>
    void SetClientTunnelAddress(ClientTunnelAddressT&& value) { m_clientTunnelAddressHasBeenSet = true; m_clientTunnelAddress = std::forward<ClientTunnelAddressT>(value); }
    template<typename ClientTunnelAddressT = Aws::String>
    ConnectionDetails& WithClientTunnelAddress(ClientTunnelAddressT&& value) { SetClientTunnelAddress(std::forward<ClientTunnelAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server tunnel address. </p>
     */
    inline const Aws::String& GetServerTunnelAddress() const { return m_serverTunnelAddress; }
    inline bool ServerTunnelAddressHasBeenSet() const { return m_serverTunnelAddressHasBeenSet; }
    template<typename ServerTunnelAddressT = Aws::String>
    void SetServerTunnelAddress(ServerTunnelAddressT&& value) { m_serverTunnelAddressHasBeenSet = true; m_serverTunnelAddress = std::forward<ServerTunnelAddressT>(value); }
    template<typename ServerTunnelAddressT = Aws::String>
    ConnectionDetails& WithServerTunnelAddress(ServerTunnelAddressT&& value) { SetServerTunnelAddress(std::forward<ServerTunnelAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed IP addresses. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedIps() const { return m_allowedIps; }
    inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }
    template<typename AllowedIpsT = Aws::Vector<Aws::String>>
    void SetAllowedIps(AllowedIpsT&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = std::forward<AllowedIpsT>(value); }
    template<typename AllowedIpsT = Aws::Vector<Aws::String>>
    ConnectionDetails& WithAllowedIps(AllowedIpsT&& value) { SetAllowedIps(std::forward<AllowedIpsT>(value)); return *this;}
    template<typename AllowedIpsT = Aws::String>
    ConnectionDetails& AddAllowedIps(AllowedIpsT&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.emplace_back(std::forward<AllowedIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientPublicKey;
    bool m_clientPublicKeyHasBeenSet = false;

    Aws::String m_serverPublicKey;
    bool m_serverPublicKeyHasBeenSet = false;

    Aws::String m_serverEndpoint;
    bool m_serverEndpointHasBeenSet = false;

    Aws::String m_clientTunnelAddress;
    bool m_clientTunnelAddressHasBeenSet = false;

    Aws::String m_serverTunnelAddress;
    bool m_serverTunnelAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedIps;
    bool m_allowedIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
