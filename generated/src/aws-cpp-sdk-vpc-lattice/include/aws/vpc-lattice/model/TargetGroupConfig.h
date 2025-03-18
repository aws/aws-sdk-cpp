/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/HealthCheckConfig.h>
#include <aws/vpc-lattice/model/IpAddressType.h>
#include <aws/vpc-lattice/model/LambdaEventStructureVersion.h>
#include <aws/vpc-lattice/model/TargetGroupProtocol.h>
#include <aws/vpc-lattice/model/TargetGroupProtocolVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the configuration of a target group.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/target-groups.html">Target
   * groups</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TargetGroupConfig">AWS
   * API Reference</a></p>
   */
  class TargetGroupConfig
  {
  public:
    AWS_VPCLATTICE_API TargetGroupConfig() = default;
    AWS_VPCLATTICE_API TargetGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health check configuration. Not supported if the target group type is
     * <code>LAMBDA</code> or <code>ALB</code>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = HealthCheckConfig>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = HealthCheckConfig>
    TargetGroupConfig& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address used for the target group. Supported only if the
     * target group type is <code>IP</code>. The default is <code>IPV4</code>.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline TargetGroupConfig& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the event structure that your Lambda function receives.
     * Supported only if the target group type is <code>LAMBDA</code>. The default is
     * <code>V1</code>.</p>
     */
    inline LambdaEventStructureVersion GetLambdaEventStructureVersion() const { return m_lambdaEventStructureVersion; }
    inline bool LambdaEventStructureVersionHasBeenSet() const { return m_lambdaEventStructureVersionHasBeenSet; }
    inline void SetLambdaEventStructureVersion(LambdaEventStructureVersion value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = value; }
    inline TargetGroupConfig& WithLambdaEventStructureVersion(LambdaEventStructureVersion value) { SetLambdaEventStructureVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the targets are listening. For HTTP, the default is 80. For
     * HTTPS, the default is 443. Not supported if the target group type is
     * <code>LAMBDA</code>.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetGroupConfig& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use for routing traffic to the targets. The default is the
     * protocol of the target group. Not supported if the target group type is
     * <code>LAMBDA</code>.</p>
     */
    inline TargetGroupProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(TargetGroupProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TargetGroupConfig& WithProtocol(TargetGroupProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol version. The default is <code>HTTP1</code>. Not supported if the
     * target group type is <code>LAMBDA</code>.</p>
     */
    inline TargetGroupProtocolVersion GetProtocolVersion() const { return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    inline void SetProtocolVersion(TargetGroupProtocolVersion value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }
    inline TargetGroupConfig& WithProtocolVersion(TargetGroupProtocolVersion value) { SetProtocolVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC. Not supported if the target group type is
     * <code>LAMBDA</code>.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const { return m_vpcIdentifier; }
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
    template<typename VpcIdentifierT = Aws::String>
    void SetVpcIdentifier(VpcIdentifierT&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::forward<VpcIdentifierT>(value); }
    template<typename VpcIdentifierT = Aws::String>
    TargetGroupConfig& WithVpcIdentifier(VpcIdentifierT&& value) { SetVpcIdentifier(std::forward<VpcIdentifierT>(value)); return *this;}
    ///@}
  private:

    HealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    LambdaEventStructureVersion m_lambdaEventStructureVersion{LambdaEventStructureVersion::NOT_SET};
    bool m_lambdaEventStructureVersionHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    TargetGroupProtocol m_protocol{TargetGroupProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    TargetGroupProtocolVersion m_protocolVersion{TargetGroupProtocolVersion::NOT_SET};
    bool m_protocolVersionHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
