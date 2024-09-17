/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/managedblockchain/model/AccessorNetworkType.h>
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
  class CreateAccessorRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessor"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateAccessorRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateAccessorRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateAccessorRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of accessor.</p>  <p>Currently, accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline const AccessorType& GetAccessorType() const{ return m_accessorType; }
    inline bool AccessorTypeHasBeenSet() const { return m_accessorTypeHasBeenSet; }
    inline void SetAccessorType(const AccessorType& value) { m_accessorTypeHasBeenSet = true; m_accessorType = value; }
    inline void SetAccessorType(AccessorType&& value) { m_accessorTypeHasBeenSet = true; m_accessorType = std::move(value); }
    inline CreateAccessorRequest& WithAccessorType(const AccessorType& value) { SetAccessorType(value); return *this;}
    inline CreateAccessorRequest& WithAccessorType(AccessorType&& value) { SetAccessorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the Accessor.</p> <p> Each tag consists of a key and an
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAccessorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAccessorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAccessorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAccessorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAccessorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAccessorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAccessorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAccessorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAccessorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blockchain network that the <code>Accessor</code> token is created
     * for.</p>  <ul> <li> <p>Use the actual <code>networkType</code> value for
     * the blockchain network that you are creating the <code>Accessor</code> token
     * for.</p> </li> <li> <p>With the shut down of the <i>Ethereum Goerli</i> and
     * <i>Polygon Mumbai Testnet</i> networks the following <code>networkType</code>
     * values are no longer available for selection and use.</p> <ul> <li> <p>
     * <code>ETHEREUM_MAINNET_AND_GOERLI</code> </p> </li> <li> <p>
     * <code>ETHEREUM_GOERLI</code> </p> </li> <li> <p> <code>POLYGON_MUMBAI</code>
     * </p> </li> </ul> <p>However, your existing <code>Accessor</code> tokens with
     * these <code>networkType</code> values will remain unchanged.</p> </li> </ul>
     * 
     */
    inline const AccessorNetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const AccessorNetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(AccessorNetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline CreateAccessorRequest& WithNetworkType(const AccessorNetworkType& value) { SetNetworkType(value); return *this;}
    inline CreateAccessorRequest& WithNetworkType(AccessorNetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    AccessorType m_accessorType;
    bool m_accessorTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AccessorNetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
