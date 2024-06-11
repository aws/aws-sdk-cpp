﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Device.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateDeviceResult
  {
  public:
    AWS_NETWORKMANAGER_API UpdateDeviceResult();
    AWS_NETWORKMANAGER_API UpdateDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API UpdateDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }
    inline void SetDevice(const Device& value) { m_device = value; }
    inline void SetDevice(Device&& value) { m_device = std::move(value); }
    inline UpdateDeviceResult& WithDevice(const Device& value) { SetDevice(value); return *this;}
    inline UpdateDeviceResult& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Device m_device;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
