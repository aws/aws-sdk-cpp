/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDiskStagingDiskType.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Replication Configuration replicated disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ReplicationConfigurationReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class ReplicationConfigurationReplicatedDisk
  {
  public:
    AWS_MGN_API ReplicationConfigurationReplicatedDisk();
    AWS_MGN_API ReplicationConfigurationReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ReplicationConfigurationReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration replicated disk IOPs.</p>
     */
    inline long long GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ReplicationConfigurationReplicatedDisk& WithIops(long long value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration replicated disk boot disk.</p>
     */
    inline bool GetIsBootDisk() const{ return m_isBootDisk; }
    inline bool IsBootDiskHasBeenSet() const { return m_isBootDiskHasBeenSet; }
    inline void SetIsBootDisk(bool value) { m_isBootDiskHasBeenSet = true; m_isBootDisk = value; }
    inline ReplicationConfigurationReplicatedDisk& WithIsBootDisk(bool value) { SetIsBootDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline const ReplicationConfigurationReplicatedDiskStagingDiskType& GetStagingDiskType() const{ return m_stagingDiskType; }
    inline bool StagingDiskTypeHasBeenSet() const { return m_stagingDiskTypeHasBeenSet; }
    inline void SetStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = value; }
    inline void SetStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = std::move(value); }
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { SetStagingDiskType(value); return *this;}
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { SetStagingDiskType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration replicated disk throughput.</p>
     */
    inline long long GetThroughput() const{ return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(long long value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline ReplicationConfigurationReplicatedDisk& WithThroughput(long long value) { SetThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    long long m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_isBootDisk;
    bool m_isBootDiskHasBeenSet = false;

    ReplicationConfigurationReplicatedDiskStagingDiskType m_stagingDiskType;
    bool m_stagingDiskTypeHasBeenSet = false;

    long long m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
