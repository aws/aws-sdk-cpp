/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Range.h>
#include <aws/neptune/model/DoubleRange.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
   * level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ValidStorageOptions">AWS
   * API Reference</a></p>
   */
  class ValidStorageOptions
  {
  public:
    AWS_NEPTUNE_API ValidStorageOptions() = default;
    AWS_NEPTUNE_API ValidStorageOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ValidStorageOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
     * level.</p>
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
     * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
     * level.</p>
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
     * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
     * level.</p>
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
     * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
     * level.</p>
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
  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Range> m_storageSize;
    bool m_storageSizeHasBeenSet = false;

    Aws::Vector<Range> m_provisionedIops;
    bool m_provisionedIopsHasBeenSet = false;

    Aws::Vector<DoubleRange> m_iopsToStorageRatio;
    bool m_iopsToStorageRatioHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
