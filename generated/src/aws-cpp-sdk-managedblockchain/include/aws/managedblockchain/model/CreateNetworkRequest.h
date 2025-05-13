/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkFrameworkConfiguration.h>
#include <aws/managedblockchain/model/VotingPolicy.h>
#include <aws/managedblockchain/model/MemberConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class CreateNetworkRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetwork"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateNetworkRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNetworkRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the network.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateNetworkRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline Framework GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(Framework value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline CreateNetworkRequest& WithFramework(Framework value) { SetFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const { return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    template<typename FrameworkVersionT = Aws::String>
    void SetFrameworkVersion(FrameworkVersionT&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::forward<FrameworkVersionT>(value); }
    template<typename FrameworkVersionT = Aws::String>
    CreateNetworkRequest& WithFrameworkVersion(FrameworkVersionT&& value) { SetFrameworkVersion(std::forward<FrameworkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline const NetworkFrameworkConfiguration& GetFrameworkConfiguration() const { return m_frameworkConfiguration; }
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }
    template<typename FrameworkConfigurationT = NetworkFrameworkConfiguration>
    void SetFrameworkConfiguration(FrameworkConfigurationT&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::forward<FrameworkConfigurationT>(value); }
    template<typename FrameworkConfigurationT = NetworkFrameworkConfiguration>
    CreateNetworkRequest& WithFrameworkConfiguration(FrameworkConfigurationT&& value) { SetFrameworkConfiguration(std::forward<FrameworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline const VotingPolicy& GetVotingPolicy() const { return m_votingPolicy; }
    inline bool VotingPolicyHasBeenSet() const { return m_votingPolicyHasBeenSet; }
    template<typename VotingPolicyT = VotingPolicy>
    void SetVotingPolicy(VotingPolicyT&& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = std::forward<VotingPolicyT>(value); }
    template<typename VotingPolicyT = VotingPolicy>
    CreateNetworkRequest& WithVotingPolicy(VotingPolicyT&& value) { SetVotingPolicy(std::forward<VotingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline const MemberConfiguration& GetMemberConfiguration() const { return m_memberConfiguration; }
    inline bool MemberConfigurationHasBeenSet() const { return m_memberConfigurationHasBeenSet; }
    template<typename MemberConfigurationT = MemberConfiguration>
    void SetMemberConfiguration(MemberConfigurationT&& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = std::forward<MemberConfigurationT>(value); }
    template<typename MemberConfigurationT = MemberConfiguration>
    CreateNetworkRequest& WithMemberConfiguration(MemberConfigurationT&& value) { SetMemberConfiguration(std::forward<MemberConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the network.</p> <p> Each tag consists of a key and an
     * optional value. You can specify multiple key-value pairs in a single request
     * with an overall maximum of 50 tags allowed per resource.</p> <p>For more
     * information about tags, see <a
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
    CreateNetworkRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateNetworkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Framework m_framework{Framework::NOT_SET};
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    NetworkFrameworkConfiguration m_frameworkConfiguration;
    bool m_frameworkConfigurationHasBeenSet = false;

    VotingPolicy m_votingPolicy;
    bool m_votingPolicyHasBeenSet = false;

    MemberConfiguration m_memberConfiguration;
    bool m_memberConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
