/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about the subnets and security groups for an Amazon OpenSearch
   * Service domain provisioned within a virtual private cloud (VPC). For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
   * your Amazon OpenSearch Service domains using a VPC</a>. This information only
   * exists if the domain was created with <code>VPCOptions</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VPCDerivedInfo">AWS
   * API Reference</a></p>
   */
  class VPCDerivedInfo
  {
  public:
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfo();
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline VPCDerivedInfo& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline VPCDerivedInfo& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID for your VPC. Amazon VPC generates this value when you create a
     * VPC.</p>
     */
    inline VPCDerivedInfo& WithVPCId(const char* value) { SetVPCId(value); return *this;}


    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline VPCDerivedInfo& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline VPCDerivedInfo& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline VPCDerivedInfo& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline VPCDerivedInfo& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline VPCDerivedInfo& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline VPCDerivedInfo& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
