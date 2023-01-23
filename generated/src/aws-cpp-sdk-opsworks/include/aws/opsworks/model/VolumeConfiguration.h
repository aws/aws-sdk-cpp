/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/VolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class VolumeConfiguration
  {
  public:
    AWS_OPSWORKS_API VolumeConfiguration();
    AWS_OPSWORKS_API VolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API VolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}


    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline int GetRaidLevel() const{ return m_raidLevel; }

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline bool RaidLevelHasBeenSet() const { return m_raidLevelHasBeenSet; }

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline void SetRaidLevel(int value) { m_raidLevelHasBeenSet = true; m_raidLevel = value; }

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline VolumeConfiguration& WithRaidLevel(int value) { SetRaidLevel(value); return *this;}


    /**
     * <p>The number of disks in the volume.</p>
     */
    inline int GetNumberOfDisks() const{ return m_numberOfDisks; }

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline bool NumberOfDisksHasBeenSet() const { return m_numberOfDisksHasBeenSet; }

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline void SetNumberOfDisks(int value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline VolumeConfiguration& WithNumberOfDisks(int value) { SetNumberOfDisks(value); return *this;}


    /**
     * <p>The volume size.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The volume size.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The volume size.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The volume size.</p>
     */
    inline VolumeConfiguration& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline VolumeConfiguration& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline VolumeConfiguration& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;

    int m_raidLevel;
    bool m_raidLevelHasBeenSet = false;

    int m_numberOfDisks;
    bool m_numberOfDisksHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
