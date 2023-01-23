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
    AWS_WORKSPACES_API ImportClientBrandingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportClientBranding"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline ImportClientBrandingRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline ImportClientBrandingRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier of the WorkSpace for which you want to import client
     * branding.</p>
     */
    inline ImportClientBrandingRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeWindows() const{ return m_deviceTypeWindows; }

    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline bool DeviceTypeWindowsHasBeenSet() const { return m_deviceTypeWindowsHasBeenSet; }

    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline void SetDeviceTypeWindows(const DefaultImportClientBrandingAttributes& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = value; }

    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline void SetDeviceTypeWindows(DefaultImportClientBrandingAttributes&& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = std::move(value); }

    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeWindows(const DefaultImportClientBrandingAttributes& value) { SetDeviceTypeWindows(value); return *this;}

    /**
     * <p>The branding information to import for Windows devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeWindows(DefaultImportClientBrandingAttributes&& value) { SetDeviceTypeWindows(std::move(value)); return *this;}


    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeOsx() const{ return m_deviceTypeOsx; }

    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline bool DeviceTypeOsxHasBeenSet() const { return m_deviceTypeOsxHasBeenSet; }

    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline void SetDeviceTypeOsx(const DefaultImportClientBrandingAttributes& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = value; }

    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline void SetDeviceTypeOsx(DefaultImportClientBrandingAttributes&& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = std::move(value); }

    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeOsx(const DefaultImportClientBrandingAttributes& value) { SetDeviceTypeOsx(value); return *this;}

    /**
     * <p>The branding information to import for macOS devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeOsx(DefaultImportClientBrandingAttributes&& value) { SetDeviceTypeOsx(std::move(value)); return *this;}


    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeAndroid() const{ return m_deviceTypeAndroid; }

    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline bool DeviceTypeAndroidHasBeenSet() const { return m_deviceTypeAndroidHasBeenSet; }

    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline void SetDeviceTypeAndroid(const DefaultImportClientBrandingAttributes& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = value; }

    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline void SetDeviceTypeAndroid(DefaultImportClientBrandingAttributes&& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = std::move(value); }

    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeAndroid(const DefaultImportClientBrandingAttributes& value) { SetDeviceTypeAndroid(value); return *this;}

    /**
     * <p>The branding information to import for Android devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeAndroid(DefaultImportClientBrandingAttributes&& value) { SetDeviceTypeAndroid(std::move(value)); return *this;}


    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline const IosImportClientBrandingAttributes& GetDeviceTypeIos() const{ return m_deviceTypeIos; }

    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline bool DeviceTypeIosHasBeenSet() const { return m_deviceTypeIosHasBeenSet; }

    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline void SetDeviceTypeIos(const IosImportClientBrandingAttributes& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = value; }

    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline void SetDeviceTypeIos(IosImportClientBrandingAttributes&& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = std::move(value); }

    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeIos(const IosImportClientBrandingAttributes& value) { SetDeviceTypeIos(value); return *this;}

    /**
     * <p>The branding information to import for iOS devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeIos(IosImportClientBrandingAttributes&& value) { SetDeviceTypeIos(std::move(value)); return *this;}


    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeLinux() const{ return m_deviceTypeLinux; }

    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline bool DeviceTypeLinuxHasBeenSet() const { return m_deviceTypeLinuxHasBeenSet; }

    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline void SetDeviceTypeLinux(const DefaultImportClientBrandingAttributes& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = value; }

    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline void SetDeviceTypeLinux(DefaultImportClientBrandingAttributes&& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = std::move(value); }

    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeLinux(const DefaultImportClientBrandingAttributes& value) { SetDeviceTypeLinux(value); return *this;}

    /**
     * <p>The branding information to import for Linux devices.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeLinux(DefaultImportClientBrandingAttributes&& value) { SetDeviceTypeLinux(std::move(value)); return *this;}


    /**
     * <p>The branding information to import for web access.</p>
     */
    inline const DefaultImportClientBrandingAttributes& GetDeviceTypeWeb() const{ return m_deviceTypeWeb; }

    /**
     * <p>The branding information to import for web access.</p>
     */
    inline bool DeviceTypeWebHasBeenSet() const { return m_deviceTypeWebHasBeenSet; }

    /**
     * <p>The branding information to import for web access.</p>
     */
    inline void SetDeviceTypeWeb(const DefaultImportClientBrandingAttributes& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = value; }

    /**
     * <p>The branding information to import for web access.</p>
     */
    inline void SetDeviceTypeWeb(DefaultImportClientBrandingAttributes&& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = std::move(value); }

    /**
     * <p>The branding information to import for web access.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeWeb(const DefaultImportClientBrandingAttributes& value) { SetDeviceTypeWeb(value); return *this;}

    /**
     * <p>The branding information to import for web access.</p>
     */
    inline ImportClientBrandingRequest& WithDeviceTypeWeb(DefaultImportClientBrandingAttributes&& value) { SetDeviceTypeWeb(std::move(value)); return *this;}

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
