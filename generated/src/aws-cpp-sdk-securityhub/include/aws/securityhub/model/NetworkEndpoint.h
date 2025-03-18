/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/NetworkGeoLocation.h>
#include <aws/securityhub/model/NetworkAutonomousSystem.h>
#include <aws/securityhub/model/NetworkConnection.h>
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
   * <p> Contains information about network endpoints involved in an Amazon GuardDuty
   * Extended Threat Detection attack sequence. GuardDuty generates an attack
   * sequence finding when multiple events align to a potentially suspicious
   * activity. To receive GuardDuty attack sequence findings in Security Hub, you
   * must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>. </p>
   * <p>This field can provide information about the network endpoints associated
   * with the resource in the attack sequence finding, or about a specific network
   * endpoint used for the attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkEndpoint">AWS
   * API Reference</a></p>
   */
  class NetworkEndpoint
  {
  public:
    AWS_SECURITYHUB_API NetworkEndpoint() = default;
    AWS_SECURITYHUB_API NetworkEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the network endpoint involved in the attack sequence. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    NetworkEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address used in the network endpoint. </p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    NetworkEndpoint& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain information for the network endpoint. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    NetworkEndpoint& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number associated with the network endpoint. </p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline NetworkEndpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the location of the network endpoint. </p>
     */
    inline const NetworkGeoLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = NetworkGeoLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = NetworkGeoLocation>
    NetworkEndpoint& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Autonomous System Number (ASN) of the network endpoint. </p>
     */
    inline const NetworkAutonomousSystem& GetAutonomousSystem() const { return m_autonomousSystem; }
    inline bool AutonomousSystemHasBeenSet() const { return m_autonomousSystemHasBeenSet; }
    template<typename AutonomousSystemT = NetworkAutonomousSystem>
    void SetAutonomousSystem(AutonomousSystemT&& value) { m_autonomousSystemHasBeenSet = true; m_autonomousSystem = std::forward<AutonomousSystemT>(value); }
    template<typename AutonomousSystemT = NetworkAutonomousSystem>
    NetworkEndpoint& WithAutonomousSystem(AutonomousSystemT&& value) { SetAutonomousSystem(std::forward<AutonomousSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the network connection. </p>
     */
    inline const NetworkConnection& GetConnection() const { return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    template<typename ConnectionT = NetworkConnection>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = NetworkConnection>
    NetworkEndpoint& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    NetworkGeoLocation m_location;
    bool m_locationHasBeenSet = false;

    NetworkAutonomousSystem m_autonomousSystem;
    bool m_autonomousSystemHasBeenSet = false;

    NetworkConnection m_connection;
    bool m_connectionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
