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
  class ListServiceNetworkResourceAssociationsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListServiceNetworkResourceAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceNetworkResourceAssociations"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum page size.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceNetworkResourceAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServiceNetworkResourceAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configurationk.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const{ return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    inline void SetResourceConfigurationIdentifier(const Aws::String& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = value; }
    inline void SetResourceConfigurationIdentifier(Aws::String&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::move(value); }
    inline void SetResourceConfigurationIdentifier(const char* value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier.assign(value); }
    inline ListServiceNetworkResourceAssociationsRequest& WithResourceConfigurationIdentifier(const Aws::String& value) { SetResourceConfigurationIdentifier(value); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithResourceConfigurationIdentifier(Aws::String&& value) { SetResourceConfigurationIdentifier(std::move(value)); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithResourceConfigurationIdentifier(const char* value) { SetResourceConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const{ return m_serviceNetworkIdentifier; }
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }
    inline void SetServiceNetworkIdentifier(const Aws::String& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = value; }
    inline void SetServiceNetworkIdentifier(Aws::String&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::move(value); }
    inline void SetServiceNetworkIdentifier(const char* value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier.assign(value); }
    inline ListServiceNetworkResourceAssociationsRequest& WithServiceNetworkIdentifier(const Aws::String& value) { SetServiceNetworkIdentifier(value); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithServiceNetworkIdentifier(Aws::String&& value) { SetServiceNetworkIdentifier(std::move(value)); return *this;}
    inline ListServiceNetworkResourceAssociationsRequest& WithServiceNetworkIdentifier(const char* value) { SetServiceNetworkIdentifier(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceConfigurationIdentifier;
    bool m_resourceConfigurationIdentifierHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
