/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ActionLocalPortDetails.h>
#include <aws/securityhub/model/ActionLocalIpDetails.h>
#include <aws/securityhub/model/ActionRemoteIpDetails.h>
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
   * <p>A port scan that was part of the port probe. For each scan, PortProbeDetails
   * provides information about the local IP address and port that were scanned, and
   * the remote IP address that the scan originated from.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PortProbeDetail">AWS
   * API Reference</a></p>
   */
  class PortProbeDetail
  {
  public:
    AWS_SECURITYHUB_API PortProbeDetail() = default;
    AWS_SECURITYHUB_API PortProbeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PortProbeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline const ActionLocalPortDetails& GetLocalPortDetails() const { return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    template<typename LocalPortDetailsT = ActionLocalPortDetails>
    void SetLocalPortDetails(LocalPortDetailsT&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::forward<LocalPortDetailsT>(value); }
    template<typename LocalPortDetailsT = ActionLocalPortDetails>
    PortProbeDetail& WithLocalPortDetails(LocalPortDetailsT&& value) { SetLocalPortDetails(std::forward<LocalPortDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline const ActionLocalIpDetails& GetLocalIpDetails() const { return m_localIpDetails; }
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }
    template<typename LocalIpDetailsT = ActionLocalIpDetails>
    void SetLocalIpDetails(LocalIpDetailsT&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::forward<LocalIpDetailsT>(value); }
    template<typename LocalIpDetailsT = ActionLocalIpDetails>
    PortProbeDetail& WithLocalIpDetails(LocalIpDetailsT&& value) { SetLocalIpDetails(std::forward<LocalIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    template<typename RemoteIpDetailsT = ActionRemoteIpDetails>
    void SetRemoteIpDetails(RemoteIpDetailsT&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value); }
    template<typename RemoteIpDetailsT = ActionRemoteIpDetails>
    PortProbeDetail& WithRemoteIpDetails(RemoteIpDetailsT&& value) { SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value)); return *this;}
    ///@}
  private:

    ActionLocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet = false;

    ActionLocalIpDetails m_localIpDetails;
    bool m_localIpDetailsHasBeenSet = false;

    ActionRemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
