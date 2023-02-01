/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Device.h>
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
namespace NetworkManager
{
namespace Model
{
  class CreateDeviceResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateDeviceResult();
    AWS_NETWORKMANAGER_API CreateDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the device.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>Information about the device.</p>
     */
    inline void SetDevice(const Device& value) { m_device = value; }

    /**
     * <p>Information about the device.</p>
     */
    inline void SetDevice(Device&& value) { m_device = std::move(value); }

    /**
     * <p>Information about the device.</p>
     */
    inline CreateDeviceResult& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>Information about the device.</p>
     */
    inline CreateDeviceResult& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}

  private:

    Device m_device;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
