/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/NetworkConnectionAction.h>
#include <aws/securityhub/model/AwsApiCallAction.h>
#include <aws/securityhub/model/DnsRequestAction.h>
#include <aws/securityhub/model/PortProbeAction.h>
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
   * <p>Provides details about one of the following actions that affects or that was
   * taken on a resource:</p> <ul> <li> <p>A remote IP address issued an Amazon Web
   * Services API call</p> </li> <li> <p>A DNS request was received</p> </li> <li>
   * <p>A remote IP address attempted to connect to an EC2 instance</p> </li> <li>
   * <p>A remote IP address attempted a port probe on an EC2 instance</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_SECURITYHUB_API Action();
    AWS_SECURITYHUB_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action that was detected. The possible action types are:</p> <ul>
     * <li> <p> <code>NETWORK_CONNECTION</code> </p> </li> <li> <p>
     * <code>AWS_API_CALL</code> </p> </li> <li> <p> <code>DNS_REQUEST</code> </p>
     * </li> <li> <p> <code>PORT_PROBE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }
    inline Action& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}
    inline Action& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}
    inline Action& WithActionType(const char* value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included if <code>ActionType</code> is <code>NETWORK_CONNECTION</code>.
     * Provides details about the network connection that was detected.</p>
     */
    inline const NetworkConnectionAction& GetNetworkConnectionAction() const{ return m_networkConnectionAction; }
    inline bool NetworkConnectionActionHasBeenSet() const { return m_networkConnectionActionHasBeenSet; }
    inline void SetNetworkConnectionAction(const NetworkConnectionAction& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = value; }
    inline void SetNetworkConnectionAction(NetworkConnectionAction&& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = std::move(value); }
    inline Action& WithNetworkConnectionAction(const NetworkConnectionAction& value) { SetNetworkConnectionAction(value); return *this;}
    inline Action& WithNetworkConnectionAction(NetworkConnectionAction&& value) { SetNetworkConnectionAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included if <code>ActionType</code> is <code>AWS_API_CALL</code>. Provides
     * details about the API call that was detected. </p>
     */
    inline const AwsApiCallAction& GetAwsApiCallAction() const{ return m_awsApiCallAction; }
    inline bool AwsApiCallActionHasBeenSet() const { return m_awsApiCallActionHasBeenSet; }
    inline void SetAwsApiCallAction(const AwsApiCallAction& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = value; }
    inline void SetAwsApiCallAction(AwsApiCallAction&& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = std::move(value); }
    inline Action& WithAwsApiCallAction(const AwsApiCallAction& value) { SetAwsApiCallAction(value); return *this;}
    inline Action& WithAwsApiCallAction(AwsApiCallAction&& value) { SetAwsApiCallAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included if <code>ActionType</code> is <code>DNS_REQUEST</code>. Provides
     * details about the DNS request that was detected. </p>
     */
    inline const DnsRequestAction& GetDnsRequestAction() const{ return m_dnsRequestAction; }
    inline bool DnsRequestActionHasBeenSet() const { return m_dnsRequestActionHasBeenSet; }
    inline void SetDnsRequestAction(const DnsRequestAction& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = value; }
    inline void SetDnsRequestAction(DnsRequestAction&& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = std::move(value); }
    inline Action& WithDnsRequestAction(const DnsRequestAction& value) { SetDnsRequestAction(value); return *this;}
    inline Action& WithDnsRequestAction(DnsRequestAction&& value) { SetDnsRequestAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included if <code>ActionType</code> is <code>PORT_PROBE</code>. Provides
     * details about the port probe that was detected. </p>
     */
    inline const PortProbeAction& GetPortProbeAction() const{ return m_portProbeAction; }
    inline bool PortProbeActionHasBeenSet() const { return m_portProbeActionHasBeenSet; }
    inline void SetPortProbeAction(const PortProbeAction& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = value; }
    inline void SetPortProbeAction(PortProbeAction&& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = std::move(value); }
    inline Action& WithPortProbeAction(const PortProbeAction& value) { SetPortProbeAction(value); return *this;}
    inline Action& WithPortProbeAction(PortProbeAction&& value) { SetPortProbeAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    NetworkConnectionAction m_networkConnectionAction;
    bool m_networkConnectionActionHasBeenSet = false;

    AwsApiCallAction m_awsApiCallAction;
    bool m_awsApiCallActionHasBeenSet = false;

    DnsRequestAction m_dnsRequestAction;
    bool m_dnsRequestActionHasBeenSet = false;

    PortProbeAction m_portProbeAction;
    bool m_portProbeActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
