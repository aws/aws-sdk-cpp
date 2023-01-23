/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/Device.h>
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
  class ListDevicesResult
  {
  public:
    AWS_PANORAMA_API ListDevicesResult();
    AWS_PANORAMA_API ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of devices.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>A list of devices.</p>
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devices = value; }

    /**
     * <p>A list of devices.</p>
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devices = std::move(value); }

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& AddDevices(const Device& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& AddDevices(Device&& value) { m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Device> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
