﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetDevicesResult
  {
  public:
    AWS_NETWORKMANAGER_API GetDevicesResult();
    AWS_NETWORKMANAGER_API GetDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The devices.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devices = value; }
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devices = std::move(value); }
    inline GetDevicesResult& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}
    inline GetDevicesResult& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}
    inline GetDevicesResult& AddDevices(const Device& value) { m_devices.push_back(value); return *this; }
    inline GetDevicesResult& AddDevices(Device&& value) { m_devices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Device> m_devices;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
