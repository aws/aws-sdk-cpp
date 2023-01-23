/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/StorageUnit.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>An object that represents the metadata and configuration settings for the NFS
   * (Network File System) service on an Amazon Web Services Snow Family
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/NFSOnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class NFSOnDeviceServiceConfiguration
  {
  public:
    AWS_SNOWBALL_API NFSOnDeviceServiceConfiguration();
    AWS_SNOWBALL_API NFSOnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API NFSOnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum NFS storage for one Snow Family device.</p>
     */
    inline int GetStorageLimit() const{ return m_storageLimit; }

    /**
     * <p>The maximum NFS storage for one Snow Family device.</p>
     */
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }

    /**
     * <p>The maximum NFS storage for one Snow Family device.</p>
     */
    inline void SetStorageLimit(int value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }

    /**
     * <p>The maximum NFS storage for one Snow Family device.</p>
     */
    inline NFSOnDeviceServiceConfiguration& WithStorageLimit(int value) { SetStorageLimit(value); return *this;}


    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline const StorageUnit& GetStorageUnit() const{ return m_storageUnit; }

    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline bool StorageUnitHasBeenSet() const { return m_storageUnitHasBeenSet; }

    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline void SetStorageUnit(const StorageUnit& value) { m_storageUnitHasBeenSet = true; m_storageUnit = value; }

    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline void SetStorageUnit(StorageUnit&& value) { m_storageUnitHasBeenSet = true; m_storageUnit = std::move(value); }

    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline NFSOnDeviceServiceConfiguration& WithStorageUnit(const StorageUnit& value) { SetStorageUnit(value); return *this;}

    /**
     * <p>The scale unit of the NFS storage on the device.</p> <p>Valid values: TB.</p>
     */
    inline NFSOnDeviceServiceConfiguration& WithStorageUnit(StorageUnit&& value) { SetStorageUnit(std::move(value)); return *this;}

  private:

    int m_storageLimit;
    bool m_storageLimitHasBeenSet = false;

    StorageUnit m_storageUnit;
    bool m_storageUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
