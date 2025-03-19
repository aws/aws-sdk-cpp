/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/DeviceJobConfig.h>
#include <aws/panorama/model/JobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class CreateJobForDevicesRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API CreateJobForDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobForDevices"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of target device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const { return m_deviceIds; }
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }
    template<typename DeviceIdsT = Aws::Vector<Aws::String>>
    void SetDeviceIds(DeviceIdsT&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::forward<DeviceIdsT>(value); }
    template<typename DeviceIdsT = Aws::Vector<Aws::String>>
    CreateJobForDevicesRequest& WithDeviceIds(DeviceIdsT&& value) { SetDeviceIds(std::forward<DeviceIdsT>(value)); return *this;}
    template<typename DeviceIdsT = Aws::String>
    CreateJobForDevicesRequest& AddDeviceIds(DeviceIdsT&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.emplace_back(std::forward<DeviceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline const DeviceJobConfig& GetDeviceJobConfig() const { return m_deviceJobConfig; }
    inline bool DeviceJobConfigHasBeenSet() const { return m_deviceJobConfigHasBeenSet; }
    template<typename DeviceJobConfigT = DeviceJobConfig>
    void SetDeviceJobConfig(DeviceJobConfigT&& value) { m_deviceJobConfigHasBeenSet = true; m_deviceJobConfig = std::forward<DeviceJobConfigT>(value); }
    template<typename DeviceJobConfigT = DeviceJobConfig>
    CreateJobForDevicesRequest& WithDeviceJobConfig(DeviceJobConfigT&& value) { SetDeviceJobConfig(std::forward<DeviceJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job to run.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateJobForDevicesRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deviceIds;
    bool m_deviceIdsHasBeenSet = false;

    DeviceJobConfig m_deviceJobConfig;
    bool m_deviceJobConfigHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
