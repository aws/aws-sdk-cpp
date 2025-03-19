/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{
  class GetDeviceRegistrationResult
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult() = default;
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline const Aws::String& GetDeviceRegistration() const { return m_deviceRegistration; }
    template<typename DeviceRegistrationT = Aws::String>
    void SetDeviceRegistration(DeviceRegistrationT&& value) { m_deviceRegistrationHasBeenSet = true; m_deviceRegistration = std::forward<DeviceRegistrationT>(value); }
    template<typename DeviceRegistrationT = Aws::String>
    GetDeviceRegistrationResult& WithDeviceRegistration(DeviceRegistrationT&& value) { SetDeviceRegistration(std::forward<DeviceRegistrationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline const Aws::String& GetCacheTTL() const { return m_cacheTTL; }
    template<typename CacheTTLT = Aws::String>
    void SetCacheTTL(CacheTTLT&& value) { m_cacheTTLHasBeenSet = true; m_cacheTTL = std::forward<CacheTTLT>(value); }
    template<typename CacheTTLT = Aws::String>
    GetDeviceRegistrationResult& WithCacheTTL(CacheTTLT&& value) { SetCacheTTL(std::forward<CacheTTLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceRegistration;
    bool m_deviceRegistrationHasBeenSet = false;

    Aws::String m_cacheTTL;
    bool m_cacheTTLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
