/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/AccessEndpoint.h>
#include <aws/workspaces/model/InternetFallbackProtocol.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the access endpoint configuration for a WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AccessEndpointConfig">AWS
   * API Reference</a></p>
   */
  class AccessEndpointConfig
  {
  public:
    AWS_WORKSPACES_API AccessEndpointConfig() = default;
    AWS_WORKSPACES_API AccessEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccessEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates a list of access endpoints associated with this directory.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const { return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    void SetAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::forward<AccessEndpointsT>(value); }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    AccessEndpointConfig& WithAccessEndpoints(AccessEndpointsT&& value) { SetAccessEndpoints(std::forward<AccessEndpointsT>(value)); return *this;}
    template<typename AccessEndpointsT = AccessEndpoint>
    AccessEndpointConfig& AddAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.emplace_back(std::forward<AccessEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates a list of protocols that fallback to using the public Internet when
     * streaming over a VPC endpoint is not available.</p>
     */
    inline const Aws::Vector<InternetFallbackProtocol>& GetInternetFallbackProtocols() const { return m_internetFallbackProtocols; }
    inline bool InternetFallbackProtocolsHasBeenSet() const { return m_internetFallbackProtocolsHasBeenSet; }
    template<typename InternetFallbackProtocolsT = Aws::Vector<InternetFallbackProtocol>>
    void SetInternetFallbackProtocols(InternetFallbackProtocolsT&& value) { m_internetFallbackProtocolsHasBeenSet = true; m_internetFallbackProtocols = std::forward<InternetFallbackProtocolsT>(value); }
    template<typename InternetFallbackProtocolsT = Aws::Vector<InternetFallbackProtocol>>
    AccessEndpointConfig& WithInternetFallbackProtocols(InternetFallbackProtocolsT&& value) { SetInternetFallbackProtocols(std::forward<InternetFallbackProtocolsT>(value)); return *this;}
    inline AccessEndpointConfig& AddInternetFallbackProtocols(InternetFallbackProtocol value) { m_internetFallbackProtocolsHasBeenSet = true; m_internetFallbackProtocols.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;

    Aws::Vector<InternetFallbackProtocol> m_internetFallbackProtocols;
    bool m_internetFallbackProtocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
