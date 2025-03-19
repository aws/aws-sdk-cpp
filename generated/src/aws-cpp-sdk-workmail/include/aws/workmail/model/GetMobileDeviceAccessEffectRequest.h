/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class GetMobileDeviceAccessEffectRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMobileDeviceAccessEffect"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    GetMobileDeviceAccessEffectRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    GetMobileDeviceAccessEffectRequest& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceModel() const { return m_deviceModel; }
    inline bool DeviceModelHasBeenSet() const { return m_deviceModelHasBeenSet; }
    template<typename DeviceModelT = Aws::String>
    void SetDeviceModel(DeviceModelT&& value) { m_deviceModelHasBeenSet = true; m_deviceModel = std::forward<DeviceModelT>(value); }
    template<typename DeviceModelT = Aws::String>
    GetMobileDeviceAccessEffectRequest& WithDeviceModel(DeviceModelT&& value) { SetDeviceModel(std::forward<DeviceModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceOperatingSystem() const { return m_deviceOperatingSystem; }
    inline bool DeviceOperatingSystemHasBeenSet() const { return m_deviceOperatingSystemHasBeenSet; }
    template<typename DeviceOperatingSystemT = Aws::String>
    void SetDeviceOperatingSystem(DeviceOperatingSystemT&& value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem = std::forward<DeviceOperatingSystemT>(value); }
    template<typename DeviceOperatingSystemT = Aws::String>
    GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(DeviceOperatingSystemT&& value) { SetDeviceOperatingSystem(std::forward<DeviceOperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceUserAgent() const { return m_deviceUserAgent; }
    inline bool DeviceUserAgentHasBeenSet() const { return m_deviceUserAgentHasBeenSet; }
    template<typename DeviceUserAgentT = Aws::String>
    void SetDeviceUserAgent(DeviceUserAgentT&& value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent = std::forward<DeviceUserAgentT>(value); }
    template<typename DeviceUserAgentT = Aws::String>
    GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(DeviceUserAgentT&& value) { SetDeviceUserAgent(std::forward<DeviceUserAgentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::String m_deviceModel;
    bool m_deviceModelHasBeenSet = false;

    Aws::String m_deviceOperatingSystem;
    bool m_deviceOperatingSystemHasBeenSet = false;

    Aws::String m_deviceUserAgent;
    bool m_deviceUserAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
