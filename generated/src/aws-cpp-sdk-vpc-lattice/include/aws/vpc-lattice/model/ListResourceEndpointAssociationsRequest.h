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
    AWS_VPCLATTICE_API ListResourceEndpointAssociationsRequest();

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
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceEndpointAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListResourceEndpointAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the resource configuration associated with the VPC endpoint.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const{ return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    inline void SetResourceConfigurationIdentifier(const Aws::String& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = value; }
    inline void SetResourceConfigurationIdentifier(Aws::String&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::move(value); }
    inline void SetResourceConfigurationIdentifier(const char* value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier.assign(value); }
    inline ListResourceEndpointAssociationsRequest& WithResourceConfigurationIdentifier(const Aws::String& value) { SetResourceConfigurationIdentifier(value); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithResourceConfigurationIdentifier(Aws::String&& value) { SetResourceConfigurationIdentifier(std::move(value)); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithResourceConfigurationIdentifier(const char* value) { SetResourceConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetResourceEndpointAssociationIdentifier() const{ return m_resourceEndpointAssociationIdentifier; }
    inline bool ResourceEndpointAssociationIdentifierHasBeenSet() const { return m_resourceEndpointAssociationIdentifierHasBeenSet; }
    inline void SetResourceEndpointAssociationIdentifier(const Aws::String& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = value; }
    inline void SetResourceEndpointAssociationIdentifier(Aws::String&& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = std::move(value); }
    inline void SetResourceEndpointAssociationIdentifier(const char* value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier.assign(value); }
    inline ListResourceEndpointAssociationsRequest& WithResourceEndpointAssociationIdentifier(const Aws::String& value) { SetResourceEndpointAssociationIdentifier(value); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithResourceEndpointAssociationIdentifier(Aws::String&& value) { SetResourceEndpointAssociationIdentifier(std::move(value)); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithResourceEndpointAssociationIdentifier(const char* value) { SetResourceEndpointAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint in the association.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the VPC endpoint in the association.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}
    inline ListResourceEndpointAssociationsRequest& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}
    ///@}
  private:

    int m_maxResults;
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
