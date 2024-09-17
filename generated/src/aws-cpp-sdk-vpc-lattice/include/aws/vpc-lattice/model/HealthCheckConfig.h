/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/Matcher.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetGroupProtocol.h>
#include <aws/vpc-lattice/model/HealthCheckProtocolVersion.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes the health check configuration of a target group. Health check
   * configurations aren't used for target groups of type <code>LAMBDA</code> or
   * <code>ALB</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/HealthCheckConfig">AWS
   * API Reference</a></p>
   */
  class HealthCheckConfig
  {
  public:
    AWS_VPCLATTICE_API HealthCheckConfig();
    AWS_VPCLATTICE_API HealthCheckConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HealthCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether health checking is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline HealthCheckConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. The range is 5–300 seconds. The default is 30 seconds.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }
    inline HealthCheckConfig& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, to wait before reporting a target as
     * unhealthy. The range is 1–120 seconds. The default is 5 seconds.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }
    inline HealthCheckConfig& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive successful health checks required before
     * considering an unhealthy target healthy. The range is 2–10. The default is
     * 5.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }
    inline HealthCheckConfig& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The codes to use when checking for a successful response from a target.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = std::move(value); }
    inline HealthCheckConfig& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}
    inline HealthCheckConfig& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for health checks on the targets. If the protocol version is
     * <code>HTTP/1.1</code> or <code>HTTP/2</code>, specify a valid URI (for example,
     * <code>/path?query</code>). The default path is <code>/</code>. Health checks are
     * not supported if the protocol version is <code>gRPC</code>, however, you can
     * choose <code>HTTP/1.1</code> or <code>HTTP/2</code> and specify a valid URI.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline HealthCheckConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline HealthCheckConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline HealthCheckConfig& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port used when performing health checks on targets. The default setting
     * is the port that a target receives traffic on.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline HealthCheckConfig& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used when performing health checks on targets. The possible
     * protocols are <code>HTTP</code> and <code>HTTPS</code>. The default is
     * <code>HTTP</code>.</p>
     */
    inline const TargetGroupProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const TargetGroupProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(TargetGroupProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline HealthCheckConfig& WithProtocol(const TargetGroupProtocol& value) { SetProtocol(value); return *this;}
    inline HealthCheckConfig& WithProtocol(TargetGroupProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol version used when performing health checks on targets. The
     * possible protocol versions are <code>HTTP1</code> and <code>HTTP2</code>.</p>
     */
    inline const HealthCheckProtocolVersion& GetProtocolVersion() const{ return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    inline void SetProtocolVersion(const HealthCheckProtocolVersion& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }
    inline void SetProtocolVersion(HealthCheckProtocolVersion&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }
    inline HealthCheckConfig& WithProtocolVersion(const HealthCheckProtocolVersion& value) { SetProtocolVersion(value); return *this;}
    inline HealthCheckConfig& WithProtocolVersion(HealthCheckProtocolVersion&& value) { SetProtocolVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive failed health checks required before considering a
     * target unhealthy. The range is 2–10. The default is 2.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }
    inline HealthCheckConfig& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet = false;

    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet = false;

    Matcher m_matcher;
    bool m_matcherHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    TargetGroupProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    HealthCheckProtocolVersion m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;

    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
