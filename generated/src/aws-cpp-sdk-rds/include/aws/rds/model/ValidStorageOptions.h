﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Range.h>
#include <aws/rds/model/DoubleRange.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Information about valid modifications that you can make to your DB instance.
   * Contains the result of a successful call to the
   * <code>DescribeValidDBInstanceModifications</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ValidStorageOptions">AWS
   * API Reference</a></p>
   */
  class ValidStorageOptions
  {
  public:
    AWS_RDS_API ValidStorageOptions();
    AWS_RDS_API ValidStorageOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ValidStorageOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The valid storage types for your DB instance. For example: gp2, gp3, io1,
     * io2.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline ValidStorageOptions& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline ValidStorageOptions& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline ValidStorageOptions& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of storage in gibibytes (GiB). For example, 100 to
     * 16,384.</p>
     */
    inline const Aws::Vector<Range>& GetStorageSize() const{ return m_storageSize; }
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }
    inline void SetStorageSize(const Aws::Vector<Range>& value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }
    inline void SetStorageSize(Aws::Vector<Range>&& value) { m_storageSizeHasBeenSet = true; m_storageSize = std::move(value); }
    inline ValidStorageOptions& WithStorageSize(const Aws::Vector<Range>& value) { SetStorageSize(value); return *this;}
    inline ValidStorageOptions& WithStorageSize(Aws::Vector<Range>&& value) { SetStorageSize(std::move(value)); return *this;}
    inline ValidStorageOptions& AddStorageSize(const Range& value) { m_storageSizeHasBeenSet = true; m_storageSize.push_back(value); return *this; }
    inline ValidStorageOptions& AddStorageSize(Range&& value) { m_storageSizeHasBeenSet = true; m_storageSize.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-256,000.</p>
     */
    inline const Aws::Vector<Range>& GetProvisionedIops() const{ return m_provisionedIops; }
    inline bool ProvisionedIopsHasBeenSet() const { return m_provisionedIopsHasBeenSet; }
    inline void SetProvisionedIops(const Aws::Vector<Range>& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops = value; }
    inline void SetProvisionedIops(Aws::Vector<Range>&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops = std::move(value); }
    inline ValidStorageOptions& WithProvisionedIops(const Aws::Vector<Range>& value) { SetProvisionedIops(value); return *this;}
    inline ValidStorageOptions& WithProvisionedIops(Aws::Vector<Range>&& value) { SetProvisionedIops(std::move(value)); return *this;}
    inline ValidStorageOptions& AddProvisionedIops(const Range& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops.push_back(value); return *this; }
    inline ValidStorageOptions& AddProvisionedIops(Range&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline const Aws::Vector<DoubleRange>& GetIopsToStorageRatio() const{ return m_iopsToStorageRatio; }
    inline bool IopsToStorageRatioHasBeenSet() const { return m_iopsToStorageRatioHasBeenSet; }
    inline void SetIopsToStorageRatio(const Aws::Vector<DoubleRange>& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio = value; }
    inline void SetIopsToStorageRatio(Aws::Vector<DoubleRange>&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio = std::move(value); }
    inline ValidStorageOptions& WithIopsToStorageRatio(const Aws::Vector<DoubleRange>& value) { SetIopsToStorageRatio(value); return *this;}
    inline ValidStorageOptions& WithIopsToStorageRatio(Aws::Vector<DoubleRange>&& value) { SetIopsToStorageRatio(std::move(value)); return *this;}
    inline ValidStorageOptions& AddIopsToStorageRatio(const DoubleRange& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio.push_back(value); return *this; }
    inline ValidStorageOptions& AddIopsToStorageRatio(DoubleRange&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not Amazon RDS can automatically scale storage for DB
     * instances that use the new instance class.</p>
     */
    inline bool GetSupportsStorageAutoscaling() const{ return m_supportsStorageAutoscaling; }
    inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }
    inline void SetSupportsStorageAutoscaling(bool value) { m_supportsStorageAutoscalingHasBeenSet = true; m_supportsStorageAutoscaling = value; }
    inline ValidStorageOptions& WithSupportsStorageAutoscaling(bool value) { SetSupportsStorageAutoscaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of provisioned storage throughput. For example, 500-4,000
     * mebibytes per second (MiBps).</p>
     */
    inline const Aws::Vector<Range>& GetProvisionedStorageThroughput() const{ return m_provisionedStorageThroughput; }
    inline bool ProvisionedStorageThroughputHasBeenSet() const { return m_provisionedStorageThroughputHasBeenSet; }
    inline void SetProvisionedStorageThroughput(const Aws::Vector<Range>& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput = value; }
    inline void SetProvisionedStorageThroughput(Aws::Vector<Range>&& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput = std::move(value); }
    inline ValidStorageOptions& WithProvisionedStorageThroughput(const Aws::Vector<Range>& value) { SetProvisionedStorageThroughput(value); return *this;}
    inline ValidStorageOptions& WithProvisionedStorageThroughput(Aws::Vector<Range>&& value) { SetProvisionedStorageThroughput(std::move(value)); return *this;}
    inline ValidStorageOptions& AddProvisionedStorageThroughput(const Range& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput.push_back(value); return *this; }
    inline ValidStorageOptions& AddProvisionedStorageThroughput(Range&& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of storage throughput to provisioned IOPS ratios. For
     * example, 0-0.25.</p>
     */
    inline const Aws::Vector<DoubleRange>& GetStorageThroughputToIopsRatio() const{ return m_storageThroughputToIopsRatio; }
    inline bool StorageThroughputToIopsRatioHasBeenSet() const { return m_storageThroughputToIopsRatioHasBeenSet; }
    inline void SetStorageThroughputToIopsRatio(const Aws::Vector<DoubleRange>& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio = value; }
    inline void SetStorageThroughputToIopsRatio(Aws::Vector<DoubleRange>&& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio = std::move(value); }
    inline ValidStorageOptions& WithStorageThroughputToIopsRatio(const Aws::Vector<DoubleRange>& value) { SetStorageThroughputToIopsRatio(value); return *this;}
    inline ValidStorageOptions& WithStorageThroughputToIopsRatio(Aws::Vector<DoubleRange>&& value) { SetStorageThroughputToIopsRatio(std::move(value)); return *this;}
    inline ValidStorageOptions& AddStorageThroughputToIopsRatio(const DoubleRange& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio.push_back(value); return *this; }
    inline ValidStorageOptions& AddStorageThroughputToIopsRatio(DoubleRange&& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Range> m_storageSize;
    bool m_storageSizeHasBeenSet = false;

    Aws::Vector<Range> m_provisionedIops;
    bool m_provisionedIopsHasBeenSet = false;

    Aws::Vector<DoubleRange> m_iopsToStorageRatio;
    bool m_iopsToStorageRatioHasBeenSet = false;

    bool m_supportsStorageAutoscaling;
    bool m_supportsStorageAutoscalingHasBeenSet = false;

    Aws::Vector<Range> m_provisionedStorageThroughput;
    bool m_provisionedStorageThroughputHasBeenSet = false;

    Aws::Vector<DoubleRange> m_storageThroughputToIopsRatio;
    bool m_storageThroughputToIopsRatioHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
