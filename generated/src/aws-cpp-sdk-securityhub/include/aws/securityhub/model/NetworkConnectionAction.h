/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActionRemoteIpDetails.h>
#include <aws/securityhub/model/ActionRemotePortDetails.h>
#include <aws/securityhub/model/ActionLocalPortDetails.h>
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
   * <p>Provided if <code>ActionType</code> is <code>NETWORK_CONNECTION</code>. It
   * provides details about the attempted network connection that was
   * detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkConnectionAction">AWS
   * API Reference</a></p>
   */
  class NetworkConnectionAction
  {
  public:
    AWS_SECURITYHUB_API NetworkConnectionAction();
    AWS_SECURITYHUB_API NetworkConnectionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkConnectionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The direction of the network connection request (<code>IN</code> or
     * <code>OUT</code>).</p>
     */
    inline const Aws::String& GetConnectionDirection() const{ return m_connectionDirection; }
    inline bool ConnectionDirectionHasBeenSet() const { return m_connectionDirectionHasBeenSet; }
    inline void SetConnectionDirection(const Aws::String& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = value; }
    inline void SetConnectionDirection(Aws::String&& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = std::move(value); }
    inline void SetConnectionDirection(const char* value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection.assign(value); }
    inline NetworkConnectionAction& WithConnectionDirection(const Aws::String& value) { SetConnectionDirection(value); return *this;}
    inline NetworkConnectionAction& WithConnectionDirection(Aws::String&& value) { SetConnectionDirection(std::move(value)); return *this;}
    inline NetworkConnectionAction& WithConnectionDirection(const char* value) { SetConnectionDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the remote IP address that issued the network connection
     * request.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    inline void SetRemoteIpDetails(const ActionRemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }
    inline void SetRemoteIpDetails(ActionRemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }
    inline NetworkConnectionAction& WithRemoteIpDetails(const ActionRemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}
    inline NetworkConnectionAction& WithRemoteIpDetails(ActionRemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the port on the remote IP address.</p>
     */
    inline const ActionRemotePortDetails& GetRemotePortDetails() const{ return m_remotePortDetails; }
    inline bool RemotePortDetailsHasBeenSet() const { return m_remotePortDetailsHasBeenSet; }
    inline void SetRemotePortDetails(const ActionRemotePortDetails& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = value; }
    inline void SetRemotePortDetails(ActionRemotePortDetails&& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = std::move(value); }
    inline NetworkConnectionAction& WithRemotePortDetails(const ActionRemotePortDetails& value) { SetRemotePortDetails(value); return *this;}
    inline NetworkConnectionAction& WithRemotePortDetails(ActionRemotePortDetails&& value) { SetRemotePortDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the port on the EC2 instance.</p>
     */
    inline const ActionLocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    inline void SetLocalPortDetails(const ActionLocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }
    inline void SetLocalPortDetails(ActionLocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }
    inline NetworkConnectionAction& WithLocalPortDetails(const ActionLocalPortDetails& value) { SetLocalPortDetails(value); return *this;}
    inline NetworkConnectionAction& WithLocalPortDetails(ActionLocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used to make the network connection request.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 64.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline NetworkConnectionAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline NetworkConnectionAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline NetworkConnectionAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network connection attempt was blocked.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline NetworkConnectionAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionDirection;
    bool m_connectionDirectionHasBeenSet = false;

    ActionRemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    ActionRemotePortDetails m_remotePortDetails;
    bool m_remotePortDetailsHasBeenSet = false;

    ActionLocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    bool m_blocked;
    bool m_blockedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
