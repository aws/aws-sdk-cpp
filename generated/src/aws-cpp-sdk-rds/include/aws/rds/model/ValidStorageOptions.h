/**
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
    AWS_RDS_API ValidStorageOptions() = default;
    AWS_RDS_API ValidStorageOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ValidStorageOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The valid storage types for your DB instance. For example: gp2, gp3, io1,
     * io2.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    ValidStorageOptions& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of storage in gibibytes (GiB). For example, 100 to
     * 16,384.</p>
     */
    inline const Aws::Vector<Range>& GetStorageSize() const { return m_storageSize; }
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }
    template<typename StorageSizeT = Aws::Vector<Range>>
    void SetStorageSize(StorageSizeT&& value) { m_storageSizeHasBeenSet = true; m_storageSize = std::forward<StorageSizeT>(value); }
    template<typename StorageSizeT = Aws::Vector<Range>>
    ValidStorageOptions& WithStorageSize(StorageSizeT&& value) { SetStorageSize(std::forward<StorageSizeT>(value)); return *this;}
    template<typename StorageSizeT = Range>
    ValidStorageOptions& AddStorageSize(StorageSizeT&& value) { m_storageSizeHasBeenSet = true; m_storageSize.emplace_back(std::forward<StorageSizeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-256,000.</p>
     */
    inline const Aws::Vector<Range>& GetProvisionedIops() const { return m_provisionedIops; }
    inline bool ProvisionedIopsHasBeenSet() const { return m_provisionedIopsHasBeenSet; }
    template<typename ProvisionedIopsT = Aws::Vector<Range>>
    void SetProvisionedIops(ProvisionedIopsT&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops = std::forward<ProvisionedIopsT>(value); }
    template<typename ProvisionedIopsT = Aws::Vector<Range>>
    ValidStorageOptions& WithProvisionedIops(ProvisionedIopsT&& value) { SetProvisionedIops(std::forward<ProvisionedIopsT>(value)); return *this;}
    template<typename ProvisionedIopsT = Range>
    ValidStorageOptions& AddProvisionedIops(ProvisionedIopsT&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops.emplace_back(std::forward<ProvisionedIopsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline const Aws::Vector<DoubleRange>& GetIopsToStorageRatio() const { return m_iopsToStorageRatio; }
    inline bool IopsToStorageRatioHasBeenSet() const { return m_iopsToStorageRatioHasBeenSet; }
    template<typename IopsToStorageRatioT = Aws::Vector<DoubleRange>>
    void SetIopsToStorageRatio(IopsToStorageRatioT&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio = std::forward<IopsToStorageRatioT>(value); }
    template<typename IopsToStorageRatioT = Aws::Vector<DoubleRange>>
    ValidStorageOptions& WithIopsToStorageRatio(IopsToStorageRatioT&& value) { SetIopsToStorageRatio(std::forward<IopsToStorageRatioT>(value)); return *this;}
    template<typename IopsToStorageRatioT = DoubleRange>
    ValidStorageOptions& AddIopsToStorageRatio(IopsToStorageRatioT&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio.emplace_back(std::forward<IopsToStorageRatioT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not Amazon RDS can automatically scale storage for DB
     * instances that use the new instance class.</p>
     */
    inline bool GetSupportsStorageAutoscaling() const { return m_supportsStorageAutoscaling; }
    inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }
    inline void SetSupportsStorageAutoscaling(bool value) { m_supportsStorageAutoscalingHasBeenSet = true; m_supportsStorageAutoscaling = value; }
    inline ValidStorageOptions& WithSupportsStorageAutoscaling(bool value) { SetSupportsStorageAutoscaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of provisioned storage throughput. For example, 500-4,000
     * mebibytes per second (MiBps).</p>
     */
    inline const Aws::Vector<Range>& GetProvisionedStorageThroughput() const { return m_provisionedStorageThroughput; }
    inline bool ProvisionedStorageThroughputHasBeenSet() const { return m_provisionedStorageThroughputHasBeenSet; }
    template<typename ProvisionedStorageThroughputT = Aws::Vector<Range>>
    void SetProvisionedStorageThroughput(ProvisionedStorageThroughputT&& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput = std::forward<ProvisionedStorageThroughputT>(value); }
    template<typename ProvisionedStorageThroughputT = Aws::Vector<Range>>
    ValidStorageOptions& WithProvisionedStorageThroughput(ProvisionedStorageThroughputT&& value) { SetProvisionedStorageThroughput(std::forward<ProvisionedStorageThroughputT>(value)); return *this;}
    template<typename ProvisionedStorageThroughputT = Range>
    ValidStorageOptions& AddProvisionedStorageThroughput(ProvisionedStorageThroughputT&& value) { m_provisionedStorageThroughputHasBeenSet = true; m_provisionedStorageThroughput.emplace_back(std::forward<ProvisionedStorageThroughputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid range of storage throughput to provisioned IOPS ratios. For
     * example, 0-0.25.</p>
     */
    inline const Aws::Vector<DoubleRange>& GetStorageThroughputToIopsRatio() const { return m_storageThroughputToIopsRatio; }
    inline bool StorageThroughputToIopsRatioHasBeenSet() const { return m_storageThroughputToIopsRatioHasBeenSet; }
    template<typename StorageThroughputToIopsRatioT = Aws::Vector<DoubleRange>>
    void SetStorageThroughputToIopsRatio(StorageThroughputToIopsRatioT&& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio = std::forward<StorageThroughputToIopsRatioT>(value); }
    template<typename StorageThroughputToIopsRatioT = Aws::Vector<DoubleRange>>
    ValidStorageOptions& WithStorageThroughputToIopsRatio(StorageThroughputToIopsRatioT&& value) { SetStorageThroughputToIopsRatio(std::forward<StorageThroughputToIopsRatioT>(value)); return *this;}
    template<typename StorageThroughputToIopsRatioT = DoubleRange>
    ValidStorageOptions& AddStorageThroughputToIopsRatio(StorageThroughputToIopsRatioT&& value) { m_storageThroughputToIopsRatioHasBeenSet = true; m_storageThroughputToIopsRatio.emplace_back(std::forward<StorageThroughputToIopsRatioT>(value)); return *this; }
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

    bool m_supportsStorageAutoscaling{false};
    bool m_supportsStorageAutoscalingHasBeenSet = false;

    Aws::Vector<Range> m_provisionedStorageThroughput;
    bool m_provisionedStorageThroughputHasBeenSet = false;

    Aws::Vector<DoubleRange> m_storageThroughputToIopsRatio;
    bool m_storageThroughputToIopsRatioHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
