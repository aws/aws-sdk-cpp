﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Status of devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceStats">AWS
   * API Reference</a></p>
   */
  class DeviceStats
  {
  public:
    AWS_SAGEMAKER_API DeviceStats() = default;
    AWS_SAGEMAKER_API DeviceStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of devices connected with a heartbeat.</p>
     */
    inline long long GetConnectedDeviceCount() const { return m_connectedDeviceCount; }
    inline bool ConnectedDeviceCountHasBeenSet() const { return m_connectedDeviceCountHasBeenSet; }
    inline void SetConnectedDeviceCount(long long value) { m_connectedDeviceCountHasBeenSet = true; m_connectedDeviceCount = value; }
    inline DeviceStats& WithConnectedDeviceCount(long long value) { SetConnectedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of registered devices.</p>
     */
    inline long long GetRegisteredDeviceCount() const { return m_registeredDeviceCount; }
    inline bool RegisteredDeviceCountHasBeenSet() const { return m_registeredDeviceCountHasBeenSet; }
    inline void SetRegisteredDeviceCount(long long value) { m_registeredDeviceCountHasBeenSet = true; m_registeredDeviceCount = value; }
    inline DeviceStats& WithRegisteredDeviceCount(long long value) { SetRegisteredDeviceCount(value); return *this;}
    ///@}
  private:

    long long m_connectedDeviceCount{0};
    bool m_connectedDeviceCountHasBeenSet = false;

    long long m_registeredDeviceCount{0};
    bool m_registeredDeviceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
