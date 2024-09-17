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
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline NodeConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline NodeConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline NodeConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline NodeConfiguration& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline NodeConfiguration& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline NodeConfiguration& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline const NodeLogPublishingConfiguration& GetLogPublishingConfiguration() const{ return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    inline void SetLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = value; }
    inline void SetLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::move(value); }
    inline NodeConfiguration& WithLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { SetLogPublishingConfiguration(value); return *this;}
    inline NodeConfiguration& WithLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { SetLogPublishingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline const StateDBType& GetStateDB() const{ return m_stateDB; }
    inline bool StateDBHasBeenSet() const { return m_stateDBHasBeenSet; }
    inline void SetStateDB(const StateDBType& value) { m_stateDBHasBeenSet = true; m_stateDB = value; }
    inline void SetStateDB(StateDBType&& value) { m_stateDBHasBeenSet = true; m_stateDB = std::move(value); }
    inline NodeConfiguration& WithStateDB(const StateDBType& value) { SetStateDB(value); return *this;}
    inline NodeConfiguration& WithStateDB(StateDBType&& value) { SetStateDB(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    NodeLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    StateDBType m_stateDB;
    bool m_stateDBHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
