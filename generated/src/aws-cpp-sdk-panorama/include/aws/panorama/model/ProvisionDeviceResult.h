/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/panorama/model/DeviceStatus.h>
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
namespace Panorama
{
namespace Model
{
  class ProvisionDeviceResult
  {
  public:
    AWS_PANORAMA_API ProvisionDeviceResult() = default;
    AWS_PANORAMA_API ProvisionDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ProvisionDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ProvisionDeviceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's configuration bundle.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificates() const { return m_certificates; }
    template<typename CertificatesT = Aws::Utils::ByteBuffer>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Utils::ByteBuffer>
    ProvisionDeviceResult& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    ProvisionDeviceResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's IoT thing name.</p>
     */
    inline const Aws::String& GetIotThingName() const { return m_iotThingName; }
    template<typename IotThingNameT = Aws::String>
    void SetIotThingName(IotThingNameT&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::forward<IotThingNameT>(value); }
    template<typename IotThingNameT = Aws::String>
    ProvisionDeviceResult& WithIotThingName(IotThingNameT&& value) { SetIotThingName(std::forward<IotThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's status.</p>
     */
    inline DeviceStatus GetStatus() const { return m_status; }
    inline void SetStatus(DeviceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProvisionDeviceResult& WithStatus(DeviceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ProvisionDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_certificates{};
    bool m_certificatesHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_iotThingName;
    bool m_iotThingNameHasBeenSet = false;

    DeviceStatus m_status{DeviceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
