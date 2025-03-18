/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionVgwTelemetryDetails.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionRoutesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon EC2 VPN connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    AwsEc2VpnConnectionDetails& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    AwsEc2VpnConnectionDetails& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    AwsEc2VpnConnectionDetails& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline const Aws::String& GetCustomerGatewayConfiguration() const { return m_customerGatewayConfiguration; }
    inline bool CustomerGatewayConfigurationHasBeenSet() const { return m_customerGatewayConfigurationHasBeenSet; }
    template<typename CustomerGatewayConfigurationT = Aws::String>
    void SetCustomerGatewayConfiguration(CustomerGatewayConfigurationT&& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = std::forward<CustomerGatewayConfigurationT>(value); }
    template<typename CustomerGatewayConfigurationT = Aws::String>
    AwsEc2VpnConnectionDetails& WithCustomerGatewayConfiguration(CustomerGatewayConfigurationT&& value) { SetCustomerGatewayConfiguration(std::forward<CustomerGatewayConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEc2VpnConnectionDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    AwsEc2VpnConnectionDetails& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    AwsEc2VpnConnectionDetails& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>& GetVgwTelemetry() const { return m_vgwTelemetry; }
    inline bool VgwTelemetryHasBeenSet() const { return m_vgwTelemetryHasBeenSet; }
    template<typename VgwTelemetryT = Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>>
    void SetVgwTelemetry(VgwTelemetryT&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = std::forward<VgwTelemetryT>(value); }
    template<typename VgwTelemetryT = Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>>
    AwsEc2VpnConnectionDetails& WithVgwTelemetry(VgwTelemetryT&& value) { SetVgwTelemetry(std::forward<VgwTelemetryT>(value)); return *this;}
    template<typename VgwTelemetryT = AwsEc2VpnConnectionVgwTelemetryDetails>
    AwsEc2VpnConnectionDetails& AddVgwTelemetry(VgwTelemetryT&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.emplace_back(std::forward<VgwTelemetryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPN connection options.</p>
     */
    inline const AwsEc2VpnConnectionOptionsDetails& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = AwsEc2VpnConnectionOptionsDetails>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = AwsEc2VpnConnectionOptionsDetails>
    AwsEc2VpnConnectionDetails& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionRoutesDetails>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<AwsEc2VpnConnectionRoutesDetails>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<AwsEc2VpnConnectionRoutesDetails>>
    AwsEc2VpnConnectionDetails& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = AwsEc2VpnConnectionRoutesDetails>
    AwsEc2VpnConnectionDetails& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    AwsEc2VpnConnectionDetails& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_customerGatewayConfiguration;
    bool m_customerGatewayConfigurationHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails> m_vgwTelemetry;
    bool m_vgwTelemetryHasBeenSet = false;

    AwsEc2VpnConnectionOptionsDetails m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionRoutesDetails> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
