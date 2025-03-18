/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p> Provides details about the placement of an Amazon EC2 instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataPlacementDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataPlacementDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPlacementDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPlacementDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataPlacementDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The affinity setting for an instance on an EC2 Dedicated Host. </p>
     */
    inline const Aws::String& GetAffinity() const { return m_affinity; }
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }
    template<typename AffinityT = Aws::String>
    void SetAffinity(AffinityT&& value) { m_affinityHasBeenSet = true; m_affinity = std::forward<AffinityT>(value); }
    template<typename AffinityT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithAffinity(AffinityT&& value) { SetAffinity(std::forward<AffinityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Availability Zone for the instance. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the placement group for the instance. </p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Dedicated Host for the instance. </p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the host resource group in which to launch
     * the instances. </p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const { return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    template<typename HostResourceGroupArnT = Aws::String>
    void SetHostResourceGroupArn(HostResourceGroupArnT&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::forward<HostResourceGroupArnT>(value); }
    template<typename HostResourceGroupArnT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithHostResourceGroupArn(HostResourceGroupArnT&& value) { SetHostResourceGroupArn(std::forward<HostResourceGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of the partition the instance should launch in. </p>
     */
    inline int GetPartitionNumber() const { return m_partitionNumber; }
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }
    inline AwsEc2LaunchTemplateDataPlacementDetails& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Reserved for future use. </p>
     */
    inline const Aws::String& GetSpreadDomain() const { return m_spreadDomain; }
    inline bool SpreadDomainHasBeenSet() const { return m_spreadDomainHasBeenSet; }
    template<typename SpreadDomainT = Aws::String>
    void SetSpreadDomain(SpreadDomainT&& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = std::forward<SpreadDomainT>(value); }
    template<typename SpreadDomainT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithSpreadDomain(SpreadDomainT&& value) { SetSpreadDomain(std::forward<SpreadDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware. </p>
     */
    inline const Aws::String& GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    template<typename TenancyT = Aws::String>
    void SetTenancy(TenancyT&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::forward<TenancyT>(value); }
    template<typename TenancyT = Aws::String>
    AwsEc2LaunchTemplateDataPlacementDetails& WithTenancy(TenancyT&& value) { SetTenancy(std::forward<TenancyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    int m_partitionNumber{0};
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet = false;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
