/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Server.h>
#include <aws/sms/model/ServerReplicationParameters.h>
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
   * <p>Replication configuration of a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerReplicationConfiguration
  {
  public:
    AWS_SMS_API ServerReplicationConfiguration();
    AWS_SMS_API ServerReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server with which this replication configuration is
     * associated.</p>
     */
    inline const Server& GetServer() const{ return m_server; }
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }
    inline ServerReplicationConfiguration& WithServer(const Server& value) { SetServer(value); return *this;}
    inline ServerReplicationConfiguration& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for replicating the server.</p>
     */
    inline const ServerReplicationParameters& GetServerReplicationParameters() const{ return m_serverReplicationParameters; }
    inline bool ServerReplicationParametersHasBeenSet() const { return m_serverReplicationParametersHasBeenSet; }
    inline void SetServerReplicationParameters(const ServerReplicationParameters& value) { m_serverReplicationParametersHasBeenSet = true; m_serverReplicationParameters = value; }
    inline void SetServerReplicationParameters(ServerReplicationParameters&& value) { m_serverReplicationParametersHasBeenSet = true; m_serverReplicationParameters = std::move(value); }
    inline ServerReplicationConfiguration& WithServerReplicationParameters(const ServerReplicationParameters& value) { SetServerReplicationParameters(value); return *this;}
    inline ServerReplicationConfiguration& WithServerReplicationParameters(ServerReplicationParameters&& value) { SetServerReplicationParameters(std::move(value)); return *this;}
    ///@}
  private:

    Server m_server;
    bool m_serverHasBeenSet = false;

    ServerReplicationParameters m_serverReplicationParameters;
    bool m_serverReplicationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
