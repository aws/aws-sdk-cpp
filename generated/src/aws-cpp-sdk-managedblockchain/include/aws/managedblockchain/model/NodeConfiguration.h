/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NodeLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/StateDBType.h>
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
   * <p>Configuration properties of a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeConfiguration">AWS
   * API Reference</a></p>
   */
  class NodeConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration() = default;
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    NodeConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    NodeConfiguration& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline const NodeLogPublishingConfiguration& GetLogPublishingConfiguration() const { return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    template<typename LogPublishingConfigurationT = NodeLogPublishingConfiguration>
    void SetLogPublishingConfiguration(LogPublishingConfigurationT&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::forward<LogPublishingConfigurationT>(value); }
    template<typename LogPublishingConfigurationT = NodeLogPublishingConfiguration>
    NodeConfiguration& WithLogPublishingConfiguration(LogPublishingConfigurationT&& value) { SetLogPublishingConfiguration(std::forward<LogPublishingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline StateDBType GetStateDB() const { return m_stateDB; }
    inline bool StateDBHasBeenSet() const { return m_stateDBHasBeenSet; }
    inline void SetStateDB(StateDBType value) { m_stateDBHasBeenSet = true; m_stateDB = value; }
    inline NodeConfiguration& WithStateDB(StateDBType value) { SetStateDB(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    NodeLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    StateDBType m_stateDB{StateDBType::NOT_SET};
    bool m_stateDBHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
