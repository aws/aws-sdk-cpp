﻿/**
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
   * <p>Amazon S3 compatible storage on Snow family devices configuration
   * items.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/S3OnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class S3OnDeviceServiceConfiguration
  {
  public:
    AWS_SNOWBALL_API S3OnDeviceServiceConfiguration() = default;
    AWS_SNOWBALL_API S3OnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API S3OnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the specified storage limit value matches storage limit of one of the
     * defined configurations, that configuration will be used. If the specified
     * storage limit value does not match any defined configuration, the request will
     * fail. If more than one configuration has the same storage limit as specified,
     * the other input need to be provided.</p>
     */
    inline double GetStorageLimit() const { return m_storageLimit; }
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }
    inline void SetStorageLimit(double value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }
    inline S3OnDeviceServiceConfiguration& WithStorageLimit(double value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Storage unit. Currently the only supported unit is TB.</p>
     */
    inline StorageUnit GetStorageUnit() const { return m_storageUnit; }
    inline bool StorageUnitHasBeenSet() const { return m_storageUnitHasBeenSet; }
    inline void SetStorageUnit(StorageUnit value) { m_storageUnitHasBeenSet = true; m_storageUnit = value; }
    inline S3OnDeviceServiceConfiguration& WithStorageUnit(StorageUnit value) { SetStorageUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applicable when creating a cluster. Specifies how many nodes are needed for
     * Amazon S3 compatible storage on Snow family devices. If specified, the other
     * input can be omitted.</p>
     */
    inline int GetServiceSize() const { return m_serviceSize; }
    inline bool ServiceSizeHasBeenSet() const { return m_serviceSizeHasBeenSet; }
    inline void SetServiceSize(int value) { m_serviceSizeHasBeenSet = true; m_serviceSize = value; }
    inline S3OnDeviceServiceConfiguration& WithServiceSize(int value) { SetServiceSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;Fault tolerance level of the cluster. This indicates the number of nodes
     * that can go down without degrading the performance of the cluster. This
     * additional input helps when the specified <code>StorageLimit</code> matches more
     * than one Amazon S3 compatible storage on Snow family devices service
     * configuration.</p>
     */
    inline int GetFaultTolerance() const { return m_faultTolerance; }
    inline bool FaultToleranceHasBeenSet() const { return m_faultToleranceHasBeenSet; }
    inline void SetFaultTolerance(int value) { m_faultToleranceHasBeenSet = true; m_faultTolerance = value; }
    inline S3OnDeviceServiceConfiguration& WithFaultTolerance(int value) { SetFaultTolerance(value); return *this;}
    ///@}
  private:

    double m_storageLimit{0.0};
    bool m_storageLimitHasBeenSet = false;

    StorageUnit m_storageUnit{StorageUnit::NOT_SET};
    bool m_storageUnitHasBeenSet = false;

    int m_serviceSize{0};
    bool m_serviceSizeHasBeenSet = false;

    int m_faultTolerance{0};
    bool m_faultToleranceHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
