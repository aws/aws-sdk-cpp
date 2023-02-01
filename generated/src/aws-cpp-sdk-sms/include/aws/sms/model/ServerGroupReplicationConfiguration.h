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
    AWS_SMS_API ServerGroupReplicationConfiguration();
    AWS_SMS_API ServerGroupReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server group with which this replication configuration is
     * associated.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerReplicationConfiguration>& GetServerReplicationConfigurations() const{ return m_serverReplicationConfigurations; }

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline bool ServerReplicationConfigurationsHasBeenSet() const { return m_serverReplicationConfigurationsHasBeenSet; }

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline void SetServerReplicationConfigurations(const Aws::Vector<ServerReplicationConfiguration>& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations = value; }

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline void SetServerReplicationConfigurations(Aws::Vector<ServerReplicationConfiguration>&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations = std::move(value); }

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerReplicationConfigurations(const Aws::Vector<ServerReplicationConfiguration>& value) { SetServerReplicationConfigurations(value); return *this;}

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerReplicationConfigurations(Aws::Vector<ServerReplicationConfiguration>&& value) { SetServerReplicationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& AddServerReplicationConfigurations(const ServerReplicationConfiguration& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations.push_back(value); return *this; }

    /**
     * <p>The replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& AddServerReplicationConfigurations(ServerReplicationConfiguration&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    Aws::Vector<ServerReplicationConfiguration> m_serverReplicationConfigurations;
    bool m_serverReplicationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
