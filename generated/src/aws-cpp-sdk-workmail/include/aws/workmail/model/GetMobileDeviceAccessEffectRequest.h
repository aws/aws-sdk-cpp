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
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectRequest();

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
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceModel() const{ return m_deviceModel; }
    inline bool DeviceModelHasBeenSet() const { return m_deviceModelHasBeenSet; }
    inline void SetDeviceModel(const Aws::String& value) { m_deviceModelHasBeenSet = true; m_deviceModel = value; }
    inline void SetDeviceModel(Aws::String&& value) { m_deviceModelHasBeenSet = true; m_deviceModel = std::move(value); }
    inline void SetDeviceModel(const char* value) { m_deviceModelHasBeenSet = true; m_deviceModel.assign(value); }
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(const Aws::String& value) { SetDeviceModel(value); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(Aws::String&& value) { SetDeviceModel(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(const char* value) { SetDeviceModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceOperatingSystem() const{ return m_deviceOperatingSystem; }
    inline bool DeviceOperatingSystemHasBeenSet() const { return m_deviceOperatingSystemHasBeenSet; }
    inline void SetDeviceOperatingSystem(const Aws::String& value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem = value; }
    inline void SetDeviceOperatingSystem(Aws::String&& value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem = std::move(value); }
    inline void SetDeviceOperatingSystem(const char* value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem.assign(value); }
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(const Aws::String& value) { SetDeviceOperatingSystem(value); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(Aws::String&& value) { SetDeviceOperatingSystem(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(const char* value) { SetDeviceOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceUserAgent() const{ return m_deviceUserAgent; }
    inline bool DeviceUserAgentHasBeenSet() const { return m_deviceUserAgentHasBeenSet; }
    inline void SetDeviceUserAgent(const Aws::String& value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent = value; }
    inline void SetDeviceUserAgent(Aws::String&& value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent = std::move(value); }
    inline void SetDeviceUserAgent(const char* value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent.assign(value); }
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(const Aws::String& value) { SetDeviceUserAgent(value); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(Aws::String&& value) { SetDeviceUserAgent(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(const char* value) { SetDeviceUserAgent(value); return *this;}
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
