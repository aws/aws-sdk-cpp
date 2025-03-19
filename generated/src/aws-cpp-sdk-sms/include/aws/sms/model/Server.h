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
    AWS_SMS_API Server() = default;
    AWS_SMS_API Server(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    Server& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server.</p>
     */
    inline ServerType GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(ServerType value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline Server& WithServerType(ServerType value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const { return m_vmServer; }
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }
    template<typename VmServerT = VmServer>
    void SetVmServer(VmServerT&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::forward<VmServerT>(value); }
    template<typename VmServerT = VmServer>
    Server& WithVmServer(VmServerT&& value) { SetVmServer(std::forward<VmServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const { return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    template<typename ReplicationJobIdT = Aws::String>
    void SetReplicationJobId(ReplicationJobIdT&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::forward<ReplicationJobIdT>(value); }
    template<typename ReplicationJobIdT = Aws::String>
    Server& WithReplicationJobId(ReplicationJobIdT&& value) { SetReplicationJobId(std::forward<ReplicationJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline bool GetReplicationJobTerminated() const { return m_replicationJobTerminated; }
    inline bool ReplicationJobTerminatedHasBeenSet() const { return m_replicationJobTerminatedHasBeenSet; }
    inline void SetReplicationJobTerminated(bool value) { m_replicationJobTerminatedHasBeenSet = true; m_replicationJobTerminated = value; }
    inline Server& WithReplicationJobTerminated(bool value) { SetReplicationJobTerminated(value); return *this;}
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    ServerType m_serverType{ServerType::NOT_SET};
    bool m_serverTypeHasBeenSet = false;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet = false;

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    bool m_replicationJobTerminated{false};
    bool m_replicationJobTerminatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
