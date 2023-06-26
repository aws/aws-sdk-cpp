/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/DeviceIdentifier.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeactivateDeviceIdentifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeactivateDeviceIdentifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeactivateDeviceIdentifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeviceIdentifier m_deviceIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
