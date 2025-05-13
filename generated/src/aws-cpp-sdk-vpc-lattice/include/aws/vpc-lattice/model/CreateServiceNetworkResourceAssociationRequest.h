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
  class CreateServiceNetworkResourceAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateServiceNetworkResourceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceNetworkResourceAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateServiceNetworkResourceAssociationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration to associate with the service
     * network.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const { return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    void SetResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::forward<ResourceConfigurationIdentifierT>(value); }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    CreateServiceNetworkResourceAssociationRequest& WithResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { SetResourceConfigurationIdentifier(std::forward<ResourceConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network to associate with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const { return m_serviceNetworkIdentifier; }
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    void SetServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::forward<ServiceNetworkIdentifierT>(value); }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    CreateServiceNetworkResourceAssociationRequest& WithServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { SetServiceNetworkIdentifier(std::forward<ServiceNetworkIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the association.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateServiceNetworkResourceAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateServiceNetworkResourceAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_resourceConfigurationIdentifier;
    bool m_resourceConfigurationIdentifierHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
