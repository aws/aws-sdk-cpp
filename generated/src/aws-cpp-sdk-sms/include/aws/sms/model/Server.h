/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerType.h>
#include <aws/sms/model/VmServer.h>
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
   * <p>Represents a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/Server">AWS API
   * Reference</a></p>
   */
  class Server
  {
  public:
    AWS_SMS_API Server();
    AWS_SMS_API Server(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }
    inline Server& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline Server& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline Server& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline Server& WithServerType(const ServerType& value) { SetServerType(value); return *this;}
    inline Server& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const{ return m_vmServer; }
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }
    inline void SetVmServer(const VmServer& value) { m_vmServerHasBeenSet = true; m_vmServer = value; }
    inline void SetVmServer(VmServer&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::move(value); }
    inline Server& WithVmServer(const VmServer& value) { SetVmServer(value); return *this;}
    inline Server& WithVmServer(VmServer&& value) { SetVmServer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }
    inline Server& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}
    inline Server& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}
    inline Server& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline bool GetReplicationJobTerminated() const{ return m_replicationJobTerminated; }
    inline bool ReplicationJobTerminatedHasBeenSet() const { return m_replicationJobTerminatedHasBeenSet; }
    inline void SetReplicationJobTerminated(bool value) { m_replicationJobTerminatedHasBeenSet = true; m_replicationJobTerminated = value; }
    inline Server& WithReplicationJobTerminated(bool value) { SetReplicationJobTerminated(value); return *this;}
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet = false;

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    bool m_replicationJobTerminated;
    bool m_replicationJobTerminatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
