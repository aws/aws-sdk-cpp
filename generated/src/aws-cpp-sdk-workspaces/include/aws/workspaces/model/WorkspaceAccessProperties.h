/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AccessPropertyValue.h>
#include <aws/workspaces/model/AccessEndpointConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>The device types and operating systems that can be used to access a
   * WorkSpace. For more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-network-requirements.html">Amazon
   * WorkSpaces Client Network Requirements</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceAccessProperties">AWS
   * API Reference</a></p>
   */
  class WorkspaceAccessProperties
  {
  public:
    AWS_WORKSPACES_API WorkspaceAccessProperties() = default;
    AWS_WORKSPACES_API WorkspaceAccessProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceAccessProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether users can use Windows clients to access their
     * WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeWindows() const { return m_deviceTypeWindows; }
    inline bool DeviceTypeWindowsHasBeenSet() const { return m_deviceTypeWindowsHasBeenSet; }
    inline void SetDeviceTypeWindows(AccessPropertyValue value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeWindows(AccessPropertyValue value) { SetDeviceTypeWindows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use macOS clients to access their WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeOsx() const { return m_deviceTypeOsx; }
    inline bool DeviceTypeOsxHasBeenSet() const { return m_deviceTypeOsxHasBeenSet; }
    inline void SetDeviceTypeOsx(AccessPropertyValue value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeOsx(AccessPropertyValue value) { SetDeviceTypeOsx(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can access their WorkSpaces through a web
     * browser.</p>
     */
    inline AccessPropertyValue GetDeviceTypeWeb() const { return m_deviceTypeWeb; }
    inline bool DeviceTypeWebHasBeenSet() const { return m_deviceTypeWebHasBeenSet; }
    inline void SetDeviceTypeWeb(AccessPropertyValue value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeWeb(AccessPropertyValue value) { SetDeviceTypeWeb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use iOS devices to access their WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeIos() const { return m_deviceTypeIos; }
    inline bool DeviceTypeIosHasBeenSet() const { return m_deviceTypeIosHasBeenSet; }
    inline void SetDeviceTypeIos(AccessPropertyValue value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeIos(AccessPropertyValue value) { SetDeviceTypeIos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Android and Android-compatible Chrome OS
     * devices to access their WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeAndroid() const { return m_deviceTypeAndroid; }
    inline bool DeviceTypeAndroidHasBeenSet() const { return m_deviceTypeAndroidHasBeenSet; }
    inline void SetDeviceTypeAndroid(AccessPropertyValue value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeAndroid(AccessPropertyValue value) { SetDeviceTypeAndroid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Chromebooks to access their WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeChromeOs() const { return m_deviceTypeChromeOs; }
    inline bool DeviceTypeChromeOsHasBeenSet() const { return m_deviceTypeChromeOsHasBeenSet; }
    inline void SetDeviceTypeChromeOs(AccessPropertyValue value) { m_deviceTypeChromeOsHasBeenSet = true; m_deviceTypeChromeOs = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeChromeOs(AccessPropertyValue value) { SetDeviceTypeChromeOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use zero client devices to access their
     * WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeZeroClient() const { return m_deviceTypeZeroClient; }
    inline bool DeviceTypeZeroClientHasBeenSet() const { return m_deviceTypeZeroClientHasBeenSet; }
    inline void SetDeviceTypeZeroClient(AccessPropertyValue value) { m_deviceTypeZeroClientHasBeenSet = true; m_deviceTypeZeroClient = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeZeroClient(AccessPropertyValue value) { SetDeviceTypeZeroClient(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Linux clients to access their WorkSpaces.</p>
     */
    inline AccessPropertyValue GetDeviceTypeLinux() const { return m_deviceTypeLinux; }
    inline bool DeviceTypeLinuxHasBeenSet() const { return m_deviceTypeLinuxHasBeenSet; }
    inline void SetDeviceTypeLinux(AccessPropertyValue value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeLinux(AccessPropertyValue value) { SetDeviceTypeLinux(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can access their WorkSpaces through a WorkSpaces Thin
     * Client.</p>
     */
    inline AccessPropertyValue GetDeviceTypeWorkSpacesThinClient() const { return m_deviceTypeWorkSpacesThinClient; }
    inline bool DeviceTypeWorkSpacesThinClientHasBeenSet() const { return m_deviceTypeWorkSpacesThinClientHasBeenSet; }
    inline void SetDeviceTypeWorkSpacesThinClient(AccessPropertyValue value) { m_deviceTypeWorkSpacesThinClientHasBeenSet = true; m_deviceTypeWorkSpacesThinClient = value; }
    inline WorkspaceAccessProperties& WithDeviceTypeWorkSpacesThinClient(AccessPropertyValue value) { SetDeviceTypeWorkSpacesThinClient(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for accessing the WorkSpace.</p>
     */
    inline const AccessEndpointConfig& GetAccessEndpointConfig() const { return m_accessEndpointConfig; }
    inline bool AccessEndpointConfigHasBeenSet() const { return m_accessEndpointConfigHasBeenSet; }
    template<typename AccessEndpointConfigT = AccessEndpointConfig>
    void SetAccessEndpointConfig(AccessEndpointConfigT&& value) { m_accessEndpointConfigHasBeenSet = true; m_accessEndpointConfig = std::forward<AccessEndpointConfigT>(value); }
    template<typename AccessEndpointConfigT = AccessEndpointConfig>
    WorkspaceAccessProperties& WithAccessEndpointConfig(AccessEndpointConfigT&& value) { SetAccessEndpointConfig(std::forward<AccessEndpointConfigT>(value)); return *this;}
    ///@}
  private:

    AccessPropertyValue m_deviceTypeWindows{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeWindowsHasBeenSet = false;

    AccessPropertyValue m_deviceTypeOsx{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeOsxHasBeenSet = false;

    AccessPropertyValue m_deviceTypeWeb{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeWebHasBeenSet = false;

    AccessPropertyValue m_deviceTypeIos{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeIosHasBeenSet = false;

    AccessPropertyValue m_deviceTypeAndroid{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeAndroidHasBeenSet = false;

    AccessPropertyValue m_deviceTypeChromeOs{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeChromeOsHasBeenSet = false;

    AccessPropertyValue m_deviceTypeZeroClient{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeZeroClientHasBeenSet = false;

    AccessPropertyValue m_deviceTypeLinux{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeLinuxHasBeenSet = false;

    AccessPropertyValue m_deviceTypeWorkSpacesThinClient{AccessPropertyValue::NOT_SET};
    bool m_deviceTypeWorkSpacesThinClientHasBeenSet = false;

    AccessEndpointConfig m_accessEndpointConfig;
    bool m_accessEndpointConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
