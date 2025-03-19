/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/vpc-lattice/model/IpAddressType.h>
#include <aws/vpc-lattice/model/LambdaEventStructureVersion.h>
#include <aws/vpc-lattice/model/TargetGroupProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/TargetGroupStatus.h>
#include <aws/vpc-lattice/model/TargetGroupType.h>
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
   * <p>Summary information about a target group.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/target-groups.html">Target
   * groups</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TargetGroupSummary">AWS
   * API Reference</a></p>
   */
  class TargetGroupSummary
  {
  public:
    AWS_VPCLATTICE_API TargetGroupSummary() = default;
    AWS_VPCLATTICE_API TargetGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TargetGroupSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TargetGroupSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TargetGroupSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>IPV4</code> and <code>IPV6</code>. This is an optional parameter. If not
     * specified, the default is <code>IPV4</code>.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline TargetGroupSummary& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the event structure that your Lambda function receives.
     * Supported only if the target group type is <code>LAMBDA</code>.</p>
     */
    inline LambdaEventStructureVersion GetLambdaEventStructureVersion() const { return m_lambdaEventStructureVersion; }
    inline bool LambdaEventStructureVersionHasBeenSet() const { return m_lambdaEventStructureVersionHasBeenSet; }
    inline void SetLambdaEventStructureVersion(LambdaEventStructureVersion value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = value; }
    inline TargetGroupSummary& WithLambdaEventStructureVersion(LambdaEventStructureVersion value) { SetLambdaEventStructureVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    TargetGroupSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TargetGroupSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the target group.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetGroupSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of the target group.</p>
     */
    inline TargetGroupProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(TargetGroupProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TargetGroupSummary& WithProtocol(TargetGroupProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const { return m_serviceArns; }
    inline bool ServiceArnsHasBeenSet() const { return m_serviceArnsHasBeenSet; }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    void SetServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::forward<ServiceArnsT>(value); }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    TargetGroupSummary& WithServiceArns(ServiceArnsT&& value) { SetServiceArns(std::forward<ServiceArnsT>(value)); return *this;}
    template<typename ServiceArnsT = Aws::String>
    TargetGroupSummary& AddServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.emplace_back(std::forward<ServiceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline TargetGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TargetGroupSummary& WithStatus(TargetGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group type.</p>
     */
    inline TargetGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TargetGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TargetGroupSummary& WithType(TargetGroupType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const { return m_vpcIdentifier; }
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
    template<typename VpcIdentifierT = Aws::String>
    void SetVpcIdentifier(VpcIdentifierT&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::forward<VpcIdentifierT>(value); }
    template<typename VpcIdentifierT = Aws::String>
    TargetGroupSummary& WithVpcIdentifier(VpcIdentifierT&& value) { SetVpcIdentifier(std::forward<VpcIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    LambdaEventStructureVersion m_lambdaEventStructureVersion{LambdaEventStructureVersion::NOT_SET};
    bool m_lambdaEventStructureVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    TargetGroupProtocol m_protocol{TargetGroupProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceArns;
    bool m_serviceArnsHasBeenSet = false;

    TargetGroupStatus m_status{TargetGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TargetGroupType m_type{TargetGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
