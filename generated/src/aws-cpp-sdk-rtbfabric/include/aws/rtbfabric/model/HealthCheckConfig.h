/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/Protocol.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>The health check configuration for a managed endpoint. Defines how the
 * service probes instances in the Auto Scaling group to determine their health
 * status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/HealthCheckConfig">AWS
 * API Reference</a></p>
 */
class HealthCheckConfig {
 public:
  AWS_RTBFABRIC_API HealthCheckConfig() = default;
  AWS_RTBFABRIC_API HealthCheckConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API HealthCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port to use for health check probes. Valid range is 80 to 65535.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline HealthCheckConfig& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination path for the health check request. Must start with
   * <code>/</code>.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  HealthCheckConfig& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol to use for health check probes.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline HealthCheckConfig& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout for each health check probe, in milliseconds. Valid range is 100
   * to 5000.</p>
   */
  inline int GetTimeoutMs() const { return m_timeoutMs; }
  inline bool TimeoutMsHasBeenSet() const { return m_timeoutMsHasBeenSet; }
  inline void SetTimeoutMs(int value) {
    m_timeoutMsHasBeenSet = true;
    m_timeoutMs = value;
  }
  inline HealthCheckConfig& WithTimeoutMs(int value) {
    SetTimeoutMs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval between health check probes, in seconds. Valid range is 5 to
   * 60.</p>
   */
  inline int GetIntervalSeconds() const { return m_intervalSeconds; }
  inline bool IntervalSecondsHasBeenSet() const { return m_intervalSecondsHasBeenSet; }
  inline void SetIntervalSeconds(int value) {
    m_intervalSecondsHasBeenSet = true;
    m_intervalSeconds = value;
  }
  inline HealthCheckConfig& WithIntervalSeconds(int value) {
    SetIntervalSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected HTTP status code or status code pattern from healthy instances.
   * Supports a single code (for example, <code>200</code>), a range (for example,
   * <code>200-299</code>), or a comma-separated list (for example,
   * <code>200,204</code>).</p>
   */
  inline const Aws::String& GetStatusCodeMatcher() const { return m_statusCodeMatcher; }
  inline bool StatusCodeMatcherHasBeenSet() const { return m_statusCodeMatcherHasBeenSet; }
  template <typename StatusCodeMatcherT = Aws::String>
  void SetStatusCodeMatcher(StatusCodeMatcherT&& value) {
    m_statusCodeMatcherHasBeenSet = true;
    m_statusCodeMatcher = std::forward<StatusCodeMatcherT>(value);
  }
  template <typename StatusCodeMatcherT = Aws::String>
  HealthCheckConfig& WithStatusCodeMatcher(StatusCodeMatcherT&& value) {
    SetStatusCodeMatcher(std::forward<StatusCodeMatcherT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive successful health checks required before an
   * instance is considered healthy. Valid range is 2 to 10.</p>
   */
  inline int GetHealthyThresholdCount() const { return m_healthyThresholdCount; }
  inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
  inline void SetHealthyThresholdCount(int value) {
    m_healthyThresholdCountHasBeenSet = true;
    m_healthyThresholdCount = value;
  }
  inline HealthCheckConfig& WithHealthyThresholdCount(int value) {
    SetHealthyThresholdCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive failed health checks required before an instance is
   * considered unhealthy. Valid range is 2 to 10.</p>
   */
  inline int GetUnhealthyThresholdCount() const { return m_unhealthyThresholdCount; }
  inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
  inline void SetUnhealthyThresholdCount(int value) {
    m_unhealthyThresholdCountHasBeenSet = true;
    m_unhealthyThresholdCount = value;
  }
  inline HealthCheckConfig& WithUnhealthyThresholdCount(int value) {
    SetUnhealthyThresholdCount(value);
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  Aws::String m_path;

  Protocol m_protocol{Protocol::NOT_SET};

  int m_timeoutMs{0};

  int m_intervalSeconds{0};

  Aws::String m_statusCodeMatcher;

  int m_healthyThresholdCount{0};

  int m_unhealthyThresholdCount{0};
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_timeoutMsHasBeenSet = false;
  bool m_intervalSecondsHasBeenSet = false;
  bool m_statusCodeMatcherHasBeenSet = false;
  bool m_healthyThresholdCountHasBeenSet = false;
  bool m_unhealthyThresholdCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
