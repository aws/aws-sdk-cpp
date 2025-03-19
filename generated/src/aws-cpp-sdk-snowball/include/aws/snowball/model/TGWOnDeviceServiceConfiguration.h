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
   * <p>An object that represents the metadata and configuration settings for the
   * Storage Gateway service Tape Gateway type on an Amazon Web Services Snow Family
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/TGWOnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class TGWOnDeviceServiceConfiguration
  {
  public:
    AWS_SNOWBALL_API TGWOnDeviceServiceConfiguration() = default;
    AWS_SNOWBALL_API TGWOnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API TGWOnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of virtual tapes to store on one Snow Family device. Due
     * to physical resource limitations, this value must be set to 80 for Snowball
     * Edge.</p>
     */
    inline int GetStorageLimit() const { return m_storageLimit; }
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }
    inline void SetStorageLimit(int value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }
    inline TGWOnDeviceServiceConfiguration& WithStorageLimit(int value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale unit of the virtual tapes on the device.</p>
     */
    inline StorageUnit GetStorageUnit() const { return m_storageUnit; }
    inline bool StorageUnitHasBeenSet() const { return m_storageUnitHasBeenSet; }
    inline void SetStorageUnit(StorageUnit value) { m_storageUnitHasBeenSet = true; m_storageUnit = value; }
    inline TGWOnDeviceServiceConfiguration& WithStorageUnit(StorageUnit value) { SetStorageUnit(value); return *this;}
    ///@}
  private:

    int m_storageLimit{0};
    bool m_storageLimitHasBeenSet = false;

    StorageUnit m_storageUnit{StorageUnit::NOT_SET};
    bool m_storageUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
