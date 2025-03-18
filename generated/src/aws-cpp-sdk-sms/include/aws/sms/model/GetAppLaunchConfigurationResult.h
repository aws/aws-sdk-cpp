/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
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
namespace SMS
{
namespace Model
{
  class GetAppLaunchConfigurationResult
  {
  public:
    AWS_SMS_API GetAppLaunchConfigurationResult() = default;
    AWS_SMS_API GetAppLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GetAppLaunchConfigurationResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    GetAppLaunchConfigurationResult& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool GetAutoLaunch() const { return m_autoLaunch; }
    inline void SetAutoLaunch(bool value) { m_autoLaunchHasBeenSet = true; m_autoLaunch = value; }
    inline GetAppLaunchConfigurationResult& WithAutoLaunch(bool value) { SetAutoLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const { return m_serverGroupLaunchConfigurations; }
    template<typename ServerGroupLaunchConfigurationsT = Aws::Vector<ServerGroupLaunchConfiguration>>
    void SetServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = std::forward<ServerGroupLaunchConfigurationsT>(value); }
    template<typename ServerGroupLaunchConfigurationsT = Aws::Vector<ServerGroupLaunchConfiguration>>
    GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { SetServerGroupLaunchConfigurations(std::forward<ServerGroupLaunchConfigurationsT>(value)); return *this;}
    template<typename ServerGroupLaunchConfigurationsT = ServerGroupLaunchConfiguration>
    GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfigurationsT&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.emplace_back(std::forward<ServerGroupLaunchConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppLaunchConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
