/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class CreateServiceNetworkServiceAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateServiceNetworkServiceAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceNetworkServiceAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateServiceNetworkServiceAssociationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the service network. You must use an ARN if the resources
     * are in different accounts.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const{ return m_serviceNetworkIdentifier; }
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }
    inline void SetServiceNetworkIdentifier(const Aws::String& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = value; }
    inline void SetServiceNetworkIdentifier(Aws::String&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::move(value); }
    inline void SetServiceNetworkIdentifier(const char* value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier.assign(value); }
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceNetworkIdentifier(const Aws::String& value) { SetServiceNetworkIdentifier(value); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceNetworkIdentifier(Aws::String&& value) { SetServiceNetworkIdentifier(std::move(value)); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithServiceNetworkIdentifier(const char* value) { SetServiceNetworkIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the association.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServiceNetworkServiceAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateServiceNetworkServiceAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
