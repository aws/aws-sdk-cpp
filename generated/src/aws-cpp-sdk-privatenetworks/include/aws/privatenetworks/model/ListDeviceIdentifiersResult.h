/**
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


    /**
     * <p>Information about the device identifiers.</p>
     */
    inline const Aws::Vector<DeviceIdentifier>& GetDeviceIdentifiers() const{ return m_deviceIdentifiers; }

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline void SetDeviceIdentifiers(const Aws::Vector<DeviceIdentifier>& value) { m_deviceIdentifiers = value; }

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline void SetDeviceIdentifiers(Aws::Vector<DeviceIdentifier>&& value) { m_deviceIdentifiers = std::move(value); }

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline ListDeviceIdentifiersResult& WithDeviceIdentifiers(const Aws::Vector<DeviceIdentifier>& value) { SetDeviceIdentifiers(value); return *this;}

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline ListDeviceIdentifiersResult& WithDeviceIdentifiers(Aws::Vector<DeviceIdentifier>&& value) { SetDeviceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline ListDeviceIdentifiersResult& AddDeviceIdentifiers(const DeviceIdentifier& value) { m_deviceIdentifiers.push_back(value); return *this; }

    /**
     * <p>Information about the device identifiers.</p>
     */
    inline ListDeviceIdentifiersResult& AddDeviceIdentifiers(DeviceIdentifier&& value) { m_deviceIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListDeviceIdentifiersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListDeviceIdentifiersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListDeviceIdentifiersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceIdentifier> m_deviceIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
