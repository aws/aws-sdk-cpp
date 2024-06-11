/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NodeFrameworkAttributes.h>
#include <aws/managedblockchain/model/NodeLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/StateDBType.h>
#include <aws/managedblockchain/model/NodeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Node">AWS
   * API Reference</a></p>
   */
  class Node
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API Node();
    AWS_MANAGEDBLOCKCHAIN_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the network that the node is on.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline Node& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline Node& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline Node& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member to which the node belongs.</p> <p>Applies
     * only to Hyperledger Fabric.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline Node& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline Node& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline Node& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the node.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Node& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Node& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Node& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the node.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Node& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Node& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Node& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
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
    inline Node& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Node& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Node& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the blockchain framework being used.</p>
     */
    inline const NodeFrameworkAttributes& GetFrameworkAttributes() const{ return m_frameworkAttributes; }
    inline bool FrameworkAttributesHasBeenSet() const { return m_frameworkAttributesHasBeenSet; }
    inline void SetFrameworkAttributes(const NodeFrameworkAttributes& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = value; }
    inline void SetFrameworkAttributes(NodeFrameworkAttributes&& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = std::move(value); }
    inline Node& WithFrameworkAttributes(const NodeFrameworkAttributes& value) { SetFrameworkAttributes(value); return *this;}
    inline Node& WithFrameworkAttributes(NodeFrameworkAttributes&& value) { SetFrameworkAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain.</p>
     */
    inline const NodeLogPublishingConfiguration& GetLogPublishingConfiguration() const{ return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    inline void SetLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = value; }
    inline void SetLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::move(value); }
    inline Node& WithLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { SetLogPublishingConfiguration(value); return *this;}
    inline Node& WithLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { SetLogPublishingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline const StateDBType& GetStateDB() const{ return m_stateDB; }
    inline bool StateDBHasBeenSet() const { return m_stateDBHasBeenSet; }
    inline void SetStateDB(const StateDBType& value) { m_stateDBHasBeenSet = true; m_stateDB = value; }
    inline void SetStateDB(StateDBType&& value) { m_stateDBHasBeenSet = true; m_stateDB = std::move(value); }
    inline Node& WithStateDB(const StateDBType& value) { SetStateDB(value); return *this;}
    inline Node& WithStateDB(StateDBType&& value) { SetStateDB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the node.</p> <ul> <li> <p> <code>CREATING</code> - The Amazon
     * Web Services account is in the process of creating a node.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The node has been created and can participate in the
     * network.</p> </li> <li> <p> <code>UNHEALTHY</code> - The node is impaired and
     * might not function as expected. Amazon Managed Blockchain automatically finds
     * nodes in this state and tries to recover them. If a node is recoverable, it
     * returns to <code>AVAILABLE</code>. Otherwise, it moves to <code>FAILED</code>
     * status.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The Amazon Web Services
     * account attempted to create a node and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The node is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The node is in the process of being
     * deleted.</p> </li> <li> <p> <code>DELETED</code> - The node can no longer
     * participate on the network.</p> </li> <li> <p> <code>FAILED</code> - The node is
     * no longer functional, cannot be recovered, and must be deleted.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The node is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in KMS for encryption at rest. Either the KMS key was disabled or deleted,
     * or the grants on the key were revoked.</p> <p>The effect of disabling or
     * deleting a key or of revoking a grant isn't immediate. It might take some time
     * for the node resource to discover that the key is inaccessible. When a resource
     * is in this state, we recommend deleting and recreating the resource.</p> </li>
     * </ul>
     */
    inline const NodeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NodeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NodeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Node& WithStatus(const NodeStatus& value) { SetStatus(value); return *this;}
    inline Node& WithStatus(NodeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline Node& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline Node& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the node. Each tag consists of a key and optional value.</p>
     * <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Node& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Node& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Node& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Node& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Node& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Node& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Node& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Node& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Node& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the node. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Node& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Node& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Node& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) that the node uses for encryption at rest. If the value of this
     * parameter is <code>"AWS Owned KMS Key"</code>, the node uses an Amazon Web
     * Services owned KMS key for encryption. The node inherits this parameter from the
     * member that it belongs to.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline Node& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline Node& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline Node& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    NodeFrameworkAttributes m_frameworkAttributes;
    bool m_frameworkAttributesHasBeenSet = false;

    NodeLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    StateDBType m_stateDB;
    bool m_stateDBHasBeenSet = false;

    NodeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
