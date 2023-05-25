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


    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration replicated disk device name.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Replication Configuration replicated disk IOPs.</p>
     */
    inline long long GetIops() const{ return m_iops; }

    /**
     * <p>Replication Configuration replicated disk IOPs.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Replication Configuration replicated disk IOPs.</p>
     */
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Replication Configuration replicated disk IOPs.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithIops(long long value) { SetIops(value); return *this;}


    /**
     * <p>Replication Configuration replicated disk boot disk.</p>
     */
    inline bool GetIsBootDisk() const{ return m_isBootDisk; }

    /**
     * <p>Replication Configuration replicated disk boot disk.</p>
     */
    inline bool IsBootDiskHasBeenSet() const { return m_isBootDiskHasBeenSet; }

    /**
     * <p>Replication Configuration replicated disk boot disk.</p>
     */
    inline void SetIsBootDisk(bool value) { m_isBootDiskHasBeenSet = true; m_isBootDisk = value; }

    /**
     * <p>Replication Configuration replicated disk boot disk.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithIsBootDisk(bool value) { SetIsBootDisk(value); return *this;}


    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline const ReplicationConfigurationReplicatedDiskStagingDiskType& GetStagingDiskType() const{ return m_stagingDiskType; }

    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline bool StagingDiskTypeHasBeenSet() const { return m_stagingDiskTypeHasBeenSet; }

    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline void SetStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = value; }

    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline void SetStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = std::move(value); }

    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { SetStagingDiskType(value); return *this;}

    /**
     * <p>Replication Configuration replicated disk staging disk type.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { SetStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>Replication Configuration replicated disk throughput.</p>
     */
    inline long long GetThroughput() const{ return m_throughput; }

    /**
     * <p>Replication Configuration replicated disk throughput.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>Replication Configuration replicated disk throughput.</p>
     */
    inline void SetThroughput(long long value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>Replication Configuration replicated disk throughput.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithThroughput(long long value) { SetThroughput(value); return *this;}

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
