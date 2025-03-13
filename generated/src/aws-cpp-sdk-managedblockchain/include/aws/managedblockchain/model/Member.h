/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberFrameworkAttributes.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/MemberStatus.h>
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
   * <p>Member configuration properties.</p> <p>Applies only to Hyperledger
   * Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API Member() = default;
    AWS_MANAGEDBLOCKCHAIN_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    Member& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Member& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Member& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the member.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Member& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline const MemberFrameworkAttributes& GetFrameworkAttributes() const { return m_frameworkAttributes; }
    inline bool FrameworkAttributesHasBeenSet() const { return m_frameworkAttributesHasBeenSet; }
    template<typename FrameworkAttributesT = MemberFrameworkAttributes>
    void SetFrameworkAttributes(FrameworkAttributesT&& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = std::forward<FrameworkAttributesT>(value); }
    template<typename FrameworkAttributesT = MemberFrameworkAttributes>
    Member& WithFrameworkAttributes(FrameworkAttributesT&& value) { SetFrameworkAttributes(std::forward<FrameworkAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline const MemberLogPublishingConfiguration& GetLogPublishingConfiguration() const { return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    void SetLogPublishingConfiguration(LogPublishingConfigurationT&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::forward<LogPublishingConfigurationT>(value); }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    Member& WithLogPublishingConfiguration(LogPublishingConfigurationT&& value) { SetLogPublishingConfiguration(std::forward<LogPublishingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The Amazon
     * Web Services account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The Amazon Web Services
     * account attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the Amazon Web Services account that owns
     * the member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the Amazon Web Services account
     * that owns the member deleted it, or the member is being deleted as the result of
     * an <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * <li> <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and
     * might not function as expected because it cannot access the specified customer
     * managed key in KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key or of revoking a grant isn't immediate. It might take some
     * time for the member resource to discover that the key is inaccessible. When a
     * resource is in this state, we recommend deleting and recreating the
     * resource.</p> </li> </ul>
     */
    inline MemberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Member& WithStatus(MemberStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    Member& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value.</p>
     * <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Member& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Member& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Member& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) that the member uses for encryption at rest. If the value of this
     * parameter is <code>"AWS Owned KMS Key"</code>, the member uses an Amazon Web
     * Services owned KMS key for encryption. This parameter is inherited by the nodes
     * that this member owns.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    Member& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MemberFrameworkAttributes m_frameworkAttributes;
    bool m_frameworkAttributesHasBeenSet = false;

    MemberLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    MemberStatus m_status{MemberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
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
