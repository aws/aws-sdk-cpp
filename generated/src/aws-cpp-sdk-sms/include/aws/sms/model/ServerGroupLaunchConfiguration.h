/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerLaunchConfiguration.h>
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
   * <p>Launch configuration for a server group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroupLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerGroupLaunchConfiguration
  {
  public:
    AWS_SMS_API ServerGroupLaunchConfiguration() = default;
    AWS_SMS_API ServerGroupLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline const Aws::String& GetServerGroupId() const { return m_serverGroupId; }
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }
    template<typename ServerGroupIdT = Aws::String>
    void SetServerGroupId(ServerGroupIdT&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::forward<ServerGroupIdT>(value); }
    template<typename ServerGroupIdT = Aws::String>
    ServerGroupLaunchConfiguration& WithServerGroupId(ServerGroupIdT&& value) { SetServerGroupId(std::forward<ServerGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch order of servers in the server group.</p>
     */
    inline int GetLaunchOrder() const { return m_launchOrder; }
    inline bool LaunchOrderHasBeenSet() const { return m_launchOrderHasBeenSet; }
    inline void SetLaunchOrder(int value) { m_launchOrderHasBeenSet = true; m_launchOrder = value; }
    inline ServerGroupLaunchConfiguration& WithLaunchOrder(int value) { SetLaunchOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerLaunchConfiguration>& GetServerLaunchConfigurations() const { return m_serverLaunchConfigurations; }
    inline bool ServerLaunchConfigurationsHasBeenSet() const { return m_serverLaunchConfigurationsHasBeenSet; }
    template<typename ServerLaunchConfigurationsT = Aws::Vector<ServerLaunchConfiguration>>
    void SetServerLaunchConfigurations(ServerLaunchConfigurationsT&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations = std::forward<ServerLaunchConfigurationsT>(value); }
    template<typename ServerLaunchConfigurationsT = Aws::Vector<ServerLaunchConfiguration>>
    ServerGroupLaunchConfiguration& WithServerLaunchConfigurations(ServerLaunchConfigurationsT&& value) { SetServerLaunchConfigurations(std::forward<ServerLaunchConfigurationsT>(value)); return *this;}
    template<typename ServerLaunchConfigurationsT = ServerLaunchConfiguration>
    ServerGroupLaunchConfiguration& AddServerLaunchConfigurations(ServerLaunchConfigurationsT&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations.emplace_back(std::forward<ServerLaunchConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    int m_launchOrder{0};
    bool m_launchOrderHasBeenSet = false;

    Aws::Vector<ServerLaunchConfiguration> m_serverLaunchConfigurations;
    bool m_serverLaunchConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
