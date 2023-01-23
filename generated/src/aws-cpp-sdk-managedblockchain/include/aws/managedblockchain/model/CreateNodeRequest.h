/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NodeConfiguration.h>
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
  class CreateNodeRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNode"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateNodeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateNodeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateNodeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline CreateNodeRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline CreateNodeRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network for the node.</p> <p>Ethereum public
     * networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline CreateNodeRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline CreateNodeRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline CreateNodeRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric.</p>
     */
    inline CreateNodeRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The properties of a node configuration.</p>
     */
    inline const NodeConfiguration& GetNodeConfiguration() const{ return m_nodeConfiguration; }

    /**
     * <p>The properties of a node configuration.</p>
     */
    inline bool NodeConfigurationHasBeenSet() const { return m_nodeConfigurationHasBeenSet; }

    /**
     * <p>The properties of a node configuration.</p>
     */
    inline void SetNodeConfiguration(const NodeConfiguration& value) { m_nodeConfigurationHasBeenSet = true; m_nodeConfiguration = value; }

    /**
     * <p>The properties of a node configuration.</p>
     */
    inline void SetNodeConfiguration(NodeConfiguration&& value) { m_nodeConfigurationHasBeenSet = true; m_nodeConfiguration = std::move(value); }

    /**
     * <p>The properties of a node configuration.</p>
     */
    inline CreateNodeRequest& WithNodeConfiguration(const NodeConfiguration& value) { SetNodeConfiguration(value); return *this;}

    /**
     * <p>The properties of a node configuration.</p>
     */
    inline CreateNodeRequest& WithNodeConfiguration(NodeConfiguration&& value) { SetNodeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the node. Each tag consists of a key and optional
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
    inline CreateNodeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    NodeConfiguration m_nodeConfiguration;
    bool m_nodeConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
