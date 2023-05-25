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


    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization to simulate the access effect for.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>Device type the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}


    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceModel() const{ return m_deviceModel; }

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline bool DeviceModelHasBeenSet() const { return m_deviceModelHasBeenSet; }

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline void SetDeviceModel(const Aws::String& value) { m_deviceModelHasBeenSet = true; m_deviceModel = value; }

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline void SetDeviceModel(Aws::String&& value) { m_deviceModelHasBeenSet = true; m_deviceModel = std::move(value); }

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline void SetDeviceModel(const char* value) { m_deviceModelHasBeenSet = true; m_deviceModel.assign(value); }

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(const Aws::String& value) { SetDeviceModel(value); return *this;}

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(Aws::String&& value) { SetDeviceModel(std::move(value)); return *this;}

    /**
     * <p>Device model the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceModel(const char* value) { SetDeviceModel(value); return *this;}


    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceOperatingSystem() const{ return m_deviceOperatingSystem; }

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline bool DeviceOperatingSystemHasBeenSet() const { return m_deviceOperatingSystemHasBeenSet; }

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline void SetDeviceOperatingSystem(const Aws::String& value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem = value; }

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline void SetDeviceOperatingSystem(Aws::String&& value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem = std::move(value); }

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline void SetDeviceOperatingSystem(const char* value) { m_deviceOperatingSystemHasBeenSet = true; m_deviceOperatingSystem.assign(value); }

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(const Aws::String& value) { SetDeviceOperatingSystem(value); return *this;}

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(Aws::String&& value) { SetDeviceOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>Device operating system the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceOperatingSystem(const char* value) { SetDeviceOperatingSystem(value); return *this;}


    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline const Aws::String& GetDeviceUserAgent() const{ return m_deviceUserAgent; }

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline bool DeviceUserAgentHasBeenSet() const { return m_deviceUserAgentHasBeenSet; }

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline void SetDeviceUserAgent(const Aws::String& value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent = value; }

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline void SetDeviceUserAgent(Aws::String&& value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent = std::move(value); }

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline void SetDeviceUserAgent(const char* value) { m_deviceUserAgentHasBeenSet = true; m_deviceUserAgent.assign(value); }

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(const Aws::String& value) { SetDeviceUserAgent(value); return *this;}

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(Aws::String&& value) { SetDeviceUserAgent(std::move(value)); return *this;}

    /**
     * <p>Device user agent the simulated user will report.</p>
     */
    inline GetMobileDeviceAccessEffectRequest& WithDeviceUserAgent(const char* value) { SetDeviceUserAgent(value); return *this;}

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
