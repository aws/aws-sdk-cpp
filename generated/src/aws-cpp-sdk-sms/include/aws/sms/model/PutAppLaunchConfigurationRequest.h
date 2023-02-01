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
    AWS_SMS_API PutAppLaunchConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppLaunchConfiguration"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of service role in the customer's account that CloudFormation uses
     * to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool GetAutoLaunch() const{ return m_autoLaunch; }

    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool AutoLaunchHasBeenSet() const { return m_autoLaunchHasBeenSet; }

    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline void SetAutoLaunch(bool value) { m_autoLaunchHasBeenSet = true; m_autoLaunch = value; }

    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAutoLaunch(bool value) { SetAutoLaunch(value); return *this;}


    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const{ return m_serverGroupLaunchConfigurations; }

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline bool ServerGroupLaunchConfigurationsHasBeenSet() const { return m_serverGroupLaunchConfigurationsHasBeenSet; }

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = value; }

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = std::move(value); }

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { SetServerGroupLaunchConfigurations(value); return *this;}

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { SetServerGroupLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline PutAppLaunchConfigurationRequest& AddServerGroupLaunchConfigurations(const ServerGroupLaunchConfiguration& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about the launch configurations for server groups in the
     * application.</p>
     */
    inline PutAppLaunchConfigurationRequest& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfiguration&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    bool m_autoLaunch;
    bool m_autoLaunchHasBeenSet = false;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;
    bool m_serverGroupLaunchConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
