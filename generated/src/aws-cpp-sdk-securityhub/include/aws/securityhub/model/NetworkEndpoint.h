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
    AWS_SECURITYHUB_API NetworkEndpoint();
    AWS_SECURITYHUB_API NetworkEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the network endpoint involved in the attack sequence. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline NetworkEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline NetworkEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline NetworkEndpoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address used in the network endpoint. </p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline NetworkEndpoint& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline NetworkEndpoint& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline NetworkEndpoint& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain information for the network endpoint. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline NetworkEndpoint& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline NetworkEndpoint& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline NetworkEndpoint& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number associated with the network endpoint. </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline NetworkEndpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the location of the network endpoint. </p>
     */
    inline const NetworkGeoLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const NetworkGeoLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(NetworkGeoLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline NetworkEndpoint& WithLocation(const NetworkGeoLocation& value) { SetLocation(value); return *this;}
    inline NetworkEndpoint& WithLocation(NetworkGeoLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Autonomous System Number (ASN) of the network endpoint. </p>
     */
    inline const NetworkAutonomousSystem& GetAutonomousSystem() const{ return m_autonomousSystem; }
    inline bool AutonomousSystemHasBeenSet() const { return m_autonomousSystemHasBeenSet; }
    inline void SetAutonomousSystem(const NetworkAutonomousSystem& value) { m_autonomousSystemHasBeenSet = true; m_autonomousSystem = value; }
    inline void SetAutonomousSystem(NetworkAutonomousSystem&& value) { m_autonomousSystemHasBeenSet = true; m_autonomousSystem = std::move(value); }
    inline NetworkEndpoint& WithAutonomousSystem(const NetworkAutonomousSystem& value) { SetAutonomousSystem(value); return *this;}
    inline NetworkEndpoint& WithAutonomousSystem(NetworkAutonomousSystem&& value) { SetAutonomousSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the network connection. </p>
     */
    inline const NetworkConnection& GetConnection() const{ return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    inline void SetConnection(const NetworkConnection& value) { m_connectionHasBeenSet = true; m_connection = value; }
    inline void SetConnection(NetworkConnection&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }
    inline NetworkEndpoint& WithConnection(const NetworkConnection& value) { SetConnection(value); return *this;}
    inline NetworkEndpoint& WithConnection(NetworkConnection&& value) { SetConnection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    int m_port;
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
