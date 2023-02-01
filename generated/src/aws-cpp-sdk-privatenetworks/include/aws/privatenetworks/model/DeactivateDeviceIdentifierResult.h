/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
  class DeactivateDeviceIdentifierResult
  {
  public:
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult();
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the device identifier.</p>
     */
    inline const DeviceIdentifier& GetDeviceIdentifier() const{ return m_deviceIdentifier; }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline void SetDeviceIdentifier(const DeviceIdentifier& value) { m_deviceIdentifier = value; }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline void SetDeviceIdentifier(DeviceIdentifier&& value) { m_deviceIdentifier = std::move(value); }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline DeactivateDeviceIdentifierResult& WithDeviceIdentifier(const DeviceIdentifier& value) { SetDeviceIdentifier(value); return *this;}

    /**
     * <p>Information about the device identifier.</p>
     */
    inline DeactivateDeviceIdentifierResult& WithDeviceIdentifier(DeviceIdentifier&& value) { SetDeviceIdentifier(std::move(value)); return *this;}

  private:

    DeviceIdentifier m_deviceIdentifier;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
