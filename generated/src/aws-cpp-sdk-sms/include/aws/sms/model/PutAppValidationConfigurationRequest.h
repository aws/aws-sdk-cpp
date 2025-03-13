/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/sms/model/ServerGroupValidationConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class PutAppValidationConfigurationRequest : public SMSRequest
  {
  public:
    AWS_SMS_API PutAppValidationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppValidationConfiguration"; }

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
    PutAppValidationConfigurationRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for application validation.</p>
     */
    inline const Aws::Vector<AppValidationConfiguration>& GetAppValidationConfigurations() const { return m_appValidationConfigurations; }
    inline bool AppValidationConfigurationsHasBeenSet() const { return m_appValidationConfigurationsHasBeenSet; }
    template<typename AppValidationConfigurationsT = Aws::Vector<AppValidationConfiguration>>
    void SetAppValidationConfigurations(AppValidationConfigurationsT&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations = std::forward<AppValidationConfigurationsT>(value); }
    template<typename AppValidationConfigurationsT = Aws::Vector<AppValidationConfiguration>>
    PutAppValidationConfigurationRequest& WithAppValidationConfigurations(AppValidationConfigurationsT&& value) { SetAppValidationConfigurations(std::forward<AppValidationConfigurationsT>(value)); return *this;}
    template<typename AppValidationConfigurationsT = AppValidationConfiguration>
    PutAppValidationConfigurationRequest& AddAppValidationConfigurations(AppValidationConfigurationsT&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations.emplace_back(std::forward<AppValidationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for instance validation.</p>
     */
    inline const Aws::Vector<ServerGroupValidationConfiguration>& GetServerGroupValidationConfigurations() const { return m_serverGroupValidationConfigurations; }
    inline bool ServerGroupValidationConfigurationsHasBeenSet() const { return m_serverGroupValidationConfigurationsHasBeenSet; }
    template<typename ServerGroupValidationConfigurationsT = Aws::Vector<ServerGroupValidationConfiguration>>
    void SetServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations = std::forward<ServerGroupValidationConfigurationsT>(value); }
    template<typename ServerGroupValidationConfigurationsT = Aws::Vector<ServerGroupValidationConfiguration>>
    PutAppValidationConfigurationRequest& WithServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { SetServerGroupValidationConfigurations(std::forward<ServerGroupValidationConfigurationsT>(value)); return *this;}
    template<typename ServerGroupValidationConfigurationsT = ServerGroupValidationConfiguration>
    PutAppValidationConfigurationRequest& AddServerGroupValidationConfigurations(ServerGroupValidationConfigurationsT&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations.emplace_back(std::forward<ServerGroupValidationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<AppValidationConfiguration> m_appValidationConfigurations;
    bool m_appValidationConfigurationsHasBeenSet = false;

    Aws::Vector<ServerGroupValidationConfiguration> m_serverGroupValidationConfigurations;
    bool m_serverGroupValidationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
