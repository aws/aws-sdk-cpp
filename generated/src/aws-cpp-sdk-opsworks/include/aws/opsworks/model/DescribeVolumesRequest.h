/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeVolumesRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeVolumesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumes"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeVolumes</code>
     * returns descriptions of the volumes associated with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeVolumesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stack ID. The action describes the stack's registered Amazon EBS
     * volumes.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeVolumesRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAID array ID. If you use this parameter, <code>DescribeVolumes</code>
     * returns descriptions of the volumes associated with the specified RAID
     * array.</p>
     */
    inline const Aws::String& GetRaidArrayId() const { return m_raidArrayId; }
    inline bool RaidArrayIdHasBeenSet() const { return m_raidArrayIdHasBeenSet; }
    template<typename RaidArrayIdT = Aws::String>
    void SetRaidArrayId(RaidArrayIdT&& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = std::forward<RaidArrayIdT>(value); }
    template<typename RaidArrayIdT = Aws::String>
    DescribeVolumesRequest& WithRaidArrayId(RaidArrayIdT&& value) { SetRaidArrayId(std::forward<RaidArrayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Am array of volume IDs. If you use this parameter,
     * <code>DescribeVolumes</code> returns descriptions of the specified volumes.
     * Otherwise, it returns a description of every volume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const { return m_volumeIds; }
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    void SetVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::forward<VolumeIdsT>(value); }
    template<typename VolumeIdsT = Aws::Vector<Aws::String>>
    DescribeVolumesRequest& WithVolumeIds(VolumeIdsT&& value) { SetVolumeIds(std::forward<VolumeIdsT>(value)); return *this;}
    template<typename VolumeIdsT = Aws::String>
    DescribeVolumesRequest& AddVolumeIds(VolumeIdsT&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.emplace_back(std::forward<VolumeIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_raidArrayId;
    bool m_raidArrayIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
