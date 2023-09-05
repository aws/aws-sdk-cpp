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
   * <p>Summary information about a target group.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline TargetGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline TargetGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the target group.</p>
     */
    inline TargetGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline TargetGroupSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline TargetGroupSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the target group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the target group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the target group.</p>
     */
    inline TargetGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline TargetGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline TargetGroupSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline TargetGroupSummary& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The type of IP address used for the target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline TargetGroupSummary& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>Lambda event structure version</p>
     */
    inline const LambdaEventStructureVersion& GetLambdaEventStructureVersion() const{ return m_lambdaEventStructureVersion; }

    /**
     * <p>Lambda event structure version</p>
     */
    inline bool LambdaEventStructureVersionHasBeenSet() const { return m_lambdaEventStructureVersionHasBeenSet; }

    /**
     * <p>Lambda event structure version</p>
     */
    inline void SetLambdaEventStructureVersion(const LambdaEventStructureVersion& value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = value; }

    /**
     * <p>Lambda event structure version</p>
     */
    inline void SetLambdaEventStructureVersion(LambdaEventStructureVersion&& value) { m_lambdaEventStructureVersionHasBeenSet = true; m_lambdaEventStructureVersion = std::move(value); }

    /**
     * <p>Lambda event structure version</p>
     */
    inline TargetGroupSummary& WithLambdaEventStructureVersion(const LambdaEventStructureVersion& value) { SetLambdaEventStructureVersion(value); return *this;}

    /**
     * <p>Lambda event structure version</p>
     */
    inline TargetGroupSummary& WithLambdaEventStructureVersion(LambdaEventStructureVersion&& value) { SetLambdaEventStructureVersion(std::move(value)); return *this;}


    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline TargetGroupSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline TargetGroupSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the target group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The port of the target group.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port of the target group.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port of the target group.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port of the target group.</p>
     */
    inline TargetGroupSummary& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol of the target group.</p>
     */
    inline const TargetGroupProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of the target group.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol of the target group.</p>
     */
    inline void SetProtocol(const TargetGroupProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol of the target group.</p>
     */
    inline void SetProtocol(TargetGroupProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol of the target group.</p>
     */
    inline TargetGroupSummary& WithProtocol(const TargetGroupProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of the target group.</p>
     */
    inline TargetGroupSummary& WithProtocol(TargetGroupProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const{ return m_serviceArns; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline bool ServiceArnsHasBeenSet() const { return m_serviceArnsHasBeenSet; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline void SetServiceArns(const Aws::Vector<Aws::String>& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = value; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline void SetServiceArns(Aws::Vector<Aws::String>&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::move(value); }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline TargetGroupSummary& WithServiceArns(const Aws::Vector<Aws::String>& value) { SetServiceArns(value); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline TargetGroupSummary& WithServiceArns(Aws::Vector<Aws::String>&& value) { SetServiceArns(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline TargetGroupSummary& AddServiceArns(const Aws::String& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline TargetGroupSummary& AddServiceArns(Aws::String&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) of the service.</p>
     */
    inline TargetGroupSummary& AddServiceArns(const char* value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }


    /**
     * <p>The status.</p>
     */
    inline const TargetGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const TargetGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(TargetGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline TargetGroupSummary& WithStatus(const TargetGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline TargetGroupSummary& WithStatus(TargetGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The target group type.</p>
     */
    inline const TargetGroupType& GetType() const{ return m_type; }

    /**
     * <p>The target group type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetType(const TargetGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetType(TargetGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The target group type.</p>
     */
    inline TargetGroupSummary& WithType(const TargetGroupType& value) { SetType(value); return *this;}

    /**
     * <p>The target group type.</p>
     */
    inline TargetGroupSummary& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const{ return m_vpcIdentifier; }

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline void SetVpcIdentifier(const Aws::String& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = value; }

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline void SetVpcIdentifier(Aws::String&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::move(value); }

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline void SetVpcIdentifier(const char* value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier.assign(value); }

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline TargetGroupSummary& WithVpcIdentifier(const Aws::String& value) { SetVpcIdentifier(value); return *this;}

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline TargetGroupSummary& WithVpcIdentifier(Aws::String&& value) { SetVpcIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC of the target group.</p>
     */
    inline TargetGroupSummary& WithVpcIdentifier(const char* value) { SetVpcIdentifier(value); return *this;}

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
