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
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetwork"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline CreateNetworkRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline CreateNetworkRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline CreateNetworkRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the network.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline CreateNetworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline CreateNetworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline CreateNetworkRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the network.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the network.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the network.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the network.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the network.</p>
     */
    inline CreateNetworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the network.</p>
     */
    inline CreateNetworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the network.</p>
     */
    inline CreateNetworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline CreateNetworkRequest& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline CreateNetworkRequest& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline CreateNetworkRequest& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline CreateNetworkRequest& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline CreateNetworkRequest& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}


    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline const NetworkFrameworkConfiguration& GetFrameworkConfiguration() const{ return m_frameworkConfiguration; }

    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }

    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline void SetFrameworkConfiguration(const NetworkFrameworkConfiguration& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = value; }

    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline void SetFrameworkConfiguration(NetworkFrameworkConfiguration&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::move(value); }

    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline CreateNetworkRequest& WithFrameworkConfiguration(const NetworkFrameworkConfiguration& value) { SetFrameworkConfiguration(value); return *this;}

    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline CreateNetworkRequest& WithFrameworkConfiguration(NetworkFrameworkConfiguration&& value) { SetFrameworkConfiguration(std::move(value)); return *this;}


    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline const VotingPolicy& GetVotingPolicy() const{ return m_votingPolicy; }

    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline bool VotingPolicyHasBeenSet() const { return m_votingPolicyHasBeenSet; }

    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline void SetVotingPolicy(const VotingPolicy& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = value; }

    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline void SetVotingPolicy(VotingPolicy&& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = std::move(value); }

    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline CreateNetworkRequest& WithVotingPolicy(const VotingPolicy& value) { SetVotingPolicy(value); return *this;}

    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline CreateNetworkRequest& WithVotingPolicy(VotingPolicy&& value) { SetVotingPolicy(std::move(value)); return *this;}


    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline const MemberConfiguration& GetMemberConfiguration() const{ return m_memberConfiguration; }

    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline bool MemberConfigurationHasBeenSet() const { return m_memberConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline void SetMemberConfiguration(const MemberConfiguration& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = value; }

    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline void SetMemberConfiguration(MemberConfiguration&& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = std::move(value); }

    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline CreateNetworkRequest& WithMemberConfiguration(const MemberConfiguration& value) { SetMemberConfiguration(value); return *this;}

    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline CreateNetworkRequest& WithMemberConfiguration(MemberConfiguration&& value) { SetMemberConfiguration(std::move(value)); return *this;}


    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the network. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateNetworkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Framework m_framework;
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
