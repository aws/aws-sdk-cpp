/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/DeviceSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class ListDevicesResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListDevicesResult();
    AWS_SNOWDEVICEMANAGEMENT_API ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDevices() const{ return m_devices; }

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceSummary>& value) { m_devices = value; }

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceSummary>&& value) { m_devices = std::move(value); }

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline ListDevicesResult& WithDevices(const Aws::Vector<DeviceSummary>& value) { SetDevices(value); return *this;}

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline ListDevicesResult& WithDevices(Aws::Vector<DeviceSummary>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline ListDevicesResult& AddDevices(const DeviceSummary& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>A list of device structures that contain information about the device.</p>
     */
    inline ListDevicesResult& AddDevices(DeviceSummary&& value) { m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to continue to the next page of devices.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceSummary> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
