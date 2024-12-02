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
    AWS_VPCLATTICE_API TargetGroupSummary();
    AWS_VPCLATTICE_API TargetGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TargetGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TargetGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TargetGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TargetGroupSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TargetGroupSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TargetGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TargetGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TargetGroupSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>IPV4</code> and <code>IPV6</code>. This is an optional parameter. If not
     * specified, the default is <code>IPV4</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline TargetGroupSummary& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline TargetGroupSummary& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the event structure that your Lambda function receives.
     * Supported only if the target group type is <code>LAMBDA</code>.</p>
     */
    inline const LambdaEventStructureVersion& GetLambdaEventStructureVersion() const{ return m_lambdaEventStructureVersion; }
    inline bool LambdaEventStructureVersionHasBeenSet() const { return m_lambdaEventStructureVersionHasBeenSet; }
    inline void SetLambdaEventStructureVersion(const LambdaEventStructureVersion& value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = value; }
    inline void SetLambdaEventStructureVersion(LambdaEventStructureVersion&& value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = std::move(value); }
    inline TargetGroupSummary& WithLambdaEventStructureVersion(const LambdaEventStructureVersion& value) { SetLambdaEventStructureVersion(value); return *this;}
    inline TargetGroupSummary& WithLambdaEventStructureVersion(LambdaEventStructureVersion&& value) { SetLambdaEventStructureVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline TargetGroupSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline TargetGroupSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TargetGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TargetGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TargetGroupSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the target group.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetGroupSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of the target group.</p>
     */
    inline const TargetGroupProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const TargetGroupProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(TargetGroupProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline TargetGroupSummary& WithProtocol(const TargetGroupProtocol& value) { SetProtocol(value); return *this;}
    inline TargetGroupSummary& WithProtocol(TargetGroupProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const{ return m_serviceArns; }
    inline bool ServiceArnsHasBeenSet() const { return m_serviceArnsHasBeenSet; }
    inline void SetServiceArns(const Aws::Vector<Aws::String>& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = value; }
    inline void SetServiceArns(Aws::Vector<Aws::String>&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::move(value); }
    inline TargetGroupSummary& WithServiceArns(const Aws::Vector<Aws::String>& value) { SetServiceArns(value); return *this;}
    inline TargetGroupSummary& WithServiceArns(Aws::Vector<Aws::String>&& value) { SetServiceArns(std::move(value)); return *this;}
    inline TargetGroupSummary& AddServiceArns(const Aws::String& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }
    inline TargetGroupSummary& AddServiceArns(Aws::String&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(std::move(value)); return *this; }
    inline TargetGroupSummary& AddServiceArns(const char* value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const TargetGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TargetGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TargetGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TargetGroupSummary& WithStatus(const TargetGroupStatus& value) { SetStatus(value); return *this;}
    inline TargetGroupSummary& WithStatus(TargetGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group type.</p>
     */
    inline const TargetGroupType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TargetGroupType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TargetGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TargetGroupSummary& WithType(const TargetGroupType& value) { SetType(value); return *this;}
    inline TargetGroupSummary& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const{ return m_vpcIdentifier; }
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
    inline void SetVpcIdentifier(const Aws::String& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = value; }
    inline void SetVpcIdentifier(Aws::String&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::move(value); }
    inline void SetVpcIdentifier(const char* value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier.assign(value); }
    inline TargetGroupSummary& WithVpcIdentifier(const Aws::String& value) { SetVpcIdentifier(value); return *this;}
    inline TargetGroupSummary& WithVpcIdentifier(Aws::String&& value) { SetVpcIdentifier(std::move(value)); return *this;}
    inline TargetGroupSummary& WithVpcIdentifier(const char* value) { SetVpcIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    LambdaEventStructureVersion m_lambdaEventStructureVersion;
    bool m_lambdaEventStructureVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    TargetGroupProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceArns;
    bool m_serviceArnsHasBeenSet = false;

    TargetGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    TargetGroupType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
