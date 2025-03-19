/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/sms/model/ServerGroupValidationConfiguration.h>
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
  class GetAppValidationConfigurationResult
  {
  public:
    AWS_SMS_API GetAppValidationConfigurationResult() = default;
    AWS_SMS_API GetAppValidationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppValidationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration for application validation.</p>
     */
    inline const Aws::Vector<AppValidationConfiguration>& GetAppValidationConfigurations() const { return m_appValidationConfigurations; }
    template<typename AppValidationConfigurationsT = Aws::Vector<AppValidationConfiguration>>
    void SetAppValidationConfigurations(AppValidationConfigurationsT&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations = std::forward<AppValidationConfigurationsT>(value); }
    template<typename AppValidationConfigurationsT = Aws::Vector<AppValidationConfiguration>>
    GetAppValidationConfigurationResult& WithAppValidationConfigurations(AppValidationConfigurationsT&& value) { SetAppValidationConfigurations(std::forward<AppValidationConfigurationsT>(value)); return *this;}
    template<typename AppValidationConfigurationsT = AppValidationConfiguration>
    GetAppValidationConfigurationResult& AddAppValidationConfigurations(AppValidationConfigurationsT&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations.emplace_back(std::forward<AppValidationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for instance validation.</p>
     */
    inline const Aws::Vector<ServerGroupValidationConfiguration>& GetServerGroupValidationConfigurations() const { return m_serverGroupValidationConfigurations; }
    template<typename ServerGroupValidationConfigurationsT = Aws::Vector<ServerGroupValidationConfiguration>>
    void SetServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations = std::forward<ServerGroupValidationConfigurationsT>(value); }
    template<typename ServerGroupValidationConfigurationsT = Aws::Vector<ServerGroupValidationConfiguration>>
    GetAppValidationConfigurationResult& WithServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { SetServerGroupValidationConfigurations(std::forward<ServerGroupValidationConfigurationsT>(value)); return *this;}
    template<typename ServerGroupValidationConfigurationsT = ServerGroupValidationConfiguration>
    GetAppValidationConfigurationResult& AddServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations.emplace_back(std::forward<ServerGroupValidationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppValidationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppValidationConfiguration> m_appValidationConfigurations;
    bool m_appValidationConfigurationsHasBeenSet = false;

    Aws::Vector<ServerGroupValidationConfiguration> m_serverGroupValidationConfigurations;
    bool m_serverGroupValidationConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
