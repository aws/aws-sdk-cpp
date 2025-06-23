/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/TenancyEnum.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines instance placement configuration for WorkSpace
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/Placement">AWS
   * API Reference</a></p>
   */
  class Placement
  {
  public:
    AWS_WORKSPACESINSTANCES_API Placement() = default;
    AWS_WORKSPACESINSTANCES_API Placement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Placement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies host affinity for dedicated instances.</p>
     */
    inline const Aws::String& GetAffinity() const { return m_affinity; }
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }
    template<typename AffinityT = Aws::String>
    void SetAffinity(AffinityT&& value) { m_affinityHasBeenSet = true; m_affinity = std::forward<AffinityT>(value); }
    template<typename AffinityT = Aws::String>
    Placement& WithAffinity(AffinityT&& value) { SetAffinity(std::forward<AffinityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the specific AWS availability zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Placement& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for placement group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    Placement& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the placement group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    Placement& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the specific dedicated host.</p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    Placement& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the host resource group.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const { return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    template<typename HostResourceGroupArnT = Aws::String>
    void SetHostResourceGroupArn(HostResourceGroupArnT&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::forward<HostResourceGroupArnT>(value); }
    template<typename HostResourceGroupArnT = Aws::String>
    Placement& WithHostResourceGroupArn(HostResourceGroupArnT&& value) { SetHostResourceGroupArn(std::forward<HostResourceGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies partition number for partition placement groups.</p>
     */
    inline int GetPartitionNumber() const { return m_partitionNumber; }
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }
    inline Placement& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines instance tenancy configuration.</p>
     */
    inline TenancyEnum GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(TenancyEnum value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline Placement& WithTenancy(TenancyEnum value) { SetTenancy(value); return *this;}
    ///@}
  private:

    Aws::String m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    int m_partitionNumber{0};
    bool m_partitionNumberHasBeenSet = false;

    TenancyEnum m_tenancy{TenancyEnum::NOT_SET};
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
