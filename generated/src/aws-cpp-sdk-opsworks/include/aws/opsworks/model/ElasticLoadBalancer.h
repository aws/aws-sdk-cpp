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
    AWS_OPSWORKS_API ElasticLoadBalancer() = default;
    AWS_OPSWORKS_API ElasticLoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API ElasticLoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elastic Load Balancing instance name.</p>
     */
    inline const Aws::String& GetElasticLoadBalancerName() const { return m_elasticLoadBalancerName; }
    inline bool ElasticLoadBalancerNameHasBeenSet() const { return m_elasticLoadBalancerNameHasBeenSet; }
    template<typename ElasticLoadBalancerNameT = Aws::String>
    void SetElasticLoadBalancerName(ElasticLoadBalancerNameT&& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = std::forward<ElasticLoadBalancerNameT>(value); }
    template<typename ElasticLoadBalancerNameT = Aws::String>
    ElasticLoadBalancer& WithElasticLoadBalancerName(ElasticLoadBalancerNameT&& value) { SetElasticLoadBalancerName(std::forward<ElasticLoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ElasticLoadBalancer& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's public DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    ElasticLoadBalancer& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack with which the instance is associated.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    ElasticLoadBalancer& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the layer to which the instance is attached.</p>
     */
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    ElasticLoadBalancer& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ElasticLoadBalancer& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    ElasticLoadBalancer& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    ElasticLoadBalancer& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs, if the stack is running in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ElasticLoadBalancer& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ElasticLoadBalancer& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the EC2 instances for which the Elastic Load Balancing instance is
     * managing traffic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2InstanceIds() const { return m_ec2InstanceIds; }
    inline bool Ec2InstanceIdsHasBeenSet() const { return m_ec2InstanceIdsHasBeenSet; }
    template<typename Ec2InstanceIdsT = Aws::Vector<Aws::String>>
    void SetEc2InstanceIds(Ec2InstanceIdsT&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds = std::forward<Ec2InstanceIdsT>(value); }
    template<typename Ec2InstanceIdsT = Aws::Vector<Aws::String>>
    ElasticLoadBalancer& WithEc2InstanceIds(Ec2InstanceIdsT&& value) { SetEc2InstanceIds(std::forward<Ec2InstanceIdsT>(value)); return *this;}
    template<typename Ec2InstanceIdsT = Aws::String>
    ElasticLoadBalancer& AddEc2InstanceIds(Ec2InstanceIdsT&& value) { m_ec2InstanceIdsHasBeenSet = true; m_ec2InstanceIds.emplace_back(std::forward<Ec2InstanceIdsT>(value)); return *this; }
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
