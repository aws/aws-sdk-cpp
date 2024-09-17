/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Elastic Load Balancing instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ElasticLoadBalancer">AWS
   * API Reference</a></p>
   */
  class ElasticLoadBalancer
  {
  public:
    AWS_OPSWORKS_API ElasticLoadBalancer();
    AWS_OPSWORKS_API ElasticLoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API ElasticLoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elastic Load Balancing instance name.</p>
     */
    inline const Aws::String& GetElasticLoadBalancerName() const{ return m_elasticLoadBalancerName; }
    inline bool ElasticLoadBalancerNameHasBeenSet() const { return m_elasticLoadBalancerNameHasBeenSet; }
    inline void SetElasticLoadBalancerName(const Aws::String& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = value; }
    inline void SetElasticLoadBalancerName(Aws::String&& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = std::move(value); }
    inline void SetElasticLoadBalancerName(const char* value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName.assign(value); }
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(const Aws::String& value) { SetElasticLoadBalancerName(value); return *this;}
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(Aws::String&& value) { SetElasticLoadBalancerName(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithElasticLoadBalancerName(const char* value) { SetElasticLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ElasticLoadBalancer& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ElasticLoadBalancer& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's public DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline ElasticLoadBalancer& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline ElasticLoadBalancer& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack with which the instance is associated.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline ElasticLoadBalancer& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline ElasticLoadBalancer& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the layer to which the instance is attached.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }
    inline ElasticLoadBalancer& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}
    inline ElasticLoadBalancer& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithLayerId(const char* value) { SetLayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ElasticLoadBalancer& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ElasticLoadBalancer& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ElasticLoadBalancer& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline ElasticLoadBalancer& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline ElasticLoadBalancer& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline ElasticLoadBalancer& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline ElasticLoadBalancer& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline ElasticLoadBalancer& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline ElasticLoadBalancer& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline ElasticLoadBalancer& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline ElasticLoadBalancer& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline ElasticLoadBalancer& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline ElasticLoadBalancer& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the EC2 instances for which the Elastic Load Balancing instance is
     * managing traffic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2InstanceIds() const{ return m_ec2InstanceIds; }
    inline bool Ec2InstanceIdsHasBeenSet() const { return m_ec2InstanceIdsHasBeenSet; }
    inline void SetEc2InstanceIds(const Aws::Vector<Aws::String>& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds = value; }
    inline void SetEc2InstanceIds(Aws::Vector<Aws::String>&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds = std::move(value); }
    inline ElasticLoadBalancer& WithEc2InstanceIds(const Aws::Vector<Aws::String>& value) { SetEc2InstanceIds(value); return *this;}
    inline ElasticLoadBalancer& WithEc2InstanceIds(Aws::Vector<Aws::String>&& value) { SetEc2InstanceIds(std::move(value)); return *this;}
    inline ElasticLoadBalancer& AddEc2InstanceIds(const Aws::String& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(value); return *this; }
    inline ElasticLoadBalancer& AddEc2InstanceIds(Aws::String&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(std::move(value)); return *this; }
    inline ElasticLoadBalancer& AddEc2InstanceIds(const char* value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_elasticLoadBalancerName;
    bool m_elasticLoadBalancerNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2InstanceIds;
    bool m_ec2InstanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
