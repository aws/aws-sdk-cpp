/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/DefaultImportClientBrandingAttributes.h>
#include <aws/workspaces/model/IosImportClientBrandingAttributes.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ImportClientBrandingRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ImportClientBrandingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportClientBranding"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ImportClientBrandingRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeWindows() const { return m_deviceTypeWindows; }
    inline bool DeviceTypeWindowsHasBeenSet() const { return m_deviceTypeWindowsHasBeenSet; }
    template<typename DeviceTypeWindowsT = DefaultImportClientBrandingAttributes>
    void SetDeviceTypeWindows(DeviceTypeWindowsT&& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = std::forward<DeviceTypeWindowsT>(value); }
    template<typename DeviceTypeWindowsT = DefaultImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeWindows(DeviceTypeWindowsT&& value) { SetDeviceTypeWindows(std::forward<DeviceTypeWindowsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeOsx() const { return m_deviceTypeOsx; }
    inline bool DeviceTypeOsxHasBeenSet() const { return m_deviceTypeOsxHasBeenSet; }
    template<typename DeviceTypeOsxT = DefaultImportClientBrandingAttributes>
    void SetDeviceTypeOsx(DeviceTypeOsxT&& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = std::forward<DeviceTypeOsxT>(value); }
    template<typename DeviceTypeOsxT = DefaultImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeOsx(DeviceTypeOsxT&& value) { SetDeviceTypeOsx(std::forward<DeviceTypeOsxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeAndroid() const { return m_deviceTypeAndroid; }
    inline bool DeviceTypeAndroidHasBeenSet() const { return m_deviceTypeAndroidHasBeenSet; }
    template<typename DeviceTypeAndroidT = DefaultImportClientBrandingAttributes>
    void SetDeviceTypeAndroid(DeviceTypeAndroidT&& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = std::forward<DeviceTypeAndroidT>(value); }
    template<typename DeviceTypeAndroidT = DefaultImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeAndroid(DeviceTypeAndroidT&& value) { SetDeviceTypeAndroid(std::forward<DeviceTypeAndroidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline const IosImportClientBrandingAttributes& GetDeviceTypeIos() const { return m_deviceTypeIos; }
    inline bool DeviceTypeIosHasBeenSet() const { return m_deviceTypeIosHasBeenSet; }
    template<typename DeviceTypeIosT = IosImportClientBrandingAttributes>
    void SetDeviceTypeIos(DeviceTypeIosT&& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = std::forward<DeviceTypeIosT>(value); }
    template<typename DeviceTypeIosT = IosImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeIos(DeviceTypeIosT&& value) { SetDeviceTypeIos(std::forward<DeviceTypeIosT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeLinux() const { return m_deviceTypeLinux; }
    inline bool DeviceTypeLinuxHasBeenSet() const { return m_deviceTypeLinuxHasBeenSet; }
    template<typename DeviceTypeLinuxT = DefaultImportClientBrandingAttributes>
    void SetDeviceTypeLinux(DeviceTypeLinuxT&& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = std::forward<DeviceTypeLinuxT>(value); }
    template<typename DeviceTypeLinuxT = DefaultImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeLinux(DeviceTypeLinuxT&& value) { SetDeviceTypeLinux(std::forward<DeviceTypeLinuxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information to import for web access.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeWeb() const { return m_deviceTypeWeb; }
    inline bool DeviceTypeWebHasBeenSet() const { return m_deviceTypeWebHasBeenSet; }
    template<typename DeviceTypeWebT = DefaultImportClientBrandingAttributes>
    void SetDeviceTypeWeb(DeviceTypeWebT&& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = std::forward<DeviceTypeWebT>(value); }
    template<typename DeviceTypeWebT = DefaultImportClientBrandingAttributes>
    ImportClientBrandingRequest& WithDeviceTypeWeb(DeviceTypeWebT&& value) { SetDeviceTypeWeb(std::forward<DeviceTypeWebT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    DefaultImportClientBrandingAttributes m_deviceTypeWindows;
    bool m_deviceTypeWindowsHasBeenSet = false;

    DefaultImportClientBrandingAttributes m_deviceTypeOsx;
    bool m_deviceTypeOsxHasBeenSet = false;

    DefaultImportClientBrandingAttributes m_deviceTypeAndroid;
    bool m_deviceTypeAndroidHasBeenSet = false;

    IosImportClientBrandingAttributes m_deviceTypeIos;
    bool m_deviceTypeIosHasBeenSet = false;

    DefaultImportClientBrandingAttributes m_deviceTypeLinux;
    bool m_deviceTypeLinuxHasBeenSet = false;

    DefaultImportClientBrandingAttributes m_deviceTypeWeb;
    bool m_deviceTypeWebHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
