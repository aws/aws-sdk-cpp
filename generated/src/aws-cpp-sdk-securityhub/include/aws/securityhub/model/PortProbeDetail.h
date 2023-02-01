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
    AWS_SECURITYHUB_API PortProbeDetail();
    AWS_SECURITYHUB_API PortProbeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PortProbeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline const ActionLocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }

    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }

    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline void SetLocalPortDetails(const ActionLocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }

    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline void SetLocalPortDetails(ActionLocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }

    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline PortProbeDetail& WithLocalPortDetails(const ActionLocalPortDetails& value) { SetLocalPortDetails(value); return *this;}

    /**
     * <p>Provides information about the port that was scanned.</p>
     */
    inline PortProbeDetail& WithLocalPortDetails(ActionLocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}


    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline const ActionLocalIpDetails& GetLocalIpDetails() const{ return m_localIpDetails; }

    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }

    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline void SetLocalIpDetails(const ActionLocalIpDetails& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = value; }

    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline void SetLocalIpDetails(ActionLocalIpDetails&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::move(value); }

    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline PortProbeDetail& WithLocalIpDetails(const ActionLocalIpDetails& value) { SetLocalIpDetails(value); return *this;}

    /**
     * <p>Provides information about the IP address where the scanned port is
     * located.</p>
     */
    inline PortProbeDetail& WithLocalIpDetails(ActionLocalIpDetails&& value) { SetLocalIpDetails(std::move(value)); return *this;}


    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline void SetRemoteIpDetails(const ActionRemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline void SetRemoteIpDetails(ActionRemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline PortProbeDetail& WithRemoteIpDetails(const ActionRemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * <p>Provides information about the remote IP address that performed the scan.</p>
     */
    inline PortProbeDetail& WithRemoteIpDetails(ActionRemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}

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
