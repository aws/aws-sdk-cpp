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
    AWS_OPSWORKS_API DescribeVolumesRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DescribeVolumesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DescribeVolumesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DescribeVolumesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stack ID. The action describes the stack's registered Amazon EBS
     * volumes.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DescribeVolumesRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeVolumesRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeVolumesRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAID array ID. If you use this parameter, <code>DescribeVolumes</code>
     * returns descriptions of the volumes associated with the specified RAID
     * array.</p>
     */
    inline const Aws::String& GetRaidArrayId() const{ return m_raidArrayId; }
    inline bool RaidArrayIdHasBeenSet() const { return m_raidArrayIdHasBeenSet; }
    inline void SetRaidArrayId(const Aws::String& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = value; }
    inline void SetRaidArrayId(Aws::String&& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = std::move(value); }
    inline void SetRaidArrayId(const char* value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId.assign(value); }
    inline DescribeVolumesRequest& WithRaidArrayId(const Aws::String& value) { SetRaidArrayId(value); return *this;}
    inline DescribeVolumesRequest& WithRaidArrayId(Aws::String&& value) { SetRaidArrayId(std::move(value)); return *this;}
    inline DescribeVolumesRequest& WithRaidArrayId(const char* value) { SetRaidArrayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Am array of volume IDs. If you use this parameter,
     * <code>DescribeVolumes</code> returns descriptions of the specified volumes.
     * Otherwise, it returns a description of every volume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }
    inline DescribeVolumesRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}
    inline DescribeVolumesRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}
    inline DescribeVolumesRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }
    inline DescribeVolumesRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }
    inline DescribeVolumesRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }
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
