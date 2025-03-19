/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class PutAppReplicationConfigurationRequest : public SMSRequest
  {
  public:
    AWS_SMS_API PutAppReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppReplicationConfiguration"; }

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
    PutAppReplicationConfigurationRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the replication configurations for server groups in the
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const { return m_serverGroupReplicationConfigurations; }
    inline bool ServerGroupReplicationConfigurationsHasBeenSet() const { return m_serverGroupReplicationConfigurationsHasBeenSet; }
    template<typename ServerGroupReplicationConfigurationsT = Aws::Vector<ServerGroupReplicationConfiguration>>
    void SetServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations = std::forward<ServerGroupReplicationConfigurationsT>(value); }
    template<typename ServerGroupReplicationConfigurationsT = Aws::Vector<ServerGroupReplicationConfiguration>>
    PutAppReplicationConfigurationRequest& WithServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { SetServerGroupReplicationConfigurations(std::forward<ServerGroupReplicationConfigurationsT>(value)); return *this;}
    template<typename ServerGroupReplicationConfigurationsT = ServerGroupReplicationConfiguration>
    PutAppReplicationConfigurationRequest& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations.emplace_back(std::forward<ServerGroupReplicationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;
    bool m_serverGroupReplicationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
