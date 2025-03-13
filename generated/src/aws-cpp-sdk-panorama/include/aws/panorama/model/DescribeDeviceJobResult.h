/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceType.h>
#include <aws/panorama/model/JobType.h>
#include <aws/panorama/model/UpdateProgress.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{
  class DescribeDeviceJobResult
  {
  public:
    AWS_PANORAMA_API DescribeDeviceJobResult() = default;
    AWS_PANORAMA_API DescribeDeviceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeDeviceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeDeviceJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    DescribeDeviceJobResult& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    DescribeDeviceJobResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DescribeDeviceJobResult& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's type.</p>
     */
    inline DeviceType GetDeviceType() const { return m_deviceType; }
    inline void SetDeviceType(DeviceType value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }
    inline DescribeDeviceJobResult& WithDeviceType(DeviceType value) { SetDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
    template<typename ImageVersionT = Aws::String>
    void SetImageVersion(ImageVersionT&& value) { m_imageVersionHasBeenSet = true; m_imageVersion = std::forward<ImageVersionT>(value); }
    template<typename ImageVersionT = Aws::String>
    DescribeDeviceJobResult& WithImageVersion(ImageVersionT&& value) { SetImageVersion(std::forward<ImageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeDeviceJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's type.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline DescribeDeviceJobResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline UpdateProgress GetStatus() const { return m_status; }
    inline void SetStatus(UpdateProgress value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDeviceJobResult& WithStatus(UpdateProgress value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    DeviceType m_deviceType{DeviceType::NOT_SET};
    bool m_deviceTypeHasBeenSet = false;

    Aws::String m_imageVersion;
    bool m_imageVersionHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    UpdateProgress m_status{UpdateProgress::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
