/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerReplicationConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * <p>Replication configuration for a server group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroupReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerGroupReplicationConfiguration
  {
  public:
    AWS_SMS_API ServerGroupReplicationConfiguration() = default;
    AWS_SMS_API ServerGroupReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline const Aws::String& GetServerGroupId() const { return m_serverGroupId; }
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }
    template<typename ServerGroupIdT = Aws::String>
    void SetServerGroupId(ServerGroupIdT&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::forward<ServerGroupIdT>(value); }
    template<typename ServerGroupIdT = Aws::String>
    ServerGroupReplicationConfiguration& WithServerGroupId(ServerGroupIdT&& value) { SetServerGroupId(std::forward<ServerGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerReplicationConfiguration>& GetServerReplicationConfigurations() const { return m_serverReplicationConfigurations; }
    inline bool ServerReplicationConfigurationsHasBeenSet() const { return m_serverReplicationConfigurationsHasBeenSet; }
    template<typename ServerReplicationConfigurationsT = Aws::Vector<ServerReplicationConfiguration>>
    void SetServerReplicationConfigurations(ServerReplicationConfigurationsT&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations = std::forward<ServerReplicationConfigurationsT>(value); }
    template<typename ServerReplicationConfigurationsT = Aws::Vector<ServerReplicationConfiguration>>
    ServerGroupReplicationConfiguration& WithServerReplicationConfigurations(ServerReplicationConfigurationsT&& value) { SetServerReplicationConfigurations(std::forward<ServerReplicationConfigurationsT>(value)); return *this;}
    template<typename ServerReplicationConfigurationsT = ServerReplicationConfiguration>
    ServerGroupReplicationConfiguration& AddServerReplicationConfigurations(ServerReplicationConfigurationsT&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations.emplace_back(std::forward<ServerReplicationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    Aws::Vector<ServerReplicationConfiguration> m_serverReplicationConfigurations;
    bool m_serverReplicationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
