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
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult() = default;
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device identifiers.</p>
     */
    inline const Aws::Vector<DeviceIdentifier>& GetDeviceIdentifiers() const { return m_deviceIdentifiers; }
    template<typename DeviceIdentifiersT = Aws::Vector<DeviceIdentifier>>
    void SetDeviceIdentifiers(DeviceIdentifiersT&& value) { m_deviceIdentifiersHasBeenSet = true; m_deviceIdentifiers = std::forward<DeviceIdentifiersT>(value); }
    template<typename DeviceIdentifiersT = Aws::Vector<DeviceIdentifier>>
    ListDeviceIdentifiersResult& WithDeviceIdentifiers(DeviceIdentifiersT&& value) { SetDeviceIdentifiers(std::forward<DeviceIdentifiersT>(value)); return *this;}
    template<typename DeviceIdentifiersT = DeviceIdentifier>
    ListDeviceIdentifiersResult& AddDeviceIdentifiers(DeviceIdentifiersT&& value) { m_deviceIdentifiersHasBeenSet = true; m_deviceIdentifiers.emplace_back(std::forward<DeviceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeviceIdentifiersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeviceIdentifiersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceIdentifier> m_deviceIdentifiers;
    bool m_deviceIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
