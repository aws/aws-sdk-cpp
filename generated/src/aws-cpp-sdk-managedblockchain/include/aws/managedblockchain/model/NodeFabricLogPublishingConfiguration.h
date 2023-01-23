/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/LogConfigurations.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties for logging events associated with a peer node owned
   * by a member in a Managed Blockchain network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeFabricLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class NodeFabricLogPublishingConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricLogPublishingConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline const LogConfigurations& GetChaincodeLogs() const{ return m_chaincodeLogs; }

    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline bool ChaincodeLogsHasBeenSet() const { return m_chaincodeLogsHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline void SetChaincodeLogs(const LogConfigurations& value) { m_chaincodeLogsHasBeenSet = true; m_chaincodeLogs = value; }

    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline void SetChaincodeLogs(LogConfigurations&& value) { m_chaincodeLogsHasBeenSet = true; m_chaincodeLogs = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline NodeFabricLogPublishingConfiguration& WithChaincodeLogs(const LogConfigurations& value) { SetChaincodeLogs(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with chaincode
     * execution on a peer node. Chaincode logs contain the results of instantiating,
     * invoking, and querying the chaincode. A peer can run multiple instances of
     * chaincode. When enabled, a log stream is created for all chaincodes, with an
     * individual log stream for each chaincode.</p>
     */
    inline NodeFabricLogPublishingConfiguration& WithChaincodeLogs(LogConfigurations&& value) { SetChaincodeLogs(std::move(value)); return *this;}


    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline const LogConfigurations& GetPeerLogs() const{ return m_peerLogs; }

    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline bool PeerLogsHasBeenSet() const { return m_peerLogsHasBeenSet; }

    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline void SetPeerLogs(const LogConfigurations& value) { m_peerLogsHasBeenSet = true; m_peerLogs = value; }

    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline void SetPeerLogs(LogConfigurations&& value) { m_peerLogsHasBeenSet = true; m_peerLogs = std::move(value); }

    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline NodeFabricLogPublishingConfiguration& WithPeerLogs(const LogConfigurations& value) { SetPeerLogs(value); return *this;}

    /**
     * <p>Configuration properties for a peer node log. Peer node logs contain messages
     * generated when your client submits transaction proposals to peer nodes, requests
     * to join channels, enrolls an admin peer, and lists the chaincode instances on a
     * peer node. </p>
     */
    inline NodeFabricLogPublishingConfiguration& WithPeerLogs(LogConfigurations&& value) { SetPeerLogs(std::move(value)); return *this;}

  private:

    LogConfigurations m_chaincodeLogs;
    bool m_chaincodeLogsHasBeenSet = false;

    LogConfigurations m_peerLogs;
    bool m_peerLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
