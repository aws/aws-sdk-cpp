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
    AWS_SMS_API ServerGroupLaunchConfiguration();
    AWS_SMS_API ServerGroupLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server group with which the launch configuration is
     * associated.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>The launch order of servers in the server group.</p>
     */
    inline int GetLaunchOrder() const{ return m_launchOrder; }

    /**
     * <p>The launch order of servers in the server group.</p>
     */
    inline bool LaunchOrderHasBeenSet() const { return m_launchOrderHasBeenSet; }

    /**
     * <p>The launch order of servers in the server group.</p>
     */
    inline void SetLaunchOrder(int value) { m_launchOrderHasBeenSet = true; m_launchOrder = value; }

    /**
     * <p>The launch order of servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithLaunchOrder(int value) { SetLaunchOrder(value); return *this;}


    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerLaunchConfiguration>& GetServerLaunchConfigurations() const{ return m_serverLaunchConfigurations; }

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline bool ServerLaunchConfigurationsHasBeenSet() const { return m_serverLaunchConfigurationsHasBeenSet; }

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline void SetServerLaunchConfigurations(const Aws::Vector<ServerLaunchConfiguration>& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations = value; }

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline void SetServerLaunchConfigurations(Aws::Vector<ServerLaunchConfiguration>&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations = std::move(value); }

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerLaunchConfigurations(const Aws::Vector<ServerLaunchConfiguration>& value) { SetServerLaunchConfigurations(value); return *this;}

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerLaunchConfigurations(Aws::Vector<ServerLaunchConfiguration>&& value) { SetServerLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& AddServerLaunchConfigurations(const ServerLaunchConfiguration& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>The launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& AddServerLaunchConfigurations(ServerLaunchConfiguration&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    int m_launchOrder;
    bool m_launchOrderHasBeenSet = false;

    Aws::Vector<ServerLaunchConfiguration> m_serverLaunchConfigurations;
    bool m_serverLaunchConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
