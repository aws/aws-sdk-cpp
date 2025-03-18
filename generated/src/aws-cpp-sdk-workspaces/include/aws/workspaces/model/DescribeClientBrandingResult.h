/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DefaultClientBrandingAttributes.h>
#include <aws/workspaces/model/IosClientBrandingAttributes.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeClientBrandingResult
  {
  public:
    AWS_WORKSPACES_API DescribeClientBrandingResult() = default;
    AWS_WORKSPACES_API DescribeClientBrandingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeClientBrandingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The branding information for Windows devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWindows() const { return m_deviceTypeWindows; }
    template<typename DeviceTypeWindowsT = DefaultClientBrandingAttributes>
    void SetDeviceTypeWindows(DeviceTypeWindowsT&& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = std::forward<DeviceTypeWindowsT>(value); }
    template<typename DeviceTypeWindowsT = DefaultClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeWindows(DeviceTypeWindowsT&& value) { SetDeviceTypeWindows(std::forward<DeviceTypeWindowsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for macOS devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeOsx() const { return m_deviceTypeOsx; }
    template<typename DeviceTypeOsxT = DefaultClientBrandingAttributes>
    void SetDeviceTypeOsx(DeviceTypeOsxT&& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = std::forward<DeviceTypeOsxT>(value); }
    template<typename DeviceTypeOsxT = DefaultClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeOsx(DeviceTypeOsxT&& value) { SetDeviceTypeOsx(std::forward<DeviceTypeOsxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Android devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeAndroid() const { return m_deviceTypeAndroid; }
    template<typename DeviceTypeAndroidT = DefaultClientBrandingAttributes>
    void SetDeviceTypeAndroid(DeviceTypeAndroidT&& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = std::forward<DeviceTypeAndroidT>(value); }
    template<typename DeviceTypeAndroidT = DefaultClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeAndroid(DeviceTypeAndroidT&& value) { SetDeviceTypeAndroid(std::forward<DeviceTypeAndroidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for iOS devices.</p>
     */
    inline const IosClientBrandingAttributes& GetDeviceTypeIos() const { return m_deviceTypeIos; }
    template<typename DeviceTypeIosT = IosClientBrandingAttributes>
    void SetDeviceTypeIos(DeviceTypeIosT&& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = std::forward<DeviceTypeIosT>(value); }
    template<typename DeviceTypeIosT = IosClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeIos(DeviceTypeIosT&& value) { SetDeviceTypeIos(std::forward<DeviceTypeIosT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Linux devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeLinux() const { return m_deviceTypeLinux; }
    template<typename DeviceTypeLinuxT = DefaultClientBrandingAttributes>
    void SetDeviceTypeLinux(DeviceTypeLinuxT&& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = std::forward<DeviceTypeLinuxT>(value); }
    template<typename DeviceTypeLinuxT = DefaultClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeLinux(DeviceTypeLinuxT&& value) { SetDeviceTypeLinux(std::forward<DeviceTypeLinuxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Web access.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWeb() const { return m_deviceTypeWeb; }
    template<typename DeviceTypeWebT = DefaultClientBrandingAttributes>
    void SetDeviceTypeWeb(DeviceTypeWebT&& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = std::forward<DeviceTypeWebT>(value); }
    template<typename DeviceTypeWebT = DefaultClientBrandingAttributes>
    DescribeClientBrandingResult& WithDeviceTypeWeb(DeviceTypeWebT&& value) { SetDeviceTypeWeb(std::forward<DeviceTypeWebT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClientBrandingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DefaultClientBrandingAttributes m_deviceTypeWindows;
    bool m_deviceTypeWindowsHasBeenSet = false;

    DefaultClientBrandingAttributes m_deviceTypeOsx;
    bool m_deviceTypeOsxHasBeenSet = false;

    DefaultClientBrandingAttributes m_deviceTypeAndroid;
    bool m_deviceTypeAndroidHasBeenSet = false;

    IosClientBrandingAttributes m_deviceTypeIos;
    bool m_deviceTypeIosHasBeenSet = false;

    DefaultClientBrandingAttributes m_deviceTypeLinux;
    bool m_deviceTypeLinuxHasBeenSet = false;

    DefaultClientBrandingAttributes m_deviceTypeWeb;
    bool m_deviceTypeWebHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
