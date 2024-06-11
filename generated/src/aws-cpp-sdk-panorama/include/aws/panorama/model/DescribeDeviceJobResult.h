﻿/**
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
    AWS_PANORAMA_API DescribeDeviceJobResult();
    AWS_PANORAMA_API DescribeDeviceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeDeviceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline DescribeDeviceJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DescribeDeviceJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }
    inline DescribeDeviceJobResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline DescribeDeviceJobResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }
    inline DescribeDeviceJobResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline DescribeDeviceJobResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceName.assign(value); }
    inline DescribeDeviceJobResult& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline DescribeDeviceJobResult& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's type.</p>
     */
    inline const DeviceType& GetDeviceType() const{ return m_deviceType; }
    inline void SetDeviceType(const DeviceType& value) { m_deviceType = value; }
    inline void SetDeviceType(DeviceType&& value) { m_deviceType = std::move(value); }
    inline DescribeDeviceJobResult& WithDeviceType(const DeviceType& value) { SetDeviceType(value); return *this;}
    inline DescribeDeviceJobResult& WithDeviceType(DeviceType&& value) { SetDeviceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const{ return m_imageVersion; }
    inline void SetImageVersion(const Aws::String& value) { m_imageVersion = value; }
    inline void SetImageVersion(Aws::String&& value) { m_imageVersion = std::move(value); }
    inline void SetImageVersion(const char* value) { m_imageVersion.assign(value); }
    inline DescribeDeviceJobResult& WithImageVersion(const Aws::String& value) { SetImageVersion(value); return *this;}
    inline DescribeDeviceJobResult& WithImageVersion(Aws::String&& value) { SetImageVersion(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithImageVersion(const char* value) { SetImageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribeDeviceJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeDeviceJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's type.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const JobType& value) { m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }
    inline DescribeDeviceJobResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline DescribeDeviceJobResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const UpdateProgress& GetStatus() const{ return m_status; }
    inline void SetStatus(const UpdateProgress& value) { m_status = value; }
    inline void SetStatus(UpdateProgress&& value) { m_status = std::move(value); }
    inline DescribeDeviceJobResult& WithStatus(const UpdateProgress& value) { SetStatus(value); return *this;}
    inline DescribeDeviceJobResult& WithStatus(UpdateProgress&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDeviceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDeviceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDeviceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_deviceArn;

    Aws::String m_deviceId;

    Aws::String m_deviceName;

    DeviceType m_deviceType;

    Aws::String m_imageVersion;

    Aws::String m_jobId;

    JobType m_jobType;

    UpdateProgress m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
