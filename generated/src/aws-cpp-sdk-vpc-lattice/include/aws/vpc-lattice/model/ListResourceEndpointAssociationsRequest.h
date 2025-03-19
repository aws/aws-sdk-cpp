/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class ListResourceEndpointAssociationsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListResourceEndpointAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceEndpointAssociations"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum page size.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceEndpointAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceEndpointAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the resource configuration associated with the VPC endpoint.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const { return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    void SetResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::forward<ResourceConfigurationIdentifierT>(value); }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    ListResourceEndpointAssociationsRequest& WithResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { SetResourceConfigurationIdentifier(std::forward<ResourceConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetResourceEndpointAssociationIdentifier() const { return m_resourceEndpointAssociationIdentifier; }
    inline bool ResourceEndpointAssociationIdentifierHasBeenSet() const { return m_resourceEndpointAssociationIdentifierHasBeenSet; }
    template<typename ResourceEndpointAssociationIdentifierT = Aws::String>
    void SetResourceEndpointAssociationIdentifier(ResourceEndpointAssociationIdentifierT&& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = std::forward<ResourceEndpointAssociationIdentifierT>(value); }
    template<typename ResourceEndpointAssociationIdentifierT = Aws::String>
    ListResourceEndpointAssociationsRequest& WithResourceEndpointAssociationIdentifier(ResourceEndpointAssociationIdentifierT&& value) { SetResourceEndpointAssociationIdentifier(std::forward<ResourceEndpointAssociationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint in the association.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    ListResourceEndpointAssociationsRequest& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the VPC endpoint in the association.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const { return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    template<typename VpcEndpointOwnerT = Aws::String>
    void SetVpcEndpointOwner(VpcEndpointOwnerT&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::forward<VpcEndpointOwnerT>(value); }
    template<typename VpcEndpointOwnerT = Aws::String>
    ListResourceEndpointAssociationsRequest& WithVpcEndpointOwner(VpcEndpointOwnerT&& value) { SetVpcEndpointOwner(std::forward<VpcEndpointOwnerT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceConfigurationIdentifier;
    bool m_resourceConfigurationIdentifierHasBeenSet = false;

    Aws::String m_resourceEndpointAssociationIdentifier;
    bool m_resourceEndpointAssociationIdentifierHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
