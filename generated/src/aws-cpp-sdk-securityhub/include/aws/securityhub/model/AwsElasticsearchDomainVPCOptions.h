/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainVPCOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainVPCOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainVPCOptions();
    AWS_SECURITYHUB_API AwsElasticsearchDomainVPCOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainVPCOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AwsElasticsearchDomainVPCOptions& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones associated with the VPC subnets.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


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
    inline AwsElasticsearchDomainVPCOptions& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


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
    inline AwsElasticsearchDomainVPCOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>ID for the VPC.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>ID for the VPC.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>ID for the VPC.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>ID for the VPC.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>ID for the VPC.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>ID for the VPC.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>ID for the VPC.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>ID for the VPC.</p>
     */
    inline AwsElasticsearchDomainVPCOptions& WithVPCId(const char* value) { SetVPCId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
