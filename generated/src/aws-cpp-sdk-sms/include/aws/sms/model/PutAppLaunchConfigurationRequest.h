/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class PutAppLaunchConfigurationRequest : public SMSRequest
  {
  public:
    AWS_SMS_API PutAppLaunchConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppLaunchConfiguration"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    PutAppLaunchConfigurationRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    PutAppLaunchConfigurationRequest& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool GetAutoLaunch() const { return m_autoLaunch; }
    inline bool AutoLaunchHasBeenSet() const { return m_autoLaunchHasBeenSet; }
    inline void SetAutoLaunch(bool value) { m_autoLaunchHasBeenSet = true; m_autoLaunch = value; }
    inline PutAppLaunchConfigurationRequest& WithAutoLaunch(bool value) { SetAutoLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const { return m_serverGroupLaunchConfigurations; }
    inline bool ServerGroupLaunchConfigurationsHasBeenSet() const { return m_serverGroupLaunchConfigurationsHasBeenSet; }
    template<typename ServerGroupLaunchConfigurationsT = Aws::Vector<ServerGroupLaunchConfiguration>>
    void SetServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = std::forward<ServerGroupLaunchConfigurationsT>(value); }
    template<typename ServerGroupLaunchConfigurationsT = Aws::Vector<ServerGroupLaunchConfiguration>>
    PutAppLaunchConfigurationRequest& WithServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { SetServerGroupLaunchConfigurations(std::forward<ServerGroupLaunchConfigurationsT>(value)); return *this;}
    template<typename ServerGroupLaunchConfigurationsT = ServerGroupLaunchConfiguration>
    PutAppLaunchConfigurationRequest& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.emplace_back(std::forward<ServerGroupLaunchConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    bool m_autoLaunch{false};
    bool m_autoLaunchHasBeenSet = false;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;
    bool m_serverGroupLaunchConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
