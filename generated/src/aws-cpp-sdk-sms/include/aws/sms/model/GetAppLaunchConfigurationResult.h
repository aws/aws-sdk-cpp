﻿/**
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
    AWS_SMS_API GetAppLaunchConfigurationResult();
    AWS_SMS_API GetAppLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline GetAppLaunchConfigurationResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetAppLaunchConfigurationResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetAppLaunchConfigurationResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }
    inline GetAppLaunchConfigurationResult& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline GetAppLaunchConfigurationResult& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline GetAppLaunchConfigurationResult& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool GetAutoLaunch() const{ return m_autoLaunch; }
    inline void SetAutoLaunch(bool value) { m_autoLaunch = value; }
    inline GetAppLaunchConfigurationResult& WithAutoLaunch(bool value) { SetAutoLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const{ return m_serverGroupLaunchConfigurations; }
    inline void SetServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { m_serverGroupLaunchConfigurations = value; }
    inline void SetServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { m_serverGroupLaunchConfigurations = std::move(value); }
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { SetServerGroupLaunchConfigurations(value); return *this;}
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { SetServerGroupLaunchConfigurations(std::move(value)); return *this;}
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(const ServerGroupLaunchConfiguration& value) { m_serverGroupLaunchConfigurations.push_back(value); return *this; }
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfiguration&& value) { m_serverGroupLaunchConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAppLaunchConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAppLaunchConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAppLaunchConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;

    Aws::String m_roleName;

    bool m_autoLaunch;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
