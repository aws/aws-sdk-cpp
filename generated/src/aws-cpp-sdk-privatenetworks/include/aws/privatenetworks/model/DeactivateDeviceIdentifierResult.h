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
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult() = default;
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device identifier.</p>
     */
    inline const DeviceIdentifier& GetDeviceIdentifier() const { return m_deviceIdentifier; }
    template<typename DeviceIdentifierT = DeviceIdentifier>
    void SetDeviceIdentifier(DeviceIdentifierT&& value) { m_deviceIdentifierHasBeenSet = true; m_deviceIdentifier = std::forward<DeviceIdentifierT>(value); }
    template<typename DeviceIdentifierT = DeviceIdentifier>
    DeactivateDeviceIdentifierResult& WithDeviceIdentifier(DeviceIdentifierT&& value) { SetDeviceIdentifier(std::forward<DeviceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeactivateDeviceIdentifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeviceIdentifier m_deviceIdentifier;
    bool m_deviceIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
