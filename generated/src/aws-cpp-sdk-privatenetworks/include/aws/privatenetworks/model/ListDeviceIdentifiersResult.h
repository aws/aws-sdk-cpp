﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/DeviceIdentifier.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class ListDeviceIdentifiersResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult();
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device identifiers.</p>
     */
    inline const Aws::Vector<DeviceIdentifier>& GetDeviceIdentifiers() const{ return m_deviceIdentifiers; }
    inline void SetDeviceIdentifiers(const Aws::Vector<DeviceIdentifier>& value) { m_deviceIdentifiers = value; }
    inline void SetDeviceIdentifiers(Aws::Vector<DeviceIdentifier>&& value) { m_deviceIdentifiers = std::move(value); }
    inline ListDeviceIdentifiersResult& WithDeviceIdentifiers(const Aws::Vector<DeviceIdentifier>& value) { SetDeviceIdentifiers(value); return *this;}
    inline ListDeviceIdentifiersResult& WithDeviceIdentifiers(Aws::Vector<DeviceIdentifier>&& value) { SetDeviceIdentifiers(std::move(value)); return *this;}
    inline ListDeviceIdentifiersResult& AddDeviceIdentifiers(const DeviceIdentifier& value) { m_deviceIdentifiers.push_back(value); return *this; }
    inline ListDeviceIdentifiersResult& AddDeviceIdentifiers(DeviceIdentifier&& value) { m_deviceIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDeviceIdentifiersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceIdentifiersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceIdentifiersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeviceIdentifiersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeviceIdentifiersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeviceIdentifiersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceIdentifier> m_deviceIdentifiers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
