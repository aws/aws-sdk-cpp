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
  class ListResourceConfigurationsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListResourceConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceConfigurations"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum page size.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListResourceConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupIdentifier() const { return m_resourceConfigurationGroupIdentifier; }
    inline bool ResourceConfigurationGroupIdentifierHasBeenSet() const { return m_resourceConfigurationGroupIdentifierHasBeenSet; }
    template<typename ResourceConfigurationGroupIdentifierT = Aws::String>
    void SetResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) { m_resourceConfigurationGroupIdentifierHasBeenSet = true; m_resourceConfigurationGroupIdentifier = std::forward<ResourceConfigurationGroupIdentifierT>(value); }
    template<typename ResourceConfigurationGroupIdentifierT = Aws::String>
    ListResourceConfigurationsRequest& WithResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) { SetResourceConfigurationGroupIdentifier(std::forward<ResourceConfigurationGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway for the resource configuration.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const { return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    void SetResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::forward<ResourceGatewayIdentifierT>(value); }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    ListResourceConfigurationsRequest& WithResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { SetResourceGatewayIdentifier(std::forward<ResourceGatewayIdentifierT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupIdentifier;
    bool m_resourceConfigurationGroupIdentifierHasBeenSet = false;

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
